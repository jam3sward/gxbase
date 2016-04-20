/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2003-2006 James Ward, Department of Computer Science,
 * University of Hull. All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 \**************************************************************************/

#include "3dsdef.h"
#include "port.h"
#include <GL/gl.h>
#include <stdio.h>
#include <assert.h>

#include "Model.h"
#include "TModel.h"
#include "glcontextls.h"

using namespace std;
using namespace gxbase;

//-----------------------------------------------------------------------------

static const DrawStyle
	DS_StyleMask = 0xFFL;	///< Bit-mask for drawing style section of flags

//-----------------------------------------------------------------------------

#ifdef _DEBUG
#define dbg_printf printf
#else
#define dbg_printf if (0) printf
#endif

//-----------------------------------------------------------------------------

/**
 * Data associated with a particular OpenGL context
 */
struct GLCtxData {
	GLCtxData() {
		reset();
	}

	void reset() {
		drawStyle=DSHidden;
		sequence=0;

		nMatList=0;
		nMatListSize=0;
		nObjList=0;
		nObjListSize=0;
		// JWW 07/08/05 texture bind added
		pTexList=NULL;
		nTexListSize=0;
	}

	void GenLists(GLsizei numObj, GLsizei numMat, GLsizei numTex=0) {
		DelLists();
		nObjList = glGenLists(numObj);
		nObjListSize = (nObjList!=0)?numObj:0;
		nMatList = glGenLists(numMat);
		nMatListSize = (nMatList!=0)?numMat:0;
		// JWW 07/08/05 texture bind added
		if (numTex) {
			pTexList = new GLuint[numTex];
			if (pTexList != NULL) {
				glGenTextures(numTex, pTexList);
				nTexListSize = numTex;
			}
		}
	}

	void DelLists() {
		if (nObjListSize) glDeleteLists(nObjList, nObjListSize);
		nObjList = nObjListSize = 0;
		if (nMatListSize) glDeleteLists(nMatList, nMatListSize);
		nMatList = nMatListSize = 0;
		// JWW 07/08/05 texture bind added
		if (pTexList != NULL) {
			glDeleteTextures(nTexListSize, pTexList);
			delete [] pTexList;
			pTexList = NULL;
			nTexListSize = 0;
		}
	}

	//GLint list;				///< Display list ID
	GLuint nMatList;		///< Material list ID base
	GLuint nObjList;		///< Object list ID base
	GLuint nMatListSize;	///< Number of material list IDs
	GLuint nObjListSize;	///< Number of object list IDs
	GLuint *pTexList;		///> JWW 07/08/05 texture bind added
	GLuint nTexListSize;	///> JWW 07/08/05 texture bind added
	DrawStyle drawStyle;	///< Last display style
	DWORD sequence;			///< Sequence ID
};

//-----------------------------------------------------------------------------

_GXBASE_BEGIN
class ModelEx {
public:
	ModelEx();
	~ModelEx();

	void Free();
	void FreeGL();
	bool Load(const char *name);
	void Close();

	void Parse(Chunk *pChunk);
	void ParseMData(Chunk *pChunk);
	void ParseKFData(Chunk *pChunk);
	void ParseMatEntry(Chunk *pChunk);
	void ParseNamedObject(Chunk *pChunk);
	void ParseNTriObject(Chunk *pChunk, const string &name);
	Vector3f ParseColour(Chunk *pChunk);
	float ParsePercent(Chunk *pChunk);
	void ParseMatTexmap(Chunk *pChunk, TMaterial &material);

	void Draw(DrawStyle style);
	void Dump();	// TODO: remove (debug purposes)

	/**
	 * Recalculate bounding box
	 */
	void CalcBox();

	/**
	 * Return bounding box
	 */
	const Box3f &Box() const { return m_box; }

	/**
	 * Calculate number of normals/vertices for flattened mesh.
	 * Updates m_nVerts and m_nFaces.
	 */
	void PreFlatten();

	/**
	 * Transform vertex (v) by matrix (m). This is used to transform
	 * vertices when the mesh is flattened.
	 */
	static Vector3f xform(const Matrix44f &m, const Vector3f &v);

	/**
	 * Generate flattened copy of the mesh, for external access.
	 */
	void Flatten();

	/**
	 * Invalidate display list cache.
	 */
	void InvalidateCache() {
		m_sequence++;
	}

public:
	TModel m_model;

	long m_nVerts;	///< total number of vertices
	long m_nFaces;	///< total number of faces
	float m_fScale;	///< scale factor for Model::SetScale

	vector<Model::Vector3f>	m_flatVerts;	///< flattened vertex array	
	vector<Model::Vector3f> m_flatNorms;	///< flattened normal array
	vector<Model::Face>	    m_flatFaces;	///< flattened face array

private:
	void Reset();

private:
	FILE *fp;
	Box3f  m_box;
	DWORD  m_sequence;
	GLContextLS m_context;			///< Context local storage
	std::string m_directory;		///< Working directory during load
};
_GXBASE_END

//-----------------------------------------------------------------------------

ModelEx::ModelEx() {
	m_sequence=1;
	Reset();
}

//-----------------------------------------------------------------------------

ModelEx::~ModelEx() {
	Free();
}

//-----------------------------------------------------------------------------

void ModelEx::Reset() {
	fp = NULL;
	m_box.Zero();
	m_sequence++;	// display lists outdated
	m_nVerts=0;
	m_nFaces=0;
	m_fScale=1.0f;	// JWW 11/12/03 added
	m_flatVerts.clear();
	m_flatNorms.clear();
	m_flatFaces.clear();
}

//-----------------------------------------------------------------------------

void ModelEx::Close() {
	if (fp) fclose(fp);
	fp=NULL;
}

//-----------------------------------------------------------------------------

void ModelEx::Free() {
	m_model.Free();
	Close();
	Reset();
}

//-----------------------------------------------------------------------------

void ModelEx::FreeGL() {
	GLCtxData *ctx = (GLCtxData*)m_context.GetData();
	if (ctx) {
		ctx->DelLists();
		// free data associated with current context
		m_context.FreeData();
	}
}//FreeGL

//-----------------------------------------------------------------------------

// JWW 11/12/03 made new func.to calc.box
void ModelEx::CalcBox() {
	for (unsigned i=0; i<m_model.Objects().size(); i++) {
		// calculate bounding box for whole scene
		if (!i)
			m_box = m_model.Objects()[i].Box();
		else
			m_box.Include( m_model.Objects()[i].Box() );
	}
}//CalcBox

bool ModelEx::Load(const char *name) {
	if (!name) return false;

	// free existing model
	Free();

	// attempt to open file
	fp = fopen(name,"rb");
	if (!fp) return false;

#ifdef __WIN32__
	char drive[_MAX_DRIVE];
	char dir[_MAX_DIR];
	_splitpath(name, drive, dir, NULL, NULL);
	m_directory.assign( string(drive) + dir );
#else
	char *path = strdup(name);
	m_directory.assign( string(dirname(path)) + '/' );
	free(path);
#endif

	// check file header
	Chunk chunk;
	if (!chunk.Read(fp) || (chunk.ID() != M3DMAGIC)) {
		dbg_printf("3ds: bad file header\n");
		return false;
	}

	dbg_printf("3ds: file size = %ld\n", (long)chunk.Size());

	// parse the remainder of the file
	Parse(&chunk);

	// close file
	Close();

	// update all the objects, since we changed their structure
	for (unsigned i=0; i<m_model.Objects().size(); i++) {
		m_model.Objects()[i].Update();
	}
	CalcBox();	// JWW 11/12/03 added

#ifdef  _DEBUG	// TODO: remove (debug purposes)
	Dump();
#endif//_DEBUG

	if (m_model.HasSubObjTex()) {
		printf("note: model has sub-object textures\n");
		m_model.SplitByMat();
	}

	return true;
}

//-----------------------------------------------------------------------------

void ModelEx::Dump() {
	printf("---- dump ----\n");
	printf("Objects:\n");
	for (unsigned n=0; n<m_model.Objects().size(); n++) {
		// print name
		const TObject &object = m_model.Objects()[n];
		printf("  %s\n", object.GetName().c_str() );

		// show no.of verts
		int nVerts = (int)object.Vertices().size();
		printf("    verts=%d\n", nVerts);

		// show no.of tex.coords.
		int nTexUV = (int)object.TexCoords().size();
		if (nTexUV)
			printf("    texuv=%d\n", nTexUV);
	}
	printf("Materials:\n");
	for (unsigned n=0; n<m_model.Materials().size(); n++) {
		// print name
		const TMaterial &material = m_model.Materials()[n];
		printf("  %s\n", material.GetName().c_str() );
	}
	printf("Statistics:\n");
	printf("  Faces    = %ld\n", m_model.CountFaces());
	printf("  Vertices = %ld\n", m_model.CountVertices());
	printf("  Normals  = %ld\n", m_model.CountNormals());
}//Dump

//-----------------------------------------------------------------------------

void ModelEx::Parse(Chunk *pChunk) {
	Chunk *newChunk = new Chunk;

	while (pChunk->dwBytesRead < pChunk->dwSize) {
		// read sub chunk
		if (!newChunk->Read(fp)) return;

		switch (newChunk->ID()) {
		case M3D_VERSION: {
			WORD version = newChunk->ReadWord(fp);
			dbg_printf("3ds: file version %d\n", (int)version);
			} break;

		case MDATA:
			ParseMData(newChunk);
			break;

		case KFDATA:
			ParseKFData(newChunk);
			break;

		default:
			// display chunk ID
			dbg_printf("Parse: 0x%04X\n", (int)newChunk->ID());
			break;
		};

		// skip whatever is left of this chunk
		newChunk->Skip(fp);

		// update host chunk total bytes read
		pChunk->dwBytesRead += newChunk->dwBytesRead;
	}

	delete newChunk;
}//Parse

//-----------------------------------------------------------------------------

void ModelEx::ParseMData(Chunk *pChunk) {
	Chunk *newChunk = new Chunk;

	while (pChunk->dwBytesRead < pChunk->dwSize) {
		// read sub chunk
		if (!newChunk->Read(fp)) return;

		switch (newChunk->ID()) {
		case MESH_VERSION: {
			WORD version = newChunk->ReadWord(fp);
			dbg_printf("3ds: mesh version %d\n", (int)version);
			} break;

		case MAT_ENTRY:
			ParseMatEntry(newChunk);
			break;

		case MASTER_SCALE:
			break;

		case NAMED_OBJECT:
			ParseNamedObject(newChunk);
			break;

		case VIEWPORT_LAYOUT:
			//dbg_printf("ignoring VIEWPORT_LAYOUT\n");
			break;

		case DEFAULT_VIEW:
			//dbg_printf("ignoring DEFAULT_VIEW\n");
			break;

		default:
			// display chunk ID
			dbg_printf("ParseMData: 0x%04X\n", (int)newChunk->ID());
			break;
		};

		// skip whatever is left of this chunk
		newChunk->Skip(fp);

		// update host chunk total bytes read
		pChunk->dwBytesRead += newChunk->dwBytesRead;
	}

	delete newChunk;
}//ParseMData

//-----------------------------------------------------------------------------

void ModelEx::ParseKFData(Chunk *pChunk) {
	Chunk *newChunk = new Chunk;

	int nObjectID = -1;

#pragma pack (push,1)
	struct KFHeader {
		WORD flags;	// flags
		WORD ua[4];	// unknown
		WORD keys;	// number of keys
		WORD ub;	// unknown
	};
#pragma pack (pop)

	while (pChunk->dwBytesRead < pChunk->dwSize) {
		// read sub chunk
		if (!newChunk->Read(fp)) return;

		switch (newChunk->ID()) {
		case OBJECT_NODE_TAG:
			dbg_printf("OBJECT_NODE_TAG\n");
			// followed by: node_hdr, pivot, pos_track_tag, rot_track_tag,
			// scl_track_tag, morph_smooth..
			ParseKFData(newChunk);
			break;

		case /*OBJECT_NODE_TAG*/ NODE_HDR: {
			string objName = newChunk->ReadString(fp);
			dbg_printf("NODE_HDR: %s\n", objName.c_str());
			nObjectID = m_model.FindObject(objName);
			} break;

		case /*OBJECT_NODE_TAG*/ PIVOT: {
			float
				x = newChunk->ReadFloat(fp),
				y = newChunk->ReadFloat(fp),
				z = newChunk->ReadFloat(fp);
			const float vsmall = 1.0E-9f;
			if ((fabs(x)>vsmall) || (fabs(y)>vsmall) || (fabs(z)>vsmall)) {
				// unfortunately, this object has a pivot point :(
				dbg_printf("PIVOT: %.2f %.2f %.2f\n", x,y,z);
				if (nObjectID >= 0) {
					m_model.Objects()[nObjectID].SetPivot(Vector3f(x,y,z));
				} else {
					dbg_printf("PIVOT: no object for pivot!\n");
				}
			}
			} break;

		case /*OBJECT_NODE_TAG*/ POS_TRACK_TAG: {
			dbg_printf("POS_TRACK_TAG\n");
			KFHeader head;
			if (newChunk->Read(&head,sizeof(head),fp)) {
				// we only read the first key
				//for (int n=0; n<(int)head.keys; n++) {
					//WORD frameNum = 
					newChunk->ReadWord(fp);		// frameNum
					newChunk->ReadDWord(fp);	// unknown
					float
						x = newChunk->ReadFloat(fp),
						y = newChunk->ReadFloat(fp),
						z = newChunk->ReadFloat(fp);
					dbg_printf(" key pos: (%.2f %.2f %.2f)\n", x,y,z);
				//}//for
			}//if
			} break;
		case /*OBJECT_NODE_TAG*/ ROT_TRACK_TAG:
			dbg_printf("ROT_TRACK_TAG\n");
			KFHeader head;
			if (newChunk->Read(&head,sizeof(head),fp)) {
				// we only read the first key
				//for (int n=0; n<(int)head.keys; n++) {
					//WORD frameNum =
					newChunk->ReadWord(fp);		// frameNum
					newChunk->ReadDWord(fp);	// unknown
					float
						a = newChunk->ReadFloat(fp),
						x = newChunk->ReadFloat(fp),
						y = newChunk->ReadFloat(fp),
						z = newChunk->ReadFloat(fp);
					dbg_printf(" key rot: %.2f (%.2f %.2f %.2f)\n", a,x,y,z);
				//}//for
			}//if
			break;
		case /*OBJECT_NODE_TAG*/ SCL_TRACK_TAG: {
			dbg_printf("SCL_TRACK_TAG\n");
			KFHeader header;
			if (newChunk->Read(&header,sizeof(header),fp)) {
				// we only read the first key
				//for (int n=0; n<(int)header.keys; n++) {
					//WORD frameNum =
					newChunk->ReadWord(fp);		// frameNum
					newChunk->ReadDWord(fp);	// unknown
					float
						x = newChunk->ReadFloat(fp),
						y = newChunk->ReadFloat(fp),
						z = newChunk->ReadFloat(fp);
					dbg_printf(" key scl: (%.2f %.2f %.2f)\n", x,y,z);
				//}//for
			}//if
			} break;
		case /*OBJECT_NODE_TAG*/ NODE_ID:
			dbg_printf("~NODE_ID\n");
			break;

		case INSTANCE_NAME:
			break;

		case BOUNDBOX:
			break;

		case KFSEG:
			// short start, end;
			break;

		case KFCURTIME:
			// short curframe;
			break;

		case KFHDR:
			// followed by: viewport_layout, kfseg, kfcurtime, object_node_tag,
			// light_node_tag, target_node_tag, camera_node_tag, l_target_node_tag,
			// spotlight_node_tag, ambient_node_tag...
			// short revision;
			// cstr filename;
			// short animlen;
			break;

		default:
			// display chunk ID
			dbg_printf("ParseKFData: 0x%04X\n", (int)newChunk->ID());
			break;
		};

		// skip whatever is left of this chunk
		newChunk->Skip(fp);

		// update host chunk total bytes read
		pChunk->dwBytesRead += newChunk->dwBytesRead;
	}

	delete newChunk;
}//ParseKFData

//-----------------------------------------------------------------------------

Vector3f ModelEx::ParseColour(Chunk *pChunk) {
	BYTE rgb[3];
	Chunk temp;
	temp.Read(fp);
	temp.Read(rgb,3,fp);

	Vector3f c;
	c.x = (float)rgb[0] / 255.0f;
	c.y = (float)rgb[1] / 255.0f;
	c.z = (float)rgb[2] / 255.0f;

	pChunk->dwBytesRead += temp.dwBytesRead;
	return c;
}//ParseColour

//-----------------------------------------------------------------------------

/**
 * Parse percentage chunk: returns a floating point value in range (0..1)
 */
float ModelEx::ParsePercent(Chunk *pChunk) {
	Chunk temp;
	temp.Read(fp);
	float f=1.0f;
	switch (temp.ID()) {
	case FLOAT_PERCENTAGE:
		f = temp.ReadFloat(fp) / 100.0f;
		break;
	case INT_PERCENTAGE:
		f = (float)temp.ReadWord(fp) / 100.0f;
		break;
	}
	temp.Skip(fp);
	pChunk->dwBytesRead += temp.dwBytesRead;

	return f;
}//ParseColour

//-----------------------------------------------------------------------------

void ModelEx::ParseMatTexmap(Chunk *pChunk, TMaterial &material) {
	Chunk *newChunk = new Chunk;

	while (pChunk->dwBytesRead < pChunk->dwSize) {
		// read sub chunk
		if (!newChunk->Read(fp)) return;

		switch (newChunk->ID()) {
		case MAT_MAPNAME: {
			// cstr filename
			string s( newChunk->ReadString(fp) );
			//dbg_printf("MAT_MAPNAME(%s)\n", s.c_str());
			if (material.LoadTexture(s)) {
				dbg_printf("loaded texture %s\n", s.c_str());
			} else if ( !material.LoadTexture(m_directory + s) ) {
				printf("warning: Unable to load texture %s\n", s.c_str());
			}
			} break;
		case INT_PERCENTAGE: {
			//dbg_printf("INT_PERCENTAGE\n");
			//WORD perc =
			newChunk->ReadWord(fp);		// perc
			} break;
		case MAT_MAP_TEXBLUR: {
			//float fBlur =
			newChunk->ReadFloat(fp);	// fBlur
			} break;
		case MAT_MAP_USCALE: {
			Vector2f scale(material.GetTexScale());
			scale.x = newChunk->ReadFloat(fp);
			dbg_printf("MAT_MAP_USCALE(%.2f) at %08lX\n", (float)scale.x, ftell(fp));
			material.SetTexScale(scale);
			} break;
		case MAT_MAP_VSCALE: {
			Vector2f scale(material.GetTexScale());
			scale.y = newChunk->ReadFloat(fp);
			dbg_printf("MAT_MAP_VSCALE (%.2f) at %08lX\n", (float)scale.y, ftell(fp));
			material.SetTexScale(scale);			
			} break;
		case MAT_MAP_TILING: {
			WORD flags = newChunk->ReadWord(fp);
			dbg_printf("MAT_MAP_TILING (0x%04X) at %08lX\n", (int)flags, ftell(fp));
			} break;
		case MAT_MAP_UOFFSET: {
			Vector2f off(material.GetTexOffset());
			off.x = newChunk->ReadFloat(fp);
			dbg_printf("MAT_MAP_UOFFSET (%.2f) at %08lX\n", (float)off.x, ftell(fp));
			material.SetTexOffset(off);
			} break;
		case MAT_MAP_VOFFSET: {
			Vector2f off(material.GetTexOffset());
			off.y = newChunk->ReadFloat(fp);
			dbg_printf("MAT_MAP_UOFFSET (%.2f) at %08lX\n", (float)off.y, ftell(fp));
			material.SetTexOffset(off);
			} break;
		case MAT_MAP_ANG: {
			// floating point value in degrees
			float angle = newChunk->ReadFloat(fp);
			dbg_printf("MAT_MAP_ANG (%.2f) at %08lX\n", angle, ftell(fp));
			material.SetTexAngle(angle);
			} break;
		default:
			dbg_printf("ParseMatTexmap: %04X at %08lX\n", (int)newChunk->ID(), ftell(fp));
			break;
		}

		// skip whatever is left of this chunk
		newChunk->Skip(fp);

		// update host chunk total bytes read
		pChunk->dwBytesRead += newChunk->dwBytesRead;
	}

	delete newChunk;
}//ParseMatTexmap

//-----------------------------------------------------------------------------

void ModelEx::ParseMatEntry(Chunk *pChunk) {
	Chunk *newChunk = new Chunk;

	// create a new material
	m_model.Materials().push_back( TMaterial() );
	TMaterial &material = m_model.Materials().back();

	while (pChunk->dwBytesRead < pChunk->dwSize) {
		// read sub chunk
		if (!newChunk->Read(fp)) return;

		switch (newChunk->ID()) {
		case MAT_NAME: {
			string s(newChunk->ReadString(fp));
			dbg_printf("3ds: material name = \"%s\"\n", s.c_str());
			material.SetName(s);
			} break;

		case MAT_AMBIENT:	// followed by color chunk
			material.SetAmbient( ParseColour(newChunk) );
			break;
		case MAT_DIFFUSE:	// followed by color chunk
			material.SetDiffuse( ParseColour(newChunk) );
			break;
		case MAT_SPECULAR:	// followed by color chunk
			material.SetSpecular( ParseColour(newChunk) );
			break;
		case MAT_SHININESS:		// followed by percentage chunk
			// This is called 'Glossiness' in 3D Studio MAX
			material.SetShininess( ParsePercent(newChunk) );
			break;
		case MAT_SHIN2PCT:		// followed by percentage chunk
			// This is called 'Specular Level' in 3D Studio MAX
			dbg_printf("SHIN2PCT = %.2f\n", ParsePercent(newChunk) );
			break;
		case MAT_TRANSPARENCY:	// followed by percentage chunk
			material.SetTransparency( ParsePercent(newChunk) );
			break;
		case MAT_XPFALL:
			dbg_printf("~MAT_XPFALL\n");
			break;
		case MAT_REFBLUR:
			dbg_printf("~MAT_REFBLUR\n");
		case MAT_SHADING:
			dbg_printf("~MAT_SHADING\n");
			break;
		case MAT_SELF_ILPCT:
			//printf("SELF_ILPCT = %.2f\n", ParsePercent(newChunk) );
			material.SetSelfIllum( ParsePercent(newChunk) );
			break;
		case MAT_XPFALLIN:
			dbg_printf("~MAT_XPFALLIN\n");
			break;
		case MAT_TEXMAP:
			// followed by percentage chunk, mat_mapname,
			// mat_map_tiling, mat_map_texblur...
			ParseMatTexmap(newChunk, material);
			break;
		case MAT_TWOSIDE:
			dbg_printf("~MAT_TWOSIDE\n");
			// JWW 12/12/03 added this as a simple enable
			// TODO: understand contents of TWO_SIDE chunks
			material.SetTwoSide(true);	// JWW 12/12/03
			break;
		case MAT_SELFIMAP:
			dbg_printf("~MAT_SELFIMAP\n");
			break;

		case MAT_WIRESIZE: {
			//float size = newChunk->ReadFloat(fp);
			//dbg_printf("3ds: wire size=%.2f\n", size);
			} break;

		default:
			// display chunk ID
			dbg_printf("ParseMatEntry: 0x%04X\n", (int)newChunk->ID());
			break;
		};

		// skip whatever is left of this chunk
		newChunk->Skip(fp);

		// update host chunk total bytes read
		pChunk->dwBytesRead += newChunk->dwBytesRead;
	}

	delete newChunk;
}//ParseMatEntry

//-----------------------------------------------------------------------------

void ModelEx::ParseNamedObject(Chunk *pChunk) {
	Chunk *newChunk = new Chunk;

	// NOTE: start by reading the ASCIZ string
	string sName(pChunk->ReadString(fp));
	dbg_printf("3ds: named object = \"%s\"\n", sName.c_str());

	while (pChunk->dwBytesRead < pChunk->dwSize) {
		// read sub chunk
		if (!newChunk->Read(fp)) return;

		switch (newChunk->ID()) {
		case N_TRI_OBJECT:
			ParseNTriObject(newChunk, sName);
			break;
		case N_DIRECT_LIGHT:
		case N_CAMERA:
			break;

		default:
			// display chunk ID
			dbg_printf("ParseNamedObject: 0x%04X\n", (int)newChunk->ID());
			break;
		};

		// skip whatever is left of this chunk
		newChunk->Skip(fp);

		// update host chunk total bytes read
		pChunk->dwBytesRead += newChunk->dwBytesRead;
	}

	delete newChunk;
}//ParseNamedObject

//-----------------------------------------------------------------------------

void ModelEx::ParseNTriObject(Chunk *pChunk, const string &name) {
	Chunk *newChunk = new Chunk;

	// create a new object
	m_model.Objects().push_back( TObject() );
	TObject &object = m_model.Objects().back();
	object.SetName(name);

	while (pChunk->dwBytesRead < pChunk->dwSize) {
		// read sub chunk
		if (!newChunk->Read(fp)) return;

		//dbg_printf("ParseNTriObject: 0x%04X\n", (int)newChunk->ID());
		switch (newChunk->ID()) {
		case POINT_ARRAY: {	//-- vertices
				WORD nVerts = newChunk->ReadWord(fp);
				dbg_printf("3ds: num.verts = %d\n", (int)nVerts);
				// chunk: contains 3 floats per vertex
				// resize vertex array
				vector<Vector3f> &verts = object.Vertices();
				verts.resize(nVerts);
				// load vertices
				for (unsigned n=0; n<verts.size(); n++) {
					verts[n].x = newChunk->ReadFloat(fp);
					verts[n].y = newChunk->ReadFloat(fp);
					verts[n].z = newChunk->ReadFloat(fp);
				}
			} break;

		case POINT_FLAG_ARRAY: {
			dbg_printf("3ds: ignoring POINT_FLAG_ARRAY\n");
			} break;

		case MESH_COLOR: {
			WORD colIndex = newChunk->ReadWord(fp);
			dbg_printf("3ds: ignoring MESH_COLOR (%d)\n", (int)colIndex);
			} break;

		case FACE_ARRAY: {			//-- faces
				WORD nFaces = newChunk->ReadWord(fp);
				dbg_printf("3ds: num.faces = %d\n", (int)nFaces);
				// chunk: contains 4 WORDs per vertex (3xIndices, 1xFlags)
				// flags denote visibility of edges
				vector<TFace> &faces = object.Faces();
				faces.resize(nFaces);
				// load faces
				for (unsigned n=0; n<faces.size(); n++) {
					faces[n].vertex[0] = newChunk->ReadWord(fp);
					faces[n].vertex[1] = newChunk->ReadWord(fp);
					faces[n].vertex[2] = newChunk->ReadWord(fp);
					faces[n].flags     = newChunk->ReadWord(fp);
				}
				// maybe contain other chunks
				while (newChunk->dwBytesRead < newChunk->dwSize) {
					Chunk temp;
					temp.Read(fp);
					switch (temp.ID()) {
					case SMOOTH_GROUP: {
						// smooth group has one DWORD per face, with
						// bit n denoting membership of smooth group n
						dbg_printf("SMOOTH_GROUP\n");
						dbg_printf("nFaces=%d\n", (int)faces.size());
						for (unsigned n=0;n<faces.size();n++) {
							//DWORD groups = newChunk->ReadDWord(fp);
							faces[n].smooth = newChunk->ReadDWord(fp);
							//dbg_printf(" 0x%08lX\n", groups);
						}
					    } break;
					case MSH_MAT_GROUP: {
						// name of material
						string s( temp.ReadString(fp) );
						// JWW 21/11/03 moved
						// find the material ID, and assign it to the object
						//	object.SetMaterialID( m_model.FindMaterial(s) );
						// TODO: handle per-face materials (not whole object)
						// no.of faces
						WORD nSubFaces = temp.ReadWord(fp);
						// JWW 21/11/03 modified to only assign materials if
						// they are actually assigned to some faces (after
						// DPWM reported problem with cue-chalk1-2.3ds)
						int nMatId = m_model.FindMaterial(s);
                        if (nSubFaces) {
							// find the material ID, and assign it to the object
							object.SetMaterialID( nMatId );
						}
                        dbg_printf( "MSH_MAT_GROUP (%s,%d)\n", s.c_str(), (int)nSubFaces );
						// face indices
						WORD nObFaces = (WORD)object.Faces().size();
						//printf("nMatId=%d assigned to #(", nMatId);
                        for (WORD n = 0; (n<nSubFaces) && (n<nObFaces); n++) {
							WORD faceNum = temp.ReadWord(fp);
							// store face material ID
							object.Faces()[faceNum].matid = nMatId;
							//printf("%d,", (int)faceNum);
						}
						// JWW 21/11/03 this object contains sub-object textures
                        if (nSubFaces < nObFaces)
							object.SetSubObjTex(true);
						//printf(")\n");
						} break;
					default:
						printf("sub-chunk: %04X\n", (int)temp.ID());
						break;
					}
					temp.Skip(fp);
					newChunk->dwBytesRead += temp.dwBytesRead;
				}
			} break;

		case TEX_VERTS: {			//-- texture coords.
				WORD nTexUV = newChunk->ReadWord(fp);
				dbg_printf("3ds: num.texuv = %d\n", (int)nTexUV);
				// chunk: contains 2 floats per vertex (u,v)
				// TODO: check that nTexUV matches nVerts
				// resize texture coord. array
				vector<Vector2f> &texuv = object.TexCoords();
				texuv.resize(nTexUV);
				// load texture coords.
				for (unsigned n=0; n<texuv.size(); n++) {
					texuv[n].x = newChunk->ReadFloat(fp);
					texuv[n].y = newChunk->ReadFloat(fp);
				}
			} break;

		case MESH_MATRIX: {			//-- matrix[4][3]
			// 4x3 floats: first 3 are XYZ axes, last 3 are position
			float f[12];
			for (int n=0; n<4*3; n++) f[n]=newChunk->ReadFloat(fp);
			Matrix44f m;
			m.SetXVector(Vector3f(f[0],f[1],f[2]));
			m.SetYVector(Vector3f(f[3],f[4],f[5]));
			m.SetZVector(Vector3f(f[6],f[7],f[8]));
			m.SetPVector(Vector3f(f[9],f[10],f[11]));
			//m.Orthogonalise();
			object.SetMatrix(m);
			} break;

		default:
			// display chunk ID
			dbg_printf("ParseNTriObject: 0x%04X\n", (int)newChunk->ID());
			break;
		};

		// skip whatever is left of this chunk
		newChunk->Skip(fp);

		// update host chunk total bytes read
		pChunk->dwBytesRead += newChunk->dwBytesRead;
	}

	delete newChunk;
}//ParseNTriObject

//-----------------------------------------------------------------------------

void ModelEx::Draw(DrawStyle style) {
	// just extract the draw style portion (excluding hint bits, preferences etc.)
	DrawStyle drawStyle = (style & DS_StyleMask);

	// if hidden, don't draw anything
	if (drawStyle == DSHidden) return;

	// get context local storage
	GLCtxData *ctx = (GLCtxData*)m_context.GetData();
	if (!ctx) {
		// if we don't have any, allocate it
		if (!m_context.AllocData(sizeof(GLCtxData))) return;
		// try again
		ctx = (GLCtxData*)m_context.GetData();
		if (!ctx) return;	// oh dear
		// initialise it (ctor not called by AllocData)
		ctx->reset();
	}

	// save all the state we are likely to dirty
	glPushAttrib(
		GL_ENABLE_BIT  |
		GL_CURRENT_BIT |
		GL_POLYGON_BIT |
		GL_TEXTURE_BIT |
		GL_LIGHTING_BIT
	);

	bool
		bGenLists = false,
		bUseLists = false;

	// do we have a list?
	if (ctx->nObjListSize > 0) {
		// has something happened that might invalidate the list?
		if ( (ctx->sequence  != m_sequence) ||
			 (ctx->drawStyle != drawStyle)  ||
			 (style & DSNoDisplayList)
		) {
			// need to delete existing list
			// (either due to change of style, or hint not to use lists)
			ctx->DelLists();
			bGenLists = !(style & DSNoDisplayList);	// generate new lists?
		} else
			bUseLists = true;	// use existing lists
	} else {
		// we have no lists, should we generate some?
		bGenLists = !(style & DSNoDisplayList);	// generate new lists?
	}

	bool
		bTexBind = !(style & DSNoBindTexture);	// use bind texture?

	// generate lists if needed
	if (bGenLists) {
		ctx->GenLists(
			(GLsizei)m_model.Objects().size(),
			(GLsizei)m_model.Materials().size(),
			bTexBind ? (GLsizei)m_model.Materials().size() : 0	// JWW 07/08/05 added bind texture
		);
		//printf("gen.lists = %d, %d\n", (int)ctx->nMatList, (int)ctx->nObjList);
	}

	bool
		bUseMat     = (drawStyle == DSMaterial),	// use materials?
		bDelayTrans = !(style & DSNoDelayTrans);	// delay transparency?

	// set up sensible drawing state (unless told not to..)
	bool bStateChange = !(style & DSNoStateChange);
	switch (drawStyle) {
	case DSHidden:
		break;
	case DSPoints:
	case DSWire:
		if (bStateChange) {
			glDisable(GL_LIGHTING);
			glDisable(GL_TEXTURE_2D);
		}
		break;
	case DSFlat:
		glShadeModel(GL_FLAT);	// TODO: efficiency: issue face normals only
		if (bStateChange) {
			glDisable(GL_TEXTURE_2D);
		}
		break;
	case DSSmooth:
		glShadeModel(GL_SMOOTH);
		if (bStateChange) {
			glDisable(GL_TEXTURE_2D);
		}
		break;
	case DSMaterial:
		glShadeModel(GL_SMOOTH);
		break;
	case DSVertNormTex:
		// JWW 22/02/04 added: but we don't change any state in
		// this mode. note: bUseMat only applies in DSMaterial
		// mode due to logic above
		break;
	}

	const vector<TObject> & objects = m_model.Objects();
	// if (bDelayTrans) is set, this draws in two passes:
	//   0 = opaque objects
	//   1 = transparent objects
	for (int pass=0; pass<(bDelayTrans?2:1); pass++) {
		for (unsigned n=0; n<objects.size(); n++) {
			bool bDraw=true;
			// apply materials if needed
			if (bUseMat) {
				// if object has a material, apply it
				int nMatId = objects[n].GetMaterialID();
				if (nMatId >= 0) {
					TMaterial &mat = m_model.Materials()[nMatId];
					// delay transparency?
					if (bDelayTrans) {
						// is it transparent?
						bool bIsTrans = (mat.GetTransparency() > 0.01f);
						// pass 0 = opaque, pass 1 = transparent
						bDraw = (pass==0)?!bIsTrans:bIsTrans;
					}

					if (bDraw) {
						GLuint
							mlist = ctx->nMatList + nMatId,
							tlist = 0;
						if ((ctx->pTexList) && (nMatId < (int)ctx->nTexListSize))
							tlist=ctx->pTexList[nMatId];
						if (bUseLists) {
							glCallList(mlist);
							if (tlist) glBindTexture(GL_TEXTURE_2D, tlist);
						} else {
							if (tlist==0) {
								// put material+texture on display list
								if (bGenLists)
									glNewList(mlist, GL_COMPILE_AND_EXECUTE);
								mat.GLApply();
								if (bGenLists) glEndList();
							} else {
								// put material on display list
								if (bGenLists)
									glNewList(mlist, GL_COMPILE_AND_EXECUTE);
								mat.GLApplyMat();
								if (bGenLists) glEndList();
								// bind texture
								if (bGenLists)
									glBindTexture(GL_TEXTURE_2D, tlist);
								mat.GLApplyTex();
							}
						}
					}//if(bDraw)
				} else {
					// apply default material
					static TMaterial mat;
					mat.GLApply();
					// pass 0 = opaque, pass 1 = transparent
					bDraw = (pass==0);
				}
			} else {
				// not using materials
				// pass 0 = opaque, pass 1 = transparent
				bDraw = (pass==0);
			}

			// draw the object
			if (bDraw) {
				int olist = ctx->nObjList + n;
				if (bUseLists)
					glCallList(olist);
				else {
					if (bGenLists)
						glNewList(olist, GL_COMPILE_AND_EXECUTE);

					//-- begin geometry issue
					glMatrixMode(GL_MODELVIEW);
					glPushMatrix();
						objects[n].ApplyXForm();
						switch (drawStyle) {
						case DSPoints:
							objects[n].DrawPointV();
							break;
						case DSWire:
							objects[n].DrawWireV();
							break;
						case DSFlat:
						case DSSmooth:
							objects[n].DrawFacesNV();
							break;
						case DSMaterial:
						case DSVertNormTex:	// JWW 22/02/04 added
						default:
							objects[n].Draw();
							break;
						}//switch
					glPopMatrix();
					//-- end geometry issue

					if (bGenLists) {
						glEndList();
						glBindTexture(GL_TEXTURE_2D, 0);
					}
				}
			}//if
		}//for(object)
	}//for(pass)

	// if we were generating lists, update context data to say
	// that our lists are up to date
	if (bGenLists) {
		ctx->drawStyle = drawStyle;
		ctx->sequence  = m_sequence;
	}

	// pop attrib and return
	glPopAttrib();
}//Draw

//-----------------------------------------------------------------------------

void ModelEx::PreFlatten() {
	long nNorms=0, nFaces=0;
	// for each object
	for (unsigned m=0; m<m_model.Objects().size(); m++) {
		// get the object
		const TObject &object = m_model.Objects()[m];
		// count normals and faces
		nNorms += (long)object.Normals().size();
		nFaces += (long)object.Faces().size();
	}
	// update vertex/face count members
	// note: we store nNorms, because Flatten() duplicates vertices (one per
	// normal) in order to preserve smoothing information
	m_nVerts = nNorms;
	m_nFaces = nFaces;
}//PreFlatten

//-----------------------------------------------------------------------------

inline Vector3f ModelEx::xform(const Matrix44f &m, const Vector3f &v) {
	return Vector3f(
		v.x*m[0][0] + v.y*m[0][1] + v.z*m[0][2] + m[0][3],
		v.x*m[1][0] + v.y*m[1][1] + v.z*m[1][2] + m[1][3],
		v.x*m[2][0] + v.y*m[2][1] + v.z*m[2][2] + m[2][3]
	);
}//xform

void ModelEx::Flatten() {
	// clear existing vectors
	m_flatVerts.clear();
	m_flatNorms.clear();
	m_flatFaces.clear();
	// for each object
	for (unsigned m=0; m<m_model.Objects().size(); m++) {
		// get the object
		const TObject &object = m_model.Objects()[m];

		// get the object matrix
		const Matrix44f &matrix = object.GetMatrixGL();

		// store normals
		unsigned n;
		for (n=0; n<object.Normals().size(); n++) {
			const ::Vector3f &N = object.Normals()[n];
			m_flatNorms.push_back( Model::Vector3f(N.x,N.y,N.z) );
		}

		// make room for vertices (equal size to normal array)
		long base = (long)m_flatVerts.size();
		m_flatVerts.resize( m_flatVerts.size() + object.Normals().size() );
		// zero x component to denote untransformed verts
		for (n=base;n<m_flatVerts.size();n++)
			m_flatVerts[n].x = 0;

		// store faces
		for (n=0; n<object.Faces().size(); n++) {
			const TFace &F = object.Faces()[n];

			int
				i = base+F.normal[0],
				j = base+F.normal[1],
				k = base+F.normal[2];

			// store normal indices
			m_flatFaces.push_back( Model::Face(i,j,k) );

			// retrieve existing vertices
			::Vector3f
				A( object.Vertices()[F.vertex[0]] ),
				B( object.Vertices()[F.vertex[1]] ),
				C( object.Vertices()[F.vertex[2]] );

			// transform + store vertices
			if (!m_flatVerts[i].x) {
				A = xform(matrix, A);
				m_flatVerts[i] = Model::Vector3f(A.x,A.y,A.z);
			}
			if (!m_flatVerts[j].x) {
				B = xform(matrix, B);
				m_flatVerts[j] = Model::Vector3f(B.x,B.y,B.z);
			}
			if (!m_flatVerts[k].x) {
				C = xform(matrix, C);
				m_flatVerts[k] = Model::Vector3f(C.x,C.y,C.z);
			}
		}//for
	}//for
}//Flatten

//-----------------------------------------------------------------------------

Model::Model() {
	extra = new ModelEx;
	assert(extra!=NULL);
}

//-----------------------------------------------------------------------------

Model::~Model() {
	Free();
	delete extra;
}

//-----------------------------------------------------------------------------

void Model::Free() {
	extra->Free();
}//Free

//-----------------------------------------------------------------------------

/**
 * Free any OpenGL resources that the model is using.
 */
void Model::FreeGL() {
	extra->FreeGL();
}//FreeGL

//-----------------------------------------------------------------------------

bool Model::Load(const char *name) {
	return extra->Load(name);
}//Load

//-----------------------------------------------------------------------------

Model::Vector3f Model::GetBoxCentre() const {
	::Vector3f p(extra->Box().Centre());
	return Model::Vector3f(p.x,p.y,p.z);
}//GetBoxCentre

//-----------------------------------------------------------------------------

Model::Vector3f Model::GetBoxSize() const {
	::Vector3f p(extra->Box().Size());
	return Model::Vector3f(p.x,p.y,p.z);
}//GetBoxSize

//-----------------------------------------------------------------------------

void Model::DrawGL(DrawStyle style) const {
	extra->Draw(style);
}//Draw

//-----------------------------------------------------------------------------

/**
 * Get number of vertices
 */
long Model::GetNumVerts() const {
	if (!extra->m_nVerts) extra->PreFlatten();
	return extra->m_nVerts;
}

//-----------------------------------------------------------------------------

/**
* Get vertex n, where n ranges from 0..GetNumVerts()-1
*/
Model::Vector3f Model::GetVert(long n) {
	if (!extra->m_flatVerts.size()) extra->Flatten();
	if ((n >= 0) && (n < (long)extra->m_flatVerts.size()))
		return extra->m_flatVerts[n];
	else {
		// index out of range
		return Vector3f(0,0,1);
	}
}//GetVert

//-----------------------------------------------------------------------------

/**
* Get normal n, where n ranges from 0..GetNumVerts()-1
*/
Model::Vector3f Model::GetNorm(long n) {
	if (!extra->m_flatNorms.size()) extra->Flatten();
	if ((n >= 0) && (n < (long)extra->m_flatNorms.size()))
		return extra->m_flatNorms[n];
	else {
		// index out of range
		return Vector3f(0,0,1);
	}
}//GetNorm

//-----------------------------------------------------------------------------

/**
* Get number of faces
*/
long Model::GetNumFaces() const {
	if (!extra->m_nFaces) extra->PreFlatten();
	return extra->m_nFaces;
}

//-----------------------------------------------------------------------------

/**
* Get face n, where n ranges from 0..GetNumFaces()-1. The
* face consists of three indices into the vertex array.
* Each index is in the range 0..GetNumVerts()-1.
*/
Model::Face Model::GetFace(long n) {
	if (!extra->m_flatFaces.size()) extra->Flatten();
	if ((n >= 0) && (n < (long)extra->m_flatFaces.size()))
		return extra->m_flatFaces[n];
	else {
		// index out of range
		return Face();
	}
}

//-----------------------------------------------------------------------------

/**
* Set object scale, relative to original scale when first created
* or loaded from file. Note that the scale is applied directly to
* the object vertices 'in place', to avoid duplicating vertex data.
* Therefore, repeatedly scaling the object may result in cumulative
* errors in vertex position.
* Note that the SetScale method only affects vertex data, and will
* not modify object normals (to avoid shading errors).
*/
void Model::SetScale(float s) {
	// have we any objects to scale?
	if (!extra->m_model.Objects().size()) return;

	// work out relative scale
	if (!extra->m_fScale) return;
	float scaleFactor = s / extra->m_fScale;

	// for each object
	for (unsigned m=0; m<extra->m_model.Objects().size(); m++) {
		// get the object
		TObject &object = extra->m_model.Objects()[m];

		// scale object vertices
		for (unsigned v=0; v<object.Vertices().size(); v++)
			object.Vertices()[v] *= scaleFactor;

		// update bounding box: we don't need a full update because
		// the normals & matrix will not be changed
		object.UpdateBox();
	}//for(m)

	// update flattened object (if any)
	if (extra->m_flatVerts.size()) {
		for (unsigned v=0; v<extra->m_flatVerts.size(); v++) {
			Model::Vector3f &vtx = extra->m_flatVerts[v];
			vtx.x *= scaleFactor;
			vtx.y *= scaleFactor;
			vtx.z *= scaleFactor;
		}
	}

	// uppdate model bounding box
	extra->CalcBox();

	// store new scale
	extra->m_fScale = s;

	// invalidate display list cache
	extra->InvalidateCache();
}//SetScale

/**
* Returns the current object scale, relative to the original scale
* when first created or loaded. The scale can be modified by calling
* the SetScale method. When the object is first loaded, GetScale()
* will return 1.
*/
float Model::GetScale() const {
	return extra->m_fScale;
}//GetScale
