#include <stdio.h>
#include <time.h>
#include <string.h>
#include <vector>
#include <string>
#include "port.h"

using namespace std;

//-----------------------------------------------------------------------------

/**
 * This program parses the SGI 'glext.h' header file and generates
 * a header and CPP file that will automatically load all available
 * extensions described in the header.
 * JWW 15/09/03
 * JWW 24/09/03 made it into a class: easier to handle multiple contexts
 * JWW 15/10/03 added wrapper class, to avoid need to allocate on the heap
 * JWW 03/12/03 removed auto-generation of 'Supports' method, moved to a
 *   new CPP file that is updated manually (easier to maintain/comment)
 */

//-----------------------------------------------------------------------------

// name of class containing function pointers (big class, needs heap alloc)
#define GX_CLASS_NAME	  "glexfp"
// name of class containing inline functions (wrapper class for the above)
#define GX_CLASS_NAME2	  "glex"
// name of header file that defines singleton/manager class
#define GX_HEADER_MGR "interceptor.h"
// name of singleton/manager class providing public access
#define GX_CLASS_NAME_MGR "interceptor"
// name of method on singleton/manager class which returns glex pointer
#define GX_CLASS_FUNC_MGR "getCurrentExt"
// name of public namespace for gl extension functions in GX_HEADER_PUBLIC
#define GX_NAMESPACE_PUBLIC "glext"

#define GX_HEADER    "glex.h"
#define GX_HEADER_FP "glexfp.h"
#define GX_SOURCE_FP "glexfp.cpp"
#define GX_HEADER_PUBLIC "glexpub.h"

// define this to generate code to print name of each glext function
// on successful loading through wglGetProcAddress()
//#define GX_GEN_PRINT_ON_LOAD
//#define GX_GEN_PRINT_ON_LOAD_FAIL

// define this to generate stub functions (instead of NULL pointers)
// in case user calls unsupported extensions
#define GX_GEN_STUBS

#define GX_FILE_PREAMBLE \
	" * J.Ward, Computer Science, University of Hull, UK\n"			\
	" * Visit the OpenGL Extensions Registry for detailed\n"	\
	" * extension specifications:\n"								\
	" *   http://www.opengl.org/registry\n"

//-----------------------------------------------------------------------------

static string g_sTimeDate;			// time/date generated
static vector<string> g_pfn;		// function pointer definitions
static vector<string> g_func;		// function declaration
static vector<string> g_name;		// function name(s)
static bool	g_bGotWgl = false;		// did we get WGL functions?
static bool got_glx;				// did we get GLX functions?

//-----------------------------------------------------------------------------

/**
 * Get time/date string
 */
void CalcTime() {
	time_t c;
	time(&c);   // time in seconds
	g_sTimeDate = asctime( localtime(&c) );
}//CalcTime

//-----------------------------------------------------------------------------

/**
 * Parse the gl_ext file. Fills in the various vector<string> arrays.
 */
bool Parse(const char *name) {
	FILE *fp = fopen(name, "r");
	if (!fp) {
		fprintf(stderr, "Failed to open: %s\n", name);
		return false;
	}

	char str[1024]={};
	// read a line from the file
	while ( fgets(str, sizeof(str), fp) != NULL ) {
		if ( str[0]=='#' ) {
			// pre-processor: skip line
		} else if ( strstr(str, "/*")==str ) {
			// start of comment: skip until */
			// this is wrong, but it works without it anyway
			//while ((fscanf(fp, " %255s", str)==1) && ( !strstr(str, "*/") ));
		} else if ( strstr(str, "typedef") ) {
			// start of typedef
			string s(str);
			// does it have a ' PFNGL...' or ' PFNWGL' name?
			if(strstr(str, " PFNGL")) {
				g_pfn.push_back(s);
			}

#ifdef __WIN32__
			if(strstr(str, " PFNWGL")) {
				g_pfn.push_back(s);
			}
#endif
		} else if (
			(strstr(str, "GLAPI")==str)  ||		// SGI glext.h
			(strstr(str, "WINAPI")!=NULL) ||	// W32 wglext.h
			(strstr(str, "extern")==str)		// SGI wglext.h
		) {
			// start of function declaration
			string s(str);

			bool ok = false;
			const char *pName;

#ifdef __X11__
			if(((pName = strstr(s.c_str(), " glX")) != NULL) &&
					(sscanf(pName, " %s", str) == 1)) {
				// we got glx functions
				got_glx = true;
				//g_name.push_back(string(str));
				//ok = true;
			} else
#endif
			if (((pName = strstr(s.c_str(), " gl")) != NULL) &&
					(sscanf(pName, " %s", str) == 1)) {
				// add glFunc to vector
				g_name.push_back(string(str));
				ok = true;
			}
#ifdef __WIN32__
			else if(((pName = strstr(s.c_str(), " wgl")) != NULL) &&
					(sscanf(pName, " %s", str) == 1)) {
				// we got wgl functions
				g_bGotWgl = true;
				// add wglFunc to vector
				g_name.push_back(string(str));
				ok = true;
			}
#endif
			if (ok) {
				// add to vector
				g_func.push_back(s);
			} else
				printf("REJECT: %s\n", s.c_str());
		}
	}

	// close file
	fclose(fp);

	return true;
}//Parse

//-----------------------------------------------------------------------------

void Show() {
	int n;

	int nDefs = (int)g_pfn.size();
	printf("Got %d function pointer defs:\n", nDefs);
	for (n=0; n<nDefs; n++)
		printf("%s", g_pfn[n].c_str());

	int nFunc = (int)g_func.size();
	printf("Got %d functions:\n", nFunc);
	for (n=0; n<nFunc; n++)
		printf("%s", g_func[n].c_str());

	int nName = (int)g_name.size();
	printf("Got %d names:\n", nName);
	for (n=0; n<nName; n++)
		printf("%s\n", g_name[n].c_str());
}//Show


//-----------------------------------------------------------------------------

/**
 * Return PFNGLBLAHPROC typename given 'glBlah'
 */
string GetPFNType(const char *glFunc) {
	// generate PFNglBlahPROC
	string s("PFN");
	s += string(glFunc);
	s += string("PROC");
	
	// convert to uppercase
	for (unsigned n=0; n<s.length(); n++) s[n] = toupper(s[n]);

	return s;
}//GetPFNType

//-----------------------------------------------------------------------------

/**
 * Get the plain parameter list (as declared)
 * eg. "(GLenum, GLint)" or "(GLenum bob, GLint joe)"
 */
string GetParamList(const char *glFuncDecl) {
	if (!glFuncDecl) return "()";
	const char
		*open  = strchr(glFuncDecl, '('),
		*close = strchr(glFuncDecl, ')');	// TODO: could be tripped up
	if (!open || !close) return "()";
	return string(open, (int)(close-open)+1);
}//GetParamList

//-----------------------------------------------------------------------------

/**
 * Get the plain parameter list with names stripped out
 * eg. "(GLenum, GLint)"
 */
string GetParamListPlain(const char *glFuncDecl) {
	// get parameters (which may contain type names)
	string params( GetParamList(glFuncDecl) );

	// if parameter list is empty, just return it
	if (params.size() <= 2) return params;

	size_t pos = 0;
	string output;
	do {
		if (pos > 0) output += ',';

		size_t block = params.find_first_of(",)",pos);
		if (block == params.npos) break;
		
		string token( params.substr(pos,block-pos) );

		// if we find '[' this is an array parameter
		bool hasArray = (token.find_last_of('[') != token.npos);

		size_t end = token.find_last_of("*& ");
		if (end != token.npos) token.erase(end+1);

		// if it's an array parameter, fake it by prefixing '*'
		if (hasArray) token += "*";

		output += token;

		pos = block+1;
	} while (pos < params.size());

	return output + ')';
}//GetParamList

//-----------------------------------------------------------------------------

/**
 * Get the parameter list with inserted parameter names.
 * note: assumes the parameter list doesn't contain names!
 * eg. "(GLenum, GLint)" becomes "(GLenum a, GLint b)"
 * If nParams points to an integer variable, that variable will receive the
 * number of parameters substituted.
 */
string GetParamListNamed(const char *glFuncDecl, int *nParams=NULL) {
	if (nParams) *nParams=0;
	// get the plain parameter list (GLenum, GLint)
	string s(GetParamListPlain(glFuncDecl));
	if (!s.size()) return "()";

	// check for (void) or (VOID)
	// but allow (void *) and anything containing a comma (multiple params)
	if ( ((s.find("void")!=string::npos) || (s.find("VOID")!=string::npos)) &&
		(s.find(',')==string::npos) && (s.find('*')==string::npos))
		return s;	// return raw params.

	int count=0;
	string d;
	for (unsigned n=0; n<s.size(); n++) {
		char last=(n>0)?s[n-1]:0;
		if ((s[n]==',') || (s[n] ==')') ) {
			if (last!='*') d += ' ';	// prepend space if needed
			d += 'a'+count;				// add variable name a..z
			if (count>=26) throw 0;		// can only handle a..z
			count++;	// count no.of parameters output
		}
		d += s[n];
	}

	if (nParams) *nParams = count;
	return d;
}//GetParamList

//-----------------------------------------------------------------------------

/**
 * Get the given stub function declaration, including any GLAPI / APIENTRY
 * rubbish, from the original function declaration:
 * eg. passing:
 *   "GLAPI int APIENTRY glFishmonger (Glenum, GLsizei, const GLfloat *);"
 * Should return:
 *   "GLAPI int APIENTRY stub_glFishmonger (Glenum, GLsizei, const GLfloat *)"
 */
string GetStubFuncDecl(const char *glFuncDecl) {
	// find start of function name
	string s(glFuncDecl);
	size_t n=s.find('(')-1;
	if (n<0) return glFuncDecl;
	while ((s[n]<=' ') && (n>0)) n--;	// skip trailing whitespace
	while ((n>0) && (s[n]>' ')) n--;	// skip until we hit whitespace

	// insert stub_
	s.insert(n+1, "stub_");	

	// chop off anything after )
	size_t end = s.find(')');
	if (end!=string::npos) s.resize(end+1);	
	return s;
}//GetStubFuncDecl

//-----------------------------------------------------------------------------

/**
 * Get the return type of a given function declaration.
 * eg. GLAPI int APIENTRY glFishmonger (Glenum, GLsizei, const GLfloat *);
 * Should return 'void'
 * NOTE: this function is not completely general
 */
string GetReturnType(const char *glFuncDecl) {
	if (!glFuncDecl) return "";
	const char *end = strchr(glFuncDecl, '(');
	if (!end) return "";

	// copy the initial portion excluding (
	string s;
	s.assign( glFuncDecl, (int)(end-glFuncDecl) );

	// flags denote pointer, reference or const type
	static const basic_string <char>::size_type npos = -1;
	bool bIsPtr=false, bIsRef=false, bIsConst=false;

	// read tokens from the string, ignore GLAPI, APIENTRY, WINAPI, extern
	char *sToken = new char[s.size()];
	if (!sToken) return "";
	const char *p = s.c_str();
	string sType;
	while (sscanf(p, " %s", sToken) == 1) {
		if (strchr(sToken,'*')) bIsPtr=true;
		if (strchr(sToken,'&')) bIsRef=true;
		if (!strcmp(sToken,"const")) {
			bIsConst = true;
		} else if (!strcmp(sToken,"GLAPI")) {
			// ignore
		} else if (!strcmp(sToken,"APIENTRY")) {
			// ignore
		} else if (!strcmp(sToken,"WINAPI")) {
			// ignore
		} else if (!strcmp(sToken,"extern")) {
			// ignore
		} else if (!sType.size()) {
			// looks like return type, save it
			sType = sToken;
		}
		p+=strlen(sToken)+1;
	}

	// add pointer/reference symbol if needed
	if (bIsPtr && (sType.find('*')==npos))
		sType.append(" *");
	if (bIsRef && (sType.find('&')==npos))
		sType.append(" &");

	// prefix with const if needed

	if (bIsConst) sType.insert(0, "const ");
	return sType;
}//GetRetType

//-----------------------------------------------------------------------------

void fprintf_break(FILE *fp) {
	fprintf(fp,
		"\n//-------------------------------------"
		"---------------------------------------\n\n"
	);
}//fprintf_break

//-----------------------------------------------------------------------------

/**
 * Write a list of GL function pointer declarations to the file
 */
void writeFunctionPointers(FILE *fp) {
	if (fp == NULL) return;

	// for every function
	for (unsigned n=0; n<g_func.size(); n++) {
		// get function return type
		string returnType( GetReturnType(g_func[n].c_str()) );

		// function pointer type
		string pointerType( GetPFNType(g_name[n].c_str()) );

		// function parameters (in brackets)
		string parameters( GetParamList(g_func[n].c_str()) );

		if (pointerType.find("wgl") != pointerType.npos) {
			// output function pointer declaration, for example:
			// typedef void (APIENTRYP PFNGLBLENDEQUATIONPROC) (GLenum mode);
			fprintf(fp,
				"typedef %s (APIENTRYP %s) %s;\n",
				returnType.c_str(),		// return type
				pointerType.c_str(),	// function name
				parameters.c_str()		// function parameters
			);
		}
	}
}//writeFunctionPointers

//-----------------------------------------------------------------------------

/**
 * Generate header file: don't use a path, only a simple filename!
 */
bool MakeH(const char *name) {
	FILE *fp = fopen(name, "w");
	if (!fp) {
		fprintf(stderr, "Failed to create %s\n", name);
		return false;
	}
	printf("Writing %s\n", name);

	// pretty simple minded code to convert 'header.h' into '__header_h'
	char sHdrTag[256];
	sprintf(sHdrTag, "__%s", name);
	for (int n=0; sHdrTag[n]; n++) if (sHdrTag[n]=='.') sHdrTag[n]='_';

	// print header prefix
	fprintf(fp,
		"#pragma once\n"
		"#ifndef %s\n"
		"#define %s\n\n",
		sHdrTag, sHdrTag
	);
	fprintf(fp,
		"/**\n"
		" * This is an automatically generated header file: do not edit\n"
		" * Generated %d functions on %s"
		GX_FILE_PREAMBLE
		" */\n\n",
		(int)g_name.size(),
		g_sTimeDate.c_str()
	);
	fprintf(fp,
		"#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__)\n"
		"  #define WIN32_LEAN_AND_MEAN 1\n"
		"  #include <windows.h>\n"
		"#endif\n"
		"\n"
		"#include <GL/gl.h>\n"
		"#include <GL/glu.h>\n"
		"\n"
		"#if defined(__unix__)\n"
		"#include <GL/glx.h>\n"
		"#endif\n"
		"\n"
		"#ifndef GLEX_USE_GL_GLEXT\n"	// JWW 03/12/03 added ifndef
		"\t#include \"glext.h\"\n"
		"#else\n"
		"\t#include <GL/glext.h>\n"
		"#endif//GLEX_USE_GL_GLEXT\n"
		//"#include <GL/glext.h>\n"
	);

	if (g_bGotWgl) {
		fprintf(fp,
			"#ifdef _WIN32\n"			// JWW 03/12/03 added ifndef
			"\t#ifndef GLEX_USE_GL_GLEXT\n"
			"\t\t#include \"wglext.h\"\n"
			"\t#else\n"
			"\t\t#include <GL/wglext.h>\n"
			"\t#endif\n"
			"#endif\n\n"
			//"#ifdef _WIN32\n"
			//"  #include <GL/wglext.h>\n"
			//"#endif\n"
		);
	}

	if(got_glx) {
		fprintf(fp,
			"#ifdef __X11__\n"
			"#  ifndef GLEX_USE_GL_GLEXT\n"
			"#    include \"glxext.h\"\n"
			"#  else\n"
			"#    include <GL/glxext.h>\n"
			"#  endif\n"
			"#endif\n\n"
		);
	}

	fprintf(fp,"\n");

	// write function pointer declarations
	writeFunctionPointers(fp);

	// output class definition
	fprintf(fp,
		"class " GX_CLASS_NAME " {\n"
	);
	// public methods
	fprintf(fp,
		"public:\n"
		"\t" GX_CLASS_NAME "();\n"					// constructor
		"\t" "bool Load();\n"						// bool Load();
		"\t" "long Count() const;\n"				// long Count() const;
		"\t" "long Known() const;\n"				// long Known() const;
		"\t" "bool Supports(const char *) const;\n"	// bool Supports(const char*) const;
	);
	// private methods
	fprintf(fp,
		"private:\n"
		"\t" "void Reset();\n"			// void Reset();
	);
	// output all the function pointer declarations
	fprintf(fp,
		"public:\n"
		"\t// GL extension function pointers\n"
	);
	for (unsigned n=0; n<g_name.size(); n++) {
		const char *sName = g_name[n].c_str();
		// PFNGLSOMETHINGPROC glSomething;
		fprintf(fp, "\t%s %s;\n", GetPFNType(sName).c_str(), sName);
	}
	// output private members
	fprintf(fp,
		"private:\n"
		"\t// Private member variables\n"
		"\tlong m_count;\t// number of functions loaded\n"
	);
	fprintf(fp, "};\n");	// end class

	// print header suffix
	fprintf(fp,
		"#endif//%s\n",
		sHdrTag
	);

	// close file
	fclose(fp);

	return true;
}//MakeH

//-----------------------------------------------------------------------------

/**
 * Generate CPP file
 */
bool MakeCPP(
	const char *cName,	// name of CPP file to create
	const char *hName	// name of header to include
) {
	FILE *fp = fopen(cName, "w");
	if (!fp) {
		fprintf(stderr, "Failed to create %s\n", cName);
		return false;
	}
	printf("Writing %s\n", cName);

	// print prefix
	fprintf(fp, "#include \"%s\"\n", hName);
	fprintf(fp, "#include <stdlib.h>\n");
#if defined(GX_GEN_PRINT_ON_LOAD) || defined(GX_GEN_PRINT_ON_LOAD_FAIL)
	fprintf(fp, "#include <stdio.h>\n");
#endif//GX_GEN_PRINT_ON_LOAD

	fprintf(fp,
		"\n"
		"/**\n"
		" * This is an automatically generated file: do not edit\n"
		" * Generated on %s"
		GX_FILE_PREAMBLE
		" */\n\n",
		g_sTimeDate.c_str()
	);

	fprintf_break(fp);

	//--- generate constructor
	fprintf(fp,
		GX_CLASS_NAME "::" GX_CLASS_NAME "() {\n"
		"\t" "Load();\n"
		"}//" GX_CLASS_NAME "\n"
	);

	fprintf_break(fp);

	//--- generate Count() method
	fprintf(fp,
		"long " GX_CLASS_NAME "::Count() const {\n"
		"\treturn m_count;\n"
		"}//Count\n"
	);

	fprintf_break(fp);

	//--- generate Known() method
	fprintf(fp,
		"long " GX_CLASS_NAME "::Known() const {\n"
		"\treturn %lu;\n"
		"}//Known\n",
		(unsigned long)g_name.size()
	);

	// JWW 03/12/03 this is no longer auto-generated, since we put these
	// functions into a new file 'glexfplib.cpp' (which makes them easier
	// to maintain and comment)
	//fprintf_break(fp);
	////--- generate Supports() method
	//fprintf(fp,
	//	"bool " GX_CLASS_NAME "::Supports(const char *ext) const {\n"
	//	"\t// check that 'ext' is valid\n"
	//	"\tif ( (ext==NULL) || (ext[0]==0) || strchr(ext,' ') ) return false;\n"
	//	"\t// get extension string\n"
	//	"\tconst char *sGLExt = (const char *)glGetString(GL_EXTENSIONS);\n"
	//	"\tif (sGLExt==NULL) return false;\n"
	//	"\tconst char *ptr = sGLExt, *found, *end;\n"
	//	"\tdo {\n"
	//	"\t\t// look for extension\n"
	//	"\t\tfound = strstr(ptr,ext);\n"
	//	"\t\tif (found == NULL) break;\n"
	//	"\t\t// get end of string\n"
	//	"\t\tend = &found[strlen(found)-1];\n"
	//	"\t\t// make sure it isn't a substring of a name\n"
	//	"\t\tif ( (found == sGLExt) || (found[-1] == ' ') )\n"
	//	"\t\t\tif ( (end[1] == 0) || (end[1] == ' ') )\n"
	//	"\t\t\t\treturn true; // success\n"
	//	"\t\t// try again\n"
	//	"\t\tptr = &end[1];\n"
	//	"\t} while (1);\n"
	//	"\t// not found\n"
	//	"\treturn false;\n"
	//	"}//Supports\n"
	//);

	fprintf_break(fp);

#ifdef GX_GEN_STUBS
	{// output all the stub function declarations
		for (unsigned n=0; n<g_func.size(); n++) {
			string sRetType( GetReturnType(g_func[n].c_str()) );

			//// open function def.
			fprintf(fp, "%s {\n",
				GetStubFuncDecl(g_func[n].c_str()).c_str()
			);

			// close function def. (with return 0; if needed)
			if ( _stricmp(sRetType.c_str(),"void")!=0 ) {
				fprintf(fp,
					"\treturn (%s)0;\n"
					"}\n",
					sRetType.c_str()
				);
			} else
				fprintf(fp, "}\n");
		}

		fprintf_break(fp);
	}
#endif//GX_GEN_STUBS

	//--- generate the Reset() method
	fprintf(fp,
		"void " GX_CLASS_NAME "::Reset() {\n"	// void class::Reset() {
	);
	// initialise member vars
	fprintf(fp,
		"\tm_count = 0;\n"		// m_count=0;
	);
	// initialise all function pointer members
	for (unsigned n=0; n<g_name.size(); n++) {
		const char *sName = g_name[n].c_str();
		#ifdef GX_GEN_STUBS
			// glSomething = stub_glSomething
			fprintf(fp, "\t%s = stub_%s;\n", sName, sName);
		#else
			// glSomething = NULL
			fprintf(fp, "\t%s = NULL;\n", sName);
		#endif
	}
	fprintf(fp, "}//Reset\n");

	fprintf_break(fp);

	//--- generate the Load() method
	fprintf(fp,
		"bool " GX_CLASS_NAME "::Load() {\n"
		"\tReset();\n"		// reset members first
	);
#ifdef __WIN32__
	// are we on a context? if not, drop out immediately
	fprintf(fp, "\tif (!wglGetCurrentContext()) return false;\n");
#endif
	// local vars
#ifdef _WIN32
	fprintf(fp, "\tPROC p=0;\n");
#elif defined(__X11__)
	fprintf(fp, "\tvoid (*p)() = 0;\n");
#endif
	for (unsigned n=0; n<g_name.size();n++) {
		const char *sName = g_name[n].c_str();
#ifdef _WIN32
		fprintf(fp, "\tp = wglGetProcAddress(\"%s\");\n", sName);
#elif defined(__X11__)
		fprintf(fp, "\tp = glXGetProcAddress((const unsigned char*)\"%s\");\n", sName);
#else
#error "unupported platform, don't know how to get pointers to extension functions"
#endif
		fprintf(fp, "\tif (p) {\n");
		fprintf(fp, "\t\t%s = (%s)p;\n", sName, GetPFNType(sName).c_str());
		fprintf(fp, "\t\tm_count++;\n");
#ifdef  GX_GEN_PRINT_ON_LOAD
		fprintf(fp, "\t\tprintf(\"%s\\n\");\n", sName);
#endif//GX_GEN_PRINT_ON_LOAD
		fprintf(fp, "\t}\n");
#ifdef  GX_GEN_PRINT_ON_LOAD_FAIL
		fprintf(fp, "	else printf(\"%s NOT FOUND\\n\");\n", sName);
#endif
	}
	fprintf(fp,
		"\treturn (m_count > 0);\n"
	);
	fprintf(fp,
		"}\n"
	);

	// close file
	fclose(fp);

	return true;
}//MakeC
//-----------------------------------------------------------------------------

/**
 * Generate public header file GX_HEADER_PUBLIC
 */
bool MakeH_public(
	const char *cName,	// name of H file to create
	const char *hName	// name of header to include
) {
	FILE *fp = fopen(cName, "w");
	if (!fp) {
		fprintf(stderr, "Failed to create %s\n", cName);
		return false;
	}
	printf("Writing %s\n", cName);

	// pretty simple minded code to convert 'header.h' into '__header_h'
	char sHdrTag[256];
	sprintf(sHdrTag, "__%s", cName);
	for (int n=0; sHdrTag[n]; n++) if (sHdrTag[n]=='.') sHdrTag[n]='_';

	// print header prefix
	fprintf(fp,
		"#pragma once\n"
		"#ifndef %s\n"
		"#define %s\n\n",
		sHdrTag, sHdrTag
	);

	// include the header that defines singleton/manager class
	fprintf(fp,
		"#include \"%s\"\n",
		hName
	);
	fprintf(fp,
		"#include <stdlib.h>\n"	// just to get NULL defined
	);

	fprintf(fp,
		"\n"
		"/**\n"
		" * This is an automatically generated file: do not edit\n"
		" * Generated on %s"
		GX_FILE_PREAMBLE
		" */\n",
		g_sTimeDate.c_str()
	);

	fprintf_break(fp);

	// open namespace
	fprintf(fp,
		"namespace " GX_NAMESPACE_PUBLIC " {\n\n"
	);

	{// output all the public inline GL extension function declarations
		for (unsigned n=0; n<g_func.size(); n++) {
			string sRetType( GetReturnType(g_func[n].c_str()) );
			// output inline, return type, function name
			fprintf(fp,
				"inline %s %s",
				sRetType.c_str(),		// return type
				g_name[n].c_str()		// name of function
			);

			// output parameter list
			int nParams;
			fprintf(fp, "%s",
				GetParamListNamed(g_func[n].c_str(), &nParams).c_str()
			);

			// open function def.
			fprintf(fp, " {\n");

			// if not a void return type, we need to output 'return'
			if ( _stricmp(sRetType.c_str(),"void")!=0 )
				fprintf(fp, "\treturn ");
			else
				fprintf(fp, "\t");

			// output something like:
			//   manager::getCurrent()->glExtensionFunction(
			fprintf(fp,
				GX_CLASS_NAME_MGR "::" GX_CLASS_FUNC_MGR "()->"
				"%s(", g_name[n].c_str()
			);
			// print parameters a,b,c,d,e,f..
			for (int n=0; n<nParams; n++) {
				if (n>0) fprintf(fp,",");
				fprintf(fp, "%c", (char)('a'+n));
			}
			fprintf(fp,");\n");

			// close function def.
			fprintf(fp, "}\n");
		}//for(n)
	}

	// close namespace
	fprintf(fp,
		"\n}//namespace " GX_NAMESPACE_PUBLIC "\n"
	);

	fprintf_break(fp);

	// print header suffix
	fprintf(fp,
		"#endif//%s\n",
		sHdrTag
	);

	// close file
	fclose(fp);

	return true;
}//MakeH_public

//-----------------------------------------------------------------------------

/**
 * Generate header file 2: don't use a path, only a simple filename!
 */
bool MakeH2(const char *name, const char *hName) {
	FILE *fp = fopen(name, "w");
	if (!fp) {
		fprintf(stderr, "Failed to create %s\n", name);
		return false;
	}
	printf("Writing %s\n", name);

	// pretty simple minded code to convert 'header.h' into '__header_h'
	char sHdrTag[256];
	sprintf(sHdrTag, "__%s", name);
	for (int n=0; sHdrTag[n]; n++) if (sHdrTag[n]=='.') sHdrTag[n]='_';

	// print header prefix
	fprintf(fp,
		"#pragma once\n"
		"#ifndef %s\n"
		"#define %s\n\n",
		sHdrTag, sHdrTag
	);
	fprintf(fp,
		"/**\n"
		" * This is an automatically generated header file: do not edit\n"
		" * Generated %d functions on %s"
		GX_FILE_PREAMBLE
		" */\n\n",
		(int)g_name.size(),
		g_sTimeDate.c_str()
	);
	fprintf(fp,
		"#include <assert.h>\n"
		"#include \"%s\"\n\n", hName
	);

	// output class definition
	fprintf(fp,
		"class " GX_CLASS_NAME2 " {\n"
	);

	// public methods
	fprintf(fp,
		"public:\n"
		"\t"  GX_CLASS_NAME2 "();\n"				// ctor()
		"\tvirtual ~" GX_CLASS_NAME2 "();\n"		// virtual ~dtor()
		"\t" "bool Load();\n"						// bool Load();
		"\t" "long Count() const;\n"				// long Count() const;
		"\t" "long Known() const;\n"				// long Known() const;
		"\t" "bool Supports(const char *) const;\n"	// bool Supports(const char*) const;
	);

	// output all the function declarations
	fprintf(fp,
		"public:\n"
		"\t// GL extension functions\n\n"
	);

	// output all the GL extension function declarations
	for (unsigned n=0; n<g_func.size(); n++) {
		string sRetType( GetReturnType(g_func[n].c_str()) );
		// output return type, function name
		fprintf(fp, "\t%s %s", sRetType.c_str(), g_name[n].c_str());

		// output parameter list
		fprintf(fp, "%s", GetParamList(g_func[n].c_str()).c_str() );

		// semicolon, newline
		fprintf(fp, ";\n");
	}

	/*
	for (unsigned n=0; n<g_name.size(); n++) {
		const char *sName = g_name[n].c_str();
		// PFNGLSOMETHINGPROC glSomething;
		fprintf(fp, "\t%s %s;\n", GetPFNType(sName).c_str(), sName);
	}
	*/
	// output private members
	fprintf(fp,
		"private:\n"
		"\t// Private member variables\n"
		"\t" GX_CLASS_NAME " *m_pglex;\n"
	);
	fprintf(fp, "};\n");	// end class

	{//-- output inlines
		fprintf_break(fp);

		// output ctor()
		fprintf(fp,
			"inline " GX_CLASS_NAME2 "::" GX_CLASS_NAME2 "() {\n"
			"\tm_pglex = new " GX_CLASS_NAME ";\n"
			"\tassert(m_pglex!=NULL);\n"
			"}\n\n"
		);

		// output dtor()
		fprintf(fp,
			"inline " GX_CLASS_NAME2 "::~" GX_CLASS_NAME2 "() {\n"
			"\tdelete m_pglex;\n"
			"}\n\n"
		);

		// output Load() method
		fprintf(fp,
			"inline bool " GX_CLASS_NAME2 "::Load() {\n"
			"\treturn m_pglex->Load();\n"
			"}\n\n"
		);

		// output Count() method
		fprintf(fp,
			"inline long " GX_CLASS_NAME2 "::Count() const {\n"
			"\treturn m_pglex->Count();\n"
			"}\n\n"
		);

		// output Known() method
		fprintf(fp,
			"inline long " GX_CLASS_NAME2 "::Known() const {\n"
			"\treturn m_pglex->Known();\n"
			"}\n\n"
		);

		// output Supports() method
		fprintf(fp,
			"inline bool " GX_CLASS_NAME2 "::Supports(const char *sExt) const {\n"
			"\treturn m_pglex->Supports(sExt);\n"
			"}\n"
		);

		// output all the inline GL extension function declarations
		for (unsigned n=0; n<g_func.size(); n++) {
			string sRetType( GetReturnType(g_func[n].c_str()) );
			// output inline, return type, class::method name
			fprintf(fp,
				"\ninline %s " GX_CLASS_NAME2 "::%s",
				sRetType.c_str(),		// return type
				g_name[n].c_str()		// name of function
			);

			// output parameter list
			int nParams;
			fprintf(fp, "%s",
				GetParamListNamed(g_func[n].c_str(), &nParams).c_str()
			);

			// open function def.
			fprintf(fp, " {\n");

			// if not a void return type, we need to output 'return'
			if ( _stricmp(sRetType.c_str(),"void")!=0 )
				fprintf(fp, "\treturn ");
			else
				fprintf(fp, "\t");

			fprintf(fp, "m_pglex->%s(", g_name[n].c_str());
			// print parameters a,b,c,d,e,f..
			for (int n=0; n<nParams; n++) {
				if (n>0) fprintf(fp,",");
				fprintf(fp, "%c", (char)('a'+n));
			}
			fprintf(fp,");\n");

			// close function def.
			fprintf(fp, "}\n");
		}

		fprintf_break(fp);
	}

	// print header suffix
	fprintf(fp,
		"#endif//%s\n",
		sHdrTag
	);

	// close file
	fclose(fp);

	return true;
}//MakeH2

//-----------------------------------------------------------------------------

void Check() {
	int i,j,missing=0;
	for (i=0; i<(int)g_name.size(); i++) {
		string pfn( GetPFNType(g_name[i].c_str()) );
		bool found=false;
		for (j=0; (j<(int)g_pfn.size()) && !found; j++) {
			if (strstr(g_pfn[j].c_str(), pfn.c_str()) != NULL) found=true;
		}
		if (!found) {
			printf("no PFN for %s\n", g_name[i].c_str());
			missing++;
		}
	}
	if (!missing)
		printf("check: there is a PFN for every function name\n");
	else
		printf("error: missing %d PFNs\n", missing);

	missing=0;
	for (i=0; i<(int)g_pfn.size(); i++) {
		// find start of PFNxxxx
		const char *pfnStart = strstr(g_pfn[i].c_str(), "PFN");
		if (!pfnStart) {
			fprintf(stderr, "error: %s in g_pfn\n", g_pfn[i].c_str());
			return;
		}
		bool found=false;
		for (j=0; (j<(int)g_name.size()) && !found; j++) {
			string aspfn( GetPFNType(g_name[j].c_str()) );
			if (strstr(pfnStart, aspfn.c_str()) == pfnStart) found=true;
		}
		if (!found) {
			printf("no function for %s\n", pfnStart);
			missing++;
		}
	}
	if (!missing)
		printf("check: there is a function for every PFN\n");
	else
		printf("error: missing %d functions\n", missing);
}//Check

//-----------------------------------------------------------------------------

int main (int argc, char **argv) {
	if (argc<2) {
		fprintf(stderr, "Expected a list of glext header files\n");
		return 0;
	}

	// record start time
	CalcTime();

	// parse glext headers
	printf("Parsing %d files:\n", argc-1);
	for (int n=1; n<argc; n++) {
		printf("Reading %s\n", argv[n]);
		if (!Parse(argv[n])) {
			fprintf(stderr, "Failed during header parse\n");
			return 1;
		}
	}

	Show();
	//Check();

	// generate output H/C files
	MakeH( GX_HEADER_FP );
	MakeCPP( GX_SOURCE_FP, GX_HEADER_FP );

	MakeH2( GX_HEADER, GX_HEADER_FP);

	MakeH_public( GX_HEADER_PUBLIC, GX_HEADER_MGR );

	// all done
	return 0;
}//main
