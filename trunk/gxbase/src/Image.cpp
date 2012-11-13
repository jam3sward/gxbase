#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stack>
using namespace std;
#include "Image.h"
#include "port.h"

/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2003-2006 James Ward, Department of Computer Science,
 * University of Hull. All rights reserved.
 *
 * UNIX port copyright (C) 2008 John Tsiombikas <nuclear@member.fsf.org>
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

//-----------------------------------------------------------------------------

// define IMAGE_CLASS_STANDALONE to build Image class outside GXBase
//
#ifndef IMAGE_CLASS_STANDALONE
using namespace gxbase;
#endif//IMAGE_CLASS_STANDALONE

// define IMAGE_CLASS_NOFIX_BGREXT to prevent these definitions
//
#ifndef IMAGE_CLASS_NOFIX_BGREXT
	// if we are missing GL_BGR_EXT define it to GL_BGR
	#if !defined(GL_BGR_EXT) && defined(GL_BGR)
	#define GL_BGR_EXT GL_BGR
	#endif

	// if we are missing GL_BGRA_EXT define it to GL_BGRA
	#if !defined(GL_BGRA_EXT) && defined(GL_BGRA)
	#define GL_BGRA_EXT GL_BGRA
	#endif
#endif//IMAGE_CLASS_NOFIX_BGREXT

//-----------------------------------------------------------------------------

#if defined(GXBASE_JPEG_IPIC)
	//-- using IPicture to load JPG (and some other) formats
	#include <direct.h>		// getcwd
	#include <atlbase.h>
#elif defined(GXBASE_JPEG_IJG)
	//-- using IJG JPEG library to load JPG

	// this prevents IJG code from defining the INT32 type,
	// which conflicts with VS.NET
	#if (_MSC_VER >= 1300)
	#define XMD_H
	#endif//_MSC_VER

	#include <setjmp.h>
	extern "C" {
	#include "jpeglib.h"
	}
#else
	//-- JPG not supported
#endif

//-----------------------------------------------------------------------------

#ifndef NDEBUG
#define dbg_printf printf
#else
#define dbg_printf if (0) printf
#endif

#define err_printf printf
#define msg_printf printf

//-----------------------------------------------------------------------------

// default alpha value, when you use 3 component colours on an
// image with 4 component colours (for example)
static const BYTE Image_DefaultAlpha = 255;		// JWW 19/11/03 changed

_GXBASE_BEGIN
class ImageEx {
public:
	ImageEx(Image *parent) {
		assert(parent!=NULL);
		m_parent = parent;
		Reset();
	}

	void Reset() {
		// NOTE m_parent IS NOT RESET
		m_pData   = NULL;
		m_format  = Image::RGB;
		m_nWidth  = 0;
		m_nHeight = 0;
		m_nRowSize = 0;
		m_nRowTotal = 0;
		m_nSize		= 0;
		m_nStore    = 0;
	}

	bool Valid() const {
		return (m_pData!=NULL);
	}

	bool Alloc(long width, long height, Image::Format fmt, long rowPad);
	void Free();

	/**
	 * Get the pixel size for a given pixel format, which is the number of bytes
	 * used to store each pixel. This need not be the same as the current pixel
	 * format.
	 */
	static long GetPixelSize(Image::Format fmt);

	/**
	 * Converts RGB value to Luminance
	 */
	static BYTE RGB2LUM (BYTE r, BYTE g, BYTE b) {
		float fl = 0.3f * (float)r + 0.6f*(float)g + 0.1f*(float)b;
		return (BYTE)(fl + 0.5f);
	}

	bool LoadBMPDirect(const char *name);
	bool LoadBMP(const char *name);
	bool LoadJPG(const char *name);
	bool LoadTGA(const char *name);	// JWW 19/11/03
	bool SaveBMP(const char *name);

	bool HasBGRA();
#ifdef __WIN32__
	static HWND GetHWNDFromHDC(HDC hdc);
#endif

	struct pixel;		///< (x,y) pixel coordinate for flood fill stack
	struct FF_RGB;		///< RGB pixel helper for drawing functions
	struct FF_LUM;		///< LUM pixel helper for drawing functions

	/**
	 * Generic Bresenham line implementation for any pixel type
	 */
	template <class T>
	static void draw_line(
		Image &img, long x1, long y1, long x2, long y2, const T &fgcol
	);

	/**
	 * Generic flood fill implementation for any pixel type
	 */
	template <class T>
	static void flood_fill(Image &img, long x, long y, const T &fgcol);

	Image *m_parent;		// pointer to parent image class
	Image::Format m_format;	// image format
	BYTE *m_pData;			// pointer to image data (or NULL)
	long m_nWidth;			// width  (pixels)
	long m_nHeight;			// height (pixels)
	long m_nSize;			// size of image (bytes)   : must be <= m_nStore
	long m_nStore;			// size of storage (bytes) : maybe > m_nSize
	long m_nRowSize;		// row size in bytes, pixel data only
	long m_nRowTotal;		// total row size in bytes including padding
};
_GXBASE_END

//-----------------------------------------------------------------------------

/**
* Default constructor
*/
Image::Image() {
	extra = new ImageEx(this);
	assert(extra!=NULL);
}

/**
 * Construct an image of given (width,height) and image format. This call
 * is exactly equivalent to constructing an image, and calling Create()
 * except that the return code from Create() is silently discarded.
 */
Image::Image(long width, long height, Format fmt, long rowPad) {
	extra = new ImageEx(this);
	assert(extra!=NULL);
	Create(width,height,fmt,rowPad);
}

//-----------------------------------------------------------------------------

/**
* Copy constructor
*/
Image::Image(const Image &rhs) {
	extra = new ImageEx(this);
	assert(extra!=NULL);
	// use assignment operator
	*this = rhs;
}

//-----------------------------------------------------------------------------

/**
* Destructor
*/
Image::~Image() {
	Free();
	delete extra;
}

//-----------------------------------------------------------------------------

/**
* Assignment operator
*/
Image & Image::operator = (const Image &rhs) {
	// allocate storage
	bool done = Create(
		rhs.Width(),
		rhs.Height(),
		rhs.GetFormat(),
		rhs.GetRowPad()
	);

	// how to handle failed allocation? throw? assert fail?
	// currently, we just create an empty image and return
	// at least the program won't crash
	if (!done) return *this;

	// copy image data: including padding
	for (long n=0; n<Height(); n++)
		memcpy(
			GetRowData(n),			// destination
			rhs.GetRowData(n),		// source
			GetRowSize()			// includes padding
		);

	// return the image
	return *this;
}

//-----------------------------------------------------------------------------

#ifndef __WIN32__
struct RGBQUAD {
	BYTE rgbBlue;
	BYTE rgbGreen;
	BYTE rgbRed;
	BYTE rgbReserved;
} PACKED_STRUCT;

struct BITMAPFILEHEADER { 
	uint16_t bfType; 
	uint32_t bfSize; 
	uint16_t bfReserved1; 
	uint16_t bfReserved2; 
	uint32_t bfOffBits; 
} PACKED_STRUCT;

struct BITMAPINFOHEADER {
	uint32_t biSize; 
	int32_t biWidth; 
	int32_t biHeight; 
	uint16_t biPlanes; 
	uint16_t biBitCount; 
	uint32_t biCompression; 
	uint32_t biSizeImage; 
	int32_t biXPelsPerMeter; 
	int32_t biYPelsPerMeter; 
	uint32_t biClrUsed; 
	uint32_t biClrImportant; 
} PACKED_STRUCT;

/* constants for the biCompression field */
#define BI_RGB        0
#define BI_RLE8       1
#define BI_RLE4       2
#define BI_BITFIELDS  3
#define BI_JPEG       4
#define BI_PNG        5
#endif	// !__WIN32__

/**
 * Load a bitmap image from file. This method attempts to load BMP files
 * without recourse to WIN32 API calls. This avoids problem of bit depth
 * being limited by that of the display device. This method doesn't support
 * all BMP formats, but we can fall back to 'LoadBMP' for those cases.
 */
bool ImageEx::LoadBMPDirect(const char *name) {
	bool done=false;

	// attempt to open file
	FILE *fp = fopen(name,"rb");
	if (!fp) return false;

	const WORD BMP_MAGIC = 0x4D42;	// Bitmap header - "BM"

	BYTE *buffer=NULL;
	RGBQUAD *palette=NULL;
	int width=0,height=0,stride=0;

	BITMAPFILEHEADER bmfh;
	BITMAPINFOHEADER bmih;

	// flip vertically?
	bool flipY=false;

	do {
		// Read bitmap file header
		if ((fread(&bmfh,sizeof(bmfh),1,fp) != 1) || (bmfh.bfType != BMP_MAGIC)
		) {
			//dbg_printf("bmp: bad file header\n");
			break;
		}

		// Read bitmap info header
		if (fread(&bmih,sizeof(bmih),1,fp) != 1) {
			dbg_printf("bmp: bad info header\n");
			break;
		}

		if ( (bmih.biCompression != BI_RGB) || (bmih.biPlanes != 1) ) {
			//dbg_printf("LoadBMPDirect: unsupported format\n");
			break;
		}

		// output dimensions
		width  = bmih.biWidth;
		height = bmih.biHeight;
		if (height < 0) {
			height=-height;
			flipY=true;
		}

		if ((width <= 0) || (height <= 0)) {
			dbg_printf("bmp: dubious looking bitmap dimensions\n");
			break;
		}

		if (bmih.biBitCount == 24) {
			//---- Load 24bpp Image

			// seek straight to the bitmap data
			if (fseek(fp, bmfh.bfOffBits, SEEK_SET) != 0) {
				dbg_printf("bmp: can't seek to image data offset\n");
				break;
			}

			// calculate stride (for DWORD alignment)
			long rowsize = width*3, mod = rowsize&3;
			stride = rowsize + (mod?(4-mod):0);

			// calculate size of image if not specified
			if (bmih.biSizeImage == 0)
				bmih.biSizeImage = stride * height;

			// allocate buffer
			buffer = new BYTE [bmih.biSizeImage];
			if (!buffer) {
				dbg_printf("bmp: alloc failed\n");
				break;
			}
			
			// read image data into buffer
			if (fread(buffer, bmih.biSizeImage, 1, fp) != 1) {
				dbg_printf("bmp: failed reading bitmap data\n");
				break;
			}

			if (stride>=width*3) {
				dbg_printf("bmp: loaded (0x%8p, %dx%d)\n",buffer,width,height);
				if (Alloc(width,height,Image::BGR,0)) {
					for (long y=0; y<m_nHeight; y++) {
						BYTE
							*pSrc = buffer + (long)stride*(flipY?(m_nHeight-y-1):y),
							*pDst = m_pData + m_nRowTotal*y;
						memcpy(pDst, pSrc, width*3);
					}
				}

				done=true;
			} else
				dbg_printf("bmp: bitmap data/dims look dubious\n");
		} else if (bmih.biBitCount == 8) {
			//---- Load 8bpp Image
			if (bmih.biClrUsed == 0) bmih.biClrUsed = (1 << bmih.biBitCount);

			// create palette
			palette = new RGBQUAD[256];
			if (!palette) {
				dbg_printf("bmp: failed to allocate palette\n");
				break;
			}
			
			// seek to start of palette (in case BMIH is odd size)
			if (fseek(fp, sizeof(bmfh) + bmih.biSize, SEEK_SET) != 0) {
				dbg_printf("bmp: unable to seek to palette data\n");
				break;
			}

			// read palette
			int n;
			for (n=0; n<(int)bmih.biClrUsed; n++)
				if (fread(&palette[n], sizeof(RGBQUAD), 1, fp) != 1) break;

			if (n < (int)bmih.biClrUsed) {
				dbg_printf("bmp: failed to load palette\n");
				break;
			}

			// seek straight to the bitmap data
			if (fseek(fp, bmfh.bfOffBits, SEEK_SET) != 0) {
				dbg_printf("bmp: can't seek to image data offset\n");
				break;
			}

			// calculate stride (for DWORD alignment)
			long rowsize = width, mod = rowsize&3;
			stride = rowsize + (mod?(4-mod):0);

			// calculate size of image if not specified
			if (bmih.biSizeImage == 0)
				bmih.biSizeImage = stride * height;

			// allocate buffer
			buffer = new BYTE [bmih.biSizeImage];
			if (!buffer) {
				dbg_printf("bmp: alloc failed\n");
				break;
			}
			
			// read image data into buffer
			if (fread(buffer, bmih.biSizeImage, 1, fp) != 1) {
				dbg_printf("bmp: failed reading bitmap data\n");
				break;
			}

			// check for greyscale palette:
			//   RGB of every palette entry must be equal
			for (n=0; n<(int)bmih.biClrUsed; n++)
				if (!((palette[n].rgbBlue == palette[n].rgbGreen) &&
				      (palette[n].rgbRed  == palette[n].rgbGreen))) break;
			bool bIsGrey = (n==(int)bmih.biClrUsed);	// JWW 08/12/03 silence C4018

			// read image data
			if (bIsGrey) {
				// 8bpp greyscale image
				dbg_printf("bmp: loading 8bpp greyscale\n");

				// allocate LUM image
				if (Alloc(width,height,Image::LUM,0)) {
					for (long y=0; y<m_nHeight; y++) {
						// src/dst of data transfer
						BYTE
							*pSrc = buffer + (long)stride*(flipY?(m_nHeight-y-1):y),
							*pDst = m_pData + m_nRowTotal*y;

						// remap: in case palette is non-linear
						for (long x=0; x<m_nWidth; x++) {
							// note: all RGB terms are equal, so we can use any
							pDst[x] = palette[ pSrc[x] ].rgbGreen;
						}
					}

					done=true;
				} else {
					dbg_printf("bmp: alloc failed\n");
					break;
				}
			} else {
				// 8bpp uncompressed, paletted colour image
				dbg_printf("bmp: loading 8bpp paletted colour\n");
				// allocate BGR image
				if (Alloc(width,height,Image::BGR,0)) {
					for (long y=0; y<m_nHeight; y++) {
						// src/dst of data transfer
						BYTE
							*pSrc = buffer + (long)stride*(flipY?(m_nHeight-y-1):y),
							*pDst = m_pData + m_nRowTotal*y;

						// lookup BGR colours from palette
						for (long x=0; x<m_nWidth; x++) {
							RGBQUAD &entry = palette[pSrc[x]];
							pDst[0] = entry.rgbBlue;
							pDst[1] = entry.rgbGreen;
							pDst[2] = entry.rgbRed;
							pDst+=3;
						}//for(x)
					}//for(y)

					done=true;
				} else {
					dbg_printf("bmp: alloc failed\n");
					break;
				}
			}
		} else {
			// unsupported bpp
			break;
		}
	} while (0);

	// close file
	fclose(fp);

	// free image buffer
	delete [] buffer;

	// free palette
	delete [] palette;

	if (!done) Free();

	// return true if we have a valid image
	return done;
}//LoadBMPDirect

//-----------------------------------------------------------------------------

/**
 * Load a bitmap image from file.
 */
bool ImageEx::LoadBMP(const char *name) {
#ifdef __WIN32__
	HDC		hDC  = NULL;
	HANDLE	hBMP = NULL;
	HGDIOBJ	old  = NULL;
	bool	done = false;

	do {
		// load image from file
		hBMP = LoadImage(0, name, IMAGE_BITMAP, 0,0, LR_LOADFROMFILE);
		if (!hBMP) break;

		// get bitmap dimensions
		BITMAP bmp;
		if (!GetObject(hBMP, sizeof(bmp),&bmp)) break;

		// create DC compatible with desktop
		hDC = CreateCompatibleDC(0);

		// select bitmap handle into DC
		old = SelectObject(hDC, hBMP);

		// create bitmap info header
		BITMAPINFO bmi;
		memset(&bmi,0,sizeof(bmi));
		BITMAPINFOHEADER &bih = bmi.bmiHeader;
		bih.biSize		  = sizeof(bih);
		bih.biBitCount	  = 24;
		bih.biWidth		  = bmp.bmWidth;
		bih.biHeight	  = bmp.bmHeight;
		bih.biCompression = BI_RGB;
		bih.biPlanes	  = 1;
		LONG
			rowBytes = (((bih.biWidth * bih.biBitCount) + 31) / 32) * 4,
			rowPad	 = rowBytes - (((bih.biWidth * bih.biBitCount) + 7) / 8);
		bih.biSizeImage   = rowBytes * bmp.bmHeight;

		// allocate bitmap
		if (!Alloc(bmp.bmWidth, bmp.bmHeight, Image::BGR, rowPad)) break;

		// get the bitmap image data
		if (!GetDIBits(
			hDC, (HBITMAP)hBMP,		// handle to DC and bitmap
			0, bmp.bmHeight,		// start scan line, and number of scanlines
			m_pData,				// pointer to buffer to receive data
			&bmi, DIB_RGB_COLORS	// bitmap format
		)) break;

		// if we reach this point, it loaded
		done=true;
	} while (0);

	// clean up
	if (hDC && old) SelectObject(hDC,old);
	if (hBMP) DeleteObject(hBMP);
	if (hDC)  DeleteDC(hDC);

	// if failed, free image
	if (!done) Free();

	// return status
	return done;
#else
	return LoadBMPDirect(name);
#endif
}//LoadBMP

//-----------------------------------------------------------------------------

/**
 * Attempt to load a TGA file
 */
bool ImageEx::LoadTGA(const char *name) {
	if (!name) return false;

	const BYTE
		CM_None    = 0,		// no colour map
		//CM_Palette = 1,		// palette
		//IT_None	   = 0,		// no type
		//IT_Indexed = 1,		// indexed image
		IT_RGB	   = 2,		// RGB image
		//IT_Grey	   = 3,		// Grey image
		IT_RLEComp = 8,		// Flag: RLE compression
		ID_LtoR	   = (1<<4),// Flag: left-to-right ordered
		ID_TtoB	   = (1<<5);// Flag: top-to-bottom ordered

#pragma pack (push,1)
	struct TGAHeader {
		BYTE nIdLength;			// ID length (size of field after this header)
		BYTE nColMapType;		// 0=None, 1=Palette (CM_xx)
		BYTE nImageType;		// 0=None, 1=Indexed, 2=RGB, 3=Grey, +8=RLE (IT_xx)
		WORD nCMapStart;		// start of colour map
		WORD nCMapLength;		// size of colour map
		BYTE nCMapBits;			// bits per colour map entry: 15,16,24,32
		short nXStart;			// x origin of image
		short nYStart;			// y origin of image
		WORD nWidth;			// width (pixels)
		WORD nHeight;			// height (pixels)
		BYTE nBitsPixel;		// bits per pixel: 8,16,24,32
		BYTE nDescript;			// image descriptor flags (ID_xx)
	} PACKED_STRUCT;
	// TGA footer
	struct TGAFooter {
		DWORD dwExtOffset;	// extension area offset
		DWORD dwDevOffset;	// developer area offset
		char  signature[16];// signature 'TRUEVISION-XFILE'
		BYTE  dot;			// dot character
		BYTE  nullTerm;		// null terminator
	} PACKED_STRUCT;
#pragma pack (pop)

	// does it have TGA extension?
	const char *last4 = name+strlen(name)-4;
	bool bHasExt = (strlen(name)>4) &&
		((strstr(name,".tga") == last4) || (strstr(name,".TGA") == last4));

	// attempt to open file
	FILE *fp = fopen(name, "rb");
	if (!fp) return false;

	bool
		done   = false,
		bFlipX = false,
		bFlipY = false;
	do {
		// seek to TGA file footer in last 26 bytes of the file
		// (only present in new TGA files)
		if (fseek(fp, -26, SEEK_END) != 0) break;

		// read TGA file footer
		TGAFooter footer;
		if (fread(&footer,sizeof(footer),1,fp) != 1) break;

		// we only attempt to read files that either have a new TGA footer,
		// or have TGA extension
		if ((strncmp(&footer.signature[0], "TRUEVISION-XFILE", 16) != 0) &&
			!bHasExt ) break;

		// go back to header
		if (fseek(fp, 0, SEEK_SET) != 0) break;

		// read TGA file header
		TGAHeader header;
		if (fread(&header,sizeof(header),1,fp) != 1) break;
	
		// we only support RGB formats currently
		if ((header.nImageType != IT_RGB) &&			// RGB
			(header.nImageType != (IT_RGB | IT_RLEComp))// RGB, compressed RLE
		) break;
		// don't support colour maps
		if (header.nColMapType != CM_None) break;
		// must be 24 or 32 bits
		if ((header.nBitsPixel != 24) && (header.nBitsPixel != 32)) break;

		// check width/height
		long
			nWidth  = header.nWidth,
			nHeight = header.nHeight;
		if (!nWidth || !nHeight) break;

		// is the image flipped in x or y axes?
		bFlipX = ((header.nDescript & ID_LtoR)==0);
		bFlipY = ((header.nDescript & ID_TtoB)!=0);

		// seek to start of image data
		if (fseek(fp, 18+header.nIdLength, SEEK_SET) != 0) break;
		// note: would need to skip colour map here if we supported it

		// read image data
		if (header.nBitsPixel == 24) {
			//if (!Alloc(nWidth,nHeight, bFlipX ? Image::BGR : Image::RGB, 0))
			//	break;
			if (!Alloc(nWidth,nHeight, Image::BGR, 0))
				break;

			if (header.nImageType & IT_RLEComp) {
				// 24-bit RLE compressed
				//dbg_printf("warning: 24-bit RLE compressed TGA not supported\n");
				BYTE
					*pDst = m_pData,
					*pEnd = m_pData + (m_nRowTotal * m_nHeight);
				BYTE repCnt=0;
				while ((fread(&repCnt,1,1,fp)==1) && (pDst < pEnd)) {
					int count = (repCnt & 0x7F)+1;
					if (repCnt & 0x80) {
						// run-length packet: read RGB value
						BYTE rgb[3];
						if (fread(rgb,3,1,fp) != 1) break;
						// output RGB value (count) times
						for (int b=0; b<count; b++) {// && (pDst<pEnd); b++) {
							pDst[0]=rgb[0];
							pDst[1]=rgb[1];
							pDst[2]=rgb[2];
							pDst+=3;
						}
					} else {
						// raw packet: just copy data
						if ((pDst+count) > pEnd) break;
						// JWW 08/12/03 cast to silence C4018
						if ((int)fread(pDst,3,count,fp) != count) break;
						pDst+=3*count;
					}
				}//while
				done = (pDst == pEnd);
			} else {
				// 24-bit uncompressed
				long y;
				for (y=0; y<nHeight; y++) {
					// read a row
					BYTE *pDst = m_pData + m_nRowTotal*y;
					// JWW 08/12/03 cast to silence C4018
					if ((int)fread(pDst, 3, nWidth, fp) != nWidth) break;
				}
				// success?
				done = (y == nHeight);
			}
		} else if (header.nBitsPixel == 32) {
			if (!Alloc(nWidth,nHeight, Image::BGRA,0)) break;
			
			if (header.nImageType & IT_RLEComp) {
				// 32-bit RLE compressed
				dbg_printf("warning: 32-bit RLE compressed TGA not supported\n");
				BYTE
					*pDst = m_pData,
					*pEnd = m_pData + (m_nRowTotal * m_nHeight);
				BYTE repCnt=0;
				while ((fread(&repCnt,1,1,fp)==1) && (pDst < pEnd)) {
					int count = (repCnt & 0x7F)+1;
					if (repCnt & 0x80) {
						// run-length packet: read RGB value
						BYTE rgb[4];
						if (fread(rgb,4,1,fp) != 1) break;
						// output RGBA value (count) times
						for (int b=0; b<count; b++) {// && (pDst<pEnd); b++) {
							pDst[0]=rgb[0];
							pDst[1]=rgb[1];
							pDst[2]=rgb[2];
							pDst[3]=rgb[3];
							pDst+=4;
						}
					} else {
						// raw packet: just copy data
						if ((pDst+count) > pEnd) break;
						// JWW 08/12/03 cast to silence C4018
						if ((int)fread(pDst,4,count,fp) != count) break;
						pDst+=4*count;
					}
				}//while
				done = (pDst == pEnd);
			} else {
				// 32-bit uncompressed
				long y;
				for (y=0; y<nHeight; y++) {
					// read a row
					BYTE *pDst = m_pData + m_nRowTotal*y;
					// JWW 08/12/03 cast to silence C4018
					if ((int)fread(pDst, 4, nWidth, fp) != nWidth) break;
				}
				// success?
				done = (y == nHeight);
			}
		} else
			break;
	} while (0);

	// close file
	if (fp) fclose(fp);

	if (done) {
		// success: flip y if needed
		if (bFlipY && (m_parent!=NULL)) m_parent->FlipY();
	} else {
		// free image on failure
		Free();
	}

	// return true for success, false on failure
	return done;
}//LoadTGA

//-----------------------------------------------------------------------------

#ifdef GXBASE_JPEG_IJG
	//--- using IJG library
	//
	bool ImageEx::LoadJPG(const char *name) {
		if (!name) return false;

		// Attempt to open the input file first
		FILE *fp = fopen(name, "rb");
		if (!fp) {
			dbg_printf("Failed to open %s\n", name);
			return false;
		}

		// error manager for JPEG reader
		typedef struct my_error_mgr {
			struct jpeg_error_mgr pub;	// "public" fields
			jmp_buf setjmp_buffer;		// for return to caller
		} *my_error_ptr;

		// this struct allows us to define the error handler locally
		struct tagErr {
		public:
			// JPEG error handler
			METHODDEF(void)
			my_error_exit (j_common_ptr cinfo)
			{
				dbg_printf("jpeg: caught an error\n");
				my_error_ptr myerr = (my_error_ptr) cinfo->err;

				// display error message
				//(*cinfo->err->output_message)(cinfo);

				// return control to the setjmp point
				longjmp(myerr->setjmp_buffer, 1);
			}//my_error_exit
		};

		//-- Initialise JPEG decompression object

		struct jpeg_decompress_struct cinfo;// JPEG decompression parameters
		struct my_error_mgr jerr;			// private JPEG error handler

		// set up normal JPEG error routines, then override
		// error_exit with our own function
		cinfo.err = jpeg_std_error(&jerr.pub);
		jerr.pub.error_exit = &tagErr::my_error_exit;

		// install setjmp return context for my_error_exit
		if (setjmp(jerr.setjmp_buffer)) {
			// JPEG code signalled an error: clean up and return
			dbg_printf("JPEG setjmp failed\n");
			jpeg_destroy_decompress(&cinfo);
			fclose(fp);
			return false;
		}

		// initialise the JPEG decompression object
		jpeg_create_decompress(&cinfo);

		//-- Specify data source (the file)
		jpeg_stdio_src(&cinfo, fp);

		//-- Read parameters from file header
		jpeg_read_header(&cinfo, TRUE);
		// return value is ignored because:
		//   a) suspension not possible with stdio data source
		//   b) we passed TRUE to reject a tables-only JPEG files as an error
		// see libjpeg.doc (from independent JPEG group) for more info.

		//-- Set parameters for decompression
		
		//.. just leave with defaults ..

		//-- Start decompressor
		jpeg_start_decompress(&cinfo);
		// return value ignored since suspension isn't possible with stdio source

		//-- Process decompressed data

		// JSAMPLEs per row in output buffer
		int row_stride = cinfo.output_width * cinfo.output_components;
		// allocate single row sample array (temporary)
		JSAMPARRAY buffer = (*cinfo.mem->alloc_sarray)
			((j_common_ptr) &cinfo, JPOOL_IMAGE, row_stride, 1);

		// deduce JPEG image format
		Image::Format format;
		switch (cinfo.output_components) {
		case 1:	 format=Image::LUM; break;		//  8-bit greyscale
		case 3:	 format=Image::RGB; break;		// 24-bit RGB
		default:
			dbg_printf("jpeg: unknown/unsupported format\n");
			jpeg_finish_decompress(&cinfo);
			jpeg_destroy_decompress(&cinfo);
			fclose(fp);
			return false;
		}

		// free existing image
		Free();
		// allocate internal image buffer
		bool bAllocOK =
			buffer[0] &&	// got JPEG buffer
			Alloc(cinfo.output_width, cinfo.output_height, format, 0);

		if (bAllocOK) {
			DWORD row=cinfo.output_height-1;
			// read JPEG image data from decompressor
			while (cinfo.output_scanline < cinfo.output_height) {
				// call JPEG read scanlines to read one row into our buffer
				jpeg_read_scanlines(&cinfo, buffer, 1);
				// here we store the scanline into our own memory buffer
				memcpy(
					m_parent->GetRowData(row--),	// destination
					buffer[0],						// source
					m_parent->GetRowSize()			// length of a row
				);
			}
		} else {
			dbg_printf("jpeg: alloc failed\n");
		}

		//-- Finish decompression
		jpeg_finish_decompress(&cinfo);
		// ignore return value since suspension is not possible with stdio source

		//-- Release JPEG decompression object
		// important: frees lots of memory
		jpeg_destroy_decompress(&cinfo);

		// close input file
		fclose(fp);

		// check for errors
		if ((jerr.pub.num_warnings == 0) && bAllocOK)
			return true;
		else {
			// we got corrupt data warning(s)
			Free();
			return false;
		}
	}//LoadJPG(IJG)
#elif defined(GXBASE_JPEG_IPIC)
	//--- using IPicture method, actually supports: BMP,GIF,JPG,ICO,EMF,WMF
	bool ImageEx::LoadJPG(const char *name) {
		USES_CONVERSION;
		HRESULT hr;

		if (!name) return false;

		// JWW 17/10/05 get full path to file [Q0002JPGPath]
		char sPath[MAX_PATH];
		if (_fullpath(sPath, name, MAX_PATH) == NULL) return false;

		// load the picture
		CComPtr<IPictureDisp> pd;
		hr = OleLoadPicturePath(
			T2OLE(sPath), 0, 0, 0,
			IID_IPictureDisp, reinterpret_cast<void**>(&pd)
		);
		if (hr != S_OK) return false;

		// get interface
		CComQIPtr<IPicture, &IID_IPicture> pic(pd);

		// create DC compatible with desktop
		HDC hDC = CreateCompatibleDC(0);
		if (!hDC) return false;

		// get width and height of picture
		long hmWidth=0, hmHeight=0, nWidth, nHeight;
		pic->get_Width (&hmWidth );
		pic->get_Height(&hmHeight);
		// convert to pixels
		nWidth  = MulDiv(hmWidth, GetDeviceCaps(hDC, LOGPIXELSX), 2540);
		nHeight = MulDiv(hmHeight,GetDeviceCaps(hDC, LOGPIXELSY), 2540);

		// create bitmap info header
		BITMAPINFO bmi;
		memset(&bmi,0,sizeof(bmi));
		BITMAPINFOHEADER &bih = bmi.bmiHeader;
		bih.biSize		  = sizeof(bih);
		bih.biBitCount	  = 24;
		bih.biWidth		  = nWidth;
		bih.biHeight	  = nHeight;
		bih.biCompression = BI_RGB;
		bih.biPlanes	  = 1;
		LONG
			rowBytes = (((bih.biWidth * bih.biBitCount) + 31) / 32) * 4,
			rowPad	 = rowBytes - (((bih.biWidth * bih.biBitCount) + 7) / 8);
		bih.biSizeImage   = rowBytes * nHeight;

		HGDIOBJ hOld=0;
		HBITMAP hBMP=0;
		bool done=false;
		do {
			// create bitmap
			void *pData=0;
			hBMP = CreateDIBSection(hDC, &bmi, DIB_RGB_COLORS, &pData, 0,0);
			if (!hBMP || (pData==NULL)) break;

			// render picture into BMP
			hOld = SelectObject(hDC, hBMP);

			// if loading a metafile, fill the BMP with
			// white before rendering
			SHORT type = PICTYPE_BITMAP;
			if ((pic->get_Type(&type)==S_OK) && (type != PICTYPE_BITMAP)) {
				RECT rc;
				SetRect(&rc,0,0,nWidth,nHeight);
				FillRect(hDC, &rc, (HBRUSH)GetStockObject(WHITE_BRUSH));
			}

			// render into the BMP
			if (pic->Render(
				hDC,				// dc to render into
				0,0,				// destination offset
				nWidth,nHeight,		// destination size
				0,hmHeight,			// source offset
				hmWidth,-hmHeight,	// source size
				0					// dest.ptr if hDC is metafile
			) != S_OK) break;		// abort if we fail

			// allocate storage for image
			if (!Alloc(nWidth,nHeight, Image::BGR, rowPad)) break;

			// sanity checks
			if (bih.biSizeImage != (DWORD)m_nSize) break;

			// copy bitmap data out of BMP into our image
			memcpy(m_pData, pData, bih.biSizeImage);

			// if we reach this point, it loaded
			done=true;
		} while (0);

		// clean up
		if (hDC && hOld) SelectObject(hDC,hOld);
		if (hBMP) DeleteObject(hBMP);
		if (hDC) DeleteDC(hDC);

		// if failed, free image
		if (!done) Free();

		return done;
	}//LoadJPG(IPicture)
#else
	//--- no JPEG support of any kind
	bool ImageEx::LoadJPG(const char *name) {
		return false;
	}
#endif//GXBASE_JPEG

//-----------------------------------------------------------------------------

/**
 * Save an image to file as a bitmap.
 */
bool ImageEx::SaveBMP(const char *name) {
	// check that we have some data
	if (!m_pData) return false;

	// create a copy of the image
	Image temp(*m_parent);

	// convert to BGR format
	if (!temp.SetFormat(Image::BGR)) return false;

	// dword align if required
	long rowSize = temp.GetRowSize();
	if ((rowSize%4)!=0) temp.SetRowSize( 4*(rowSize/4+1) );

	// attempt to create file
	FILE *fp = fopen(name, "wb");
	if (!fp) return false;

	BITMAPINFOHEADER bih;
	memset(&bih,0,sizeof(bih));
	bih.biSize	 = sizeof(bih);
	bih.biBitCount = 24;
	bih.biWidth  = temp.Width();
	bih.biHeight = temp.Height();
	bih.biCompression = BI_RGB;
	bih.biPlanes = 1;
	LONG
		rowBytes = (((bih.biWidth * bih.biBitCount) + 31) / 32) * 4;
		//rowPad	 = rowBytes - (((bih.biWidth * bih.biBitCount) + 7) / 8);
	bih.biSizeImage = rowBytes * temp.Height();

	// construct bitmap file header
	BITMAPFILEHEADER bfh;	// bitmap file header
	memset(&bfh,0,sizeof(bfh));
	bfh.bfType = 0x4D42;	// 'BM'
	bfh.bfOffBits = sizeof(bfh) + bih.biSize + bih.biClrUsed*sizeof(RGBQUAD);
	bfh.bfSize = bfh.bfOffBits + bih.biSizeImage;

	bool done=false;
	do {
		// sanity check
		if (rowBytes != temp.GetRowSize()) break;

		// write BMP file header
		if (fwrite(&bfh, sizeof(bfh), 1, fp) != 1) break;

		// write BMP info header
		if (fwrite(&bih, sizeof(bih), 1, fp) != 1) break;

		// write BMP data
		if (fwrite(temp.GetData(), temp.GetRowSize(), temp.Height(), fp) !=
			(size_t)temp.Height()) break;

		done=true;
	} while (0);

	// close file
	fclose(fp);

	// if failed, delete the broken file
	if (!done) remove(name);

	return done;
}//SaveBMP

//-----------------------------------------------------------------------------

/**
 * Checks if BGR/BGRA are supported on the current context. Only checks
 * on the first call, then returns a cached value.
 */
bool ImageEx::HasBGRA() {
	static bool s_bQuery   = true;	// should we query extensions?
	static bool s_bHasBGRA = false;	// do we have BGR & BGRA support?

	// first time we are called, query support of BGRA:
	// * need to be in an OpenGL context for this to work.
	// * assume extensions are system wide, and persist
	if (s_bQuery) {
		const char *s = (char*)glGetString(GL_EXTENSIONS);
		// we might have GL_EXT_bgra extension support
		if ( (s!=NULL) && (strstr(s, "GL_EXT_bgra") != NULL) ) {
			s_bHasBGRA = true;
		} else {
			// otherwise, OpenGL 1.2 upwards should support it
			s = (char*)glGetString(GL_VERSION);
			float ver;
			if ( (s!=NULL) && (sscanf(s, "%f", &ver)==1) && (ver >= 1.2) ) {
				// OpenGL 1.2 upwards supports BGRA
				s_bHasBGRA = true;
			}
		}
		s_bQuery = false;
	}

	// return state to caller
	return s_bHasBGRA;
}//HasBGRA

//-----------------------------------------------------------------------------

/**
 * Searches all windows to try and find the one with a given HDC. This is a
 * brute force method to find the HWND, when we only have access to the HDC.
 * For example, when using wglGetCurrentDC() to find the OpenGL window DC
 * from a class that doesn't have direct access to the window handle.
 * Returns NULL if the window cannot be found.
 */
#ifdef __WIN32__
HWND ImageEx::GetHWNDFromHDC(HDC hdc) {
	struct tagLocal {
		tagLocal() :m_hwnd(NULL),m_hdc(NULL) {}
		
		// search top-level windows
		static BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam) {
			tagLocal *self = (tagLocal*)lParam;
			HDC hdc = GetDC(hwnd);
			ReleaseDC(hwnd,hdc);
			if (hdc == self->m_hdc) {
				self->m_hwnd = hwnd;
				return FALSE;	// end search
			} else {
				EnumChildWindows(hwnd, EnumChildProc, (LPARAM)self);
				return TRUE;
			}
		}//EnumWindowsProc

		// search child windows
		static BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam) {
			tagLocal *self = (tagLocal*)lParam;
			HDC hdc = GetDC(hwnd);
			ReleaseDC(hwnd,hdc);
			if (hdc == self->m_hdc) {
				self->m_hwnd = hwnd;
				return FALSE;	// end search
			} else
				return TRUE;
		}//EnumChildProc

		HWND Find(HDC hdc) {
			m_hdc  = hdc;
			m_hwnd = NULL;
			EnumWindows(EnumWindowsProc, (LPARAM)this);
			return m_hwnd;
		}//Find
	public:
		HDC  m_hdc;		// hdc we are looking for
		HWND m_hwnd;	// used to store hwnd (if found)
	} local;

	return local.Find(hdc);
}//GetHWNDFromHDC
#endif

//-----------------------------------------------------------------------------

/**
* Load from file. Returns true for success, false on failure.
*/
bool Image::Load(const char *name) {
	// TODO: be more intelligent by using file extensions, fast header test
	if (extra->LoadBMPDirect(name))	// JWW 13/11/03 new code to load direct
		return true;
	else if (extra->LoadBMP(name))
		return true;
	else if (extra->LoadTGA(name))	// JWW 19/11/03 new code to load TGA
		return true;
	else
		return extra->LoadJPG(name);
}//Load

//-----------------------------------------------------------------------------

/**
* Save to file. Return true for success, false on failure.
*/
bool Image::Save(const char *name) const {
	return extra->SaveBMP(name);
}

//-----------------------------------------------------------------------------

/**
 * Grab the contents of the screen into this image. Returns true
 * for success, false on failure.
 */
bool Image::GrabScreen() {
	bool done=false;

#ifdef __WIN32__
	// create DC for screen, and compatible memory DC
	// according to the WIN32 help, this should handle
	// multi-monitor setups for W2K up (but I haven't tried yet)
	HDC
		hScrDC = CreateDC(TEXT("DISPLAY"), NULL, NULL, NULL),
		hMemDC = CreateCompatibleDC(hScrDC);

	if (!hScrDC || !hMemDC) return false;

	// this will be our bitmap handle (or NULL)
	HBITMAP hBMP = NULL;

	do {
		// width and height of screen
		int
			nWidth  = GetDeviceCaps(hScrDC, HORZRES),
			nHeight = GetDeviceCaps(hScrDC, VERTRES);

		if (!nWidth || !nHeight) break;

		// create a bitmap compatible with the screen DC
		hBMP = CreateCompatibleBitmap(hScrDC, nWidth, nHeight);
		if (!hBMP) break;

		// select bitmap into memory DC
		HBITMAP hOldBMP = (HBITMAP)SelectObject(hMemDC, hBMP);

		// use bitblt to copy from screen DC to memory DC
		if (!BitBlt(hMemDC, 0, 0, nWidth, nHeight, hScrDC, 0, 0, SRCCOPY))
			break;

		// restore old BMP, and get handle of captured BMP
		hBMP = (HBITMAP)SelectObject(hMemDC, hOldBMP);
		if (!hBMP) break;

		// create bitmap info header
		BITMAPINFO bmi;
		memset(&bmi,0,sizeof(bmi));
		BITMAPINFOHEADER &bih = bmi.bmiHeader;
		bih.biSize		  = sizeof(bih);
		bih.biBitCount	  = 24;
		bih.biWidth		  = nWidth;
		bih.biHeight	  = nHeight;
		bih.biCompression = BI_RGB;
		bih.biPlanes	  = 1;
		LONG
			rowBytes = (((bih.biWidth * bih.biBitCount) + 31) / 32) * 4,
			rowPad	 = rowBytes - (((bih.biWidth * bih.biBitCount) + 7) / 8);
		bih.biSizeImage   = rowBytes * nHeight;

		// allocate bitmap
		if (!Create(nWidth, nHeight, Image::BGR, rowPad)) break;

		// get the bitmap image data
		if (!GetDIBits(
			hScrDC, hBMP,			// handle to DC and bitmap
			0, nHeight,				// start scan line, and number of scanlines
			GetData(),				// pointer to buffer to receive data
			&bmi, DIB_RGB_COLORS	// bitmap format
		)) break;

		// if we reached this point, we succeeded
		done=true;
	} while (0);

    // clean up
    if (hScrDC) DeleteDC(hScrDC);
    if (hMemDC) DeleteDC(hMemDC);
	if (hBMP) DeleteObject(hBMP);

	// if we failed, free the (possibly broken) image
	if (!done) Free();
#endif
	return done;
}//GrabScreen

//-----------------------------------------------------------------------------

/**
 * Grab the contents of the current OpenGL viewport as an RGB
 * image. Returns true for success, false on failure. For example,
 * you can then use the Save() method to save the image to a file.
 * The GrabGLViewport() method must be called from a valid OpenGL
 * context.
 */
bool Image::GrabGLViewport() {
	// get the current OpenGL viewport dimensions
	GLint vp[4];
	glGetIntegerv(GL_VIEWPORT, vp);
	// grab the viewport contents as an RGB image
	return glReadPixels(vp[0],vp[1],vp[2],vp[3],RGB);
}//GrabGLViewport

//-----------------------------------------------------------------------------

/**
 * Grab the contents of the current OpenGL window as an RGB
 * image. Returns true for success, false on failure. For example,
 * you can then use the Save() method to save the image to a file.
 * The GrabGLWindow() method must be called from a valid OpenGL
 * context.
 */
bool Image::GrabGLWindow() {
#ifdef __WIN32__
	// get DC of current OpenGL window
	HDC hDC = wglGetCurrentDC();
	if (!hDC) return false;

	// get window handle from DC
	HWND hWnd = ImageEx::GetHWNDFromHDC(hDC);
	if (!hWnd) {
		// fall back to GrabGLViewport, but return false to indicate that
		// we possibly didn't capture the whole area
		GrabGLViewport();
		return false;
	}

	// get dimensions of window client area
	RECT rc;
	if (GetClientRect(hWnd, &rc) && (rc.right!=0) && (rc.bottom!=0)) {
		// read the window in RGB format
		return glReadPixels(0,0, rc.right, rc.bottom, RGB);
	} else {
		// fall back to GrabGLViewport, but return false to indicate that
		// we possibly didn't capture the whole area
		GrabGLViewport();
		return false;
	}
#else
	return false;
#endif
}//GrabGLWindow

//-----------------------------------------------------------------------------

/**
* Create an image. Any existing image is destroyed. Calling Create()
* with (width==height==0) is equivalent to Free(). The default format
* is RGB, but other formats can be specified. The rowPad parameter
* allows padding bytes to be added at the end of each row. When the
* image is created, the memory is not filled (ie. the image may
* contain random data). The Clear methods can be used to clear the
* contents of the image to a particular colour.
*/
bool Image::Create(long width, long height, Format fmt, long rowPad) {
	return extra->Alloc(width,height,fmt,rowPad);
}

//-----------------------------------------------------------------------------

/**
 * See Image::Alloc()
 */
bool ImageEx::Alloc(
	long width,		// width  (pixels)
	long height,	// height (pixels)
	Image::Format fmt,		// image pixel format
	long rowPad		// padding at end of each row
) {
	// free any existing storage
	Free();
	
	// alloc of (0,0) is allowed, negative dims. are not
	if ((width<1) || (height<1)) return (width==0)||(height==0);

	// calculate storage size
	long
		pixSize  = GetPixelSize(fmt),		// size of a pixel (bytes)
		rowSize  = width * pixSize,			// size of one pixel row (bytes)
		rowTotal = rowSize + rowPad,		// total row size including padding
		imgSize  = rowTotal * height;		// total image size (bytes)

	// allocate memory
	BYTE *pData = new BYTE[imgSize];
	// check to see if allocation succeeded
	if (!pData) return false;

	// success: fill in structure
	m_format    = fmt;		// pixel format
	m_pData     = pData;	// pointer to image data
	m_nWidth    = width;	// width  (pixels)
	m_nHeight   = height;	// height (pixels)
	m_nRowSize  = rowSize;	// size of row excluding padding
	m_nRowTotal = rowTotal;	// size of row including padding
	m_nStore    = imgSize;	// total size of image (bytes)
	m_nSize	    = imgSize;	// storage size == image size

	// we have allocated OK
	return true;
}//Alloc

//-----------------------------------------------------------------------------

/**
* Free an image. This releases any storage used for the image.
*/
void ImageEx::Free() {
	// take temporary copy of the data pointer
	BYTE *pData = m_pData;
	// clear the structure
	Reset();
	// free the storage
	delete [] pData;
}//Free

//-----------------------------------------------------------------------------

/**
* Free an image. This releases any storage used for the image.
*/
void Image::Free() {
	extra->Free();
}//Free

//-----------------------------------------------------------------------------

bool Image::IsValid() const {
	long width=Width(),height=Height();
	// image must not have zero size
	if (!width || !height) return false;
	// image must have a valid data buffer
	if (GetData()==NULL) return false;
	// check the image size
	long expected = width * height * GetPixelSize() + (height * GetRowPad());
	// does the image have the expected size?
	return (expected == Size());
}//IsValid

//-----------------------------------------------------------------------------

bool Image::IsEmpty() const {
	return !IsValid();
}//IsEmpty

//-----------------------------------------------------------------------------

bool Image::Clear1b(BYTE i) {
	// check image validity
	if (!extra->Valid()) return false;
	
	if ( extra->m_format == Image::LUM ) {
		// special case
		memset(extra->m_pData, i, extra->m_nSize);
		return true;
	} else {
		// general case
		return Clear3b(i,i,i);
	}
}//Clear1b

bool Image::Clear1f(float f) {
	return Clear1b( (BYTE)(255.0f * f + 0.5f) );
}//Clear1f

/**
* Clear the image to the specified RGB colour. The (r,g,b) values range
* from (0..255), values outside this range are clamped. If the image is
* greyscale, the RGB colour is converted to an appropriate grey level
* first. See also Clear3f.
*/
bool Image::Clear3b(BYTE r, BYTE g, BYTE b) {
	return Clear4b(r,g,b,Image_DefaultAlpha);
}//Clear3b

//-----------------------------------------------------------------------------

/**
* Clear the image to the specified RGB colour. The (r,g,b) values range
* from (0..1), values outside this range are clamped. If the image is
* greyscale, the RGB colour is converted to an appropriate grey level
* first. See also Clear3b.
*/
bool Image::Clear3f(float r, float g, float b) {
	return Clear3b(
		(BYTE)(255.0f*r + 0.5f),
		(BYTE)(255.0f*g + 0.5f),
		(BYTE)(255.0f*b + 0.5f)
	);
}

//-----------------------------------------------------------------------------

/**
* Clear the image to the specified RGBA colour. The (r,g,b,a) values range
* from (0..255), values outside this range are clamped. If the image is
* greyscale, the RGBA colour is converted to an appropriate grey level
* first. If the image does not have an alpha component, the (a) parameter
* will be discarded. See also Clear4f.
*/
bool Image::Clear4b(BYTE r, BYTE g, BYTE b, BYTE a) {
	// check image validity
	if (!extra->Valid()) return false;

	// size parameters
	size_t
		pixSize = 0,					// size of a pixel (filled in below)
		rowSize = extra->m_nRowSize;	// size of a row

	// build a pixel
	BYTE p[4];
	switch (extra->m_format) {
	case RGB:
		p[0]=r; p[1]=g; p[2]=b;
		pixSize=3;
		break;
	case RGBA:
		p[0]=r; p[1]=g; p[2]=b; p[3]=a;
		pixSize=4;
		break;
	case BGR:
		p[0]=b; p[1]=g; p[2]=r;
		pixSize=3;
		break;
	case BGRA:
		p[0]=b; p[1]=g; p[2]=b; p[3]=a;
		pixSize=4;
		break;
	case LUM:
		p[0]=ImageEx::RGB2LUM(r,g,b);
		pixSize=1;
		break;
	case ALPHA:		// JWW 27/10/03
		p[0]=a;
		pixSize=1;
		break;
	case LUMALP:
		p[0]=ImageEx::RGB2LUM(r,g,b); p[1]=a;
		pixSize=2;
		break;
	default:
		return false;
	}

	// sanity check
	assert(pixSize==(size_t)GetPixelSize());

	// pointer to first row of image
	BYTE *pFirstRow = GetData();

	// fill in first row, pixel by pixel
	BYTE *dst=pFirstRow;
	for (long x=0; x<Width(); x++) {
		memcpy( dst,p,pixSize );
		dst+=pixSize;
	}

	// remaining rows are same as first row
	for (long n=1; n<Height(); n++)
		memcpy( GetRowData(n), pFirstRow, rowSize);

	return true;
}

//-----------------------------------------------------------------------------

/**
* Clear the image to the specified RGBA colour. The (r,g,b,a) values range
* from (0..1), values outside this range are clamped. If the image is
* greyscale, the RGBA colour is converted to an appropriate grey level
* first. If the image does not have an alpha component, the (a) parameter
* will be discarded. See also Clear4b.
*/
bool Image::Clear4f(float r, float g, float b, float a) {
	return Clear4b(
		(BYTE)(255.0f*r + 0.5f),
		(BYTE)(255.0f*g + 0.5f),
		(BYTE)(255.0f*b + 0.5f),
		(BYTE)(255.0f*a + 0.5f)
	);
}

//-----------------------------------------------------------------------------

/**
* Set image format. If the image already exists in a different format,
* this will attempt to convert the image to the requested format. If
* an exact conversion is not possible, some information may be lost.
* For example, in converting a colour to greyscale image, you will
* obviously not be able to recover the colour later.
*/
bool Image::SetFormat(Format fmt) {
	// check for trivial cases: eg. RGB->RGB
	if (fmt == GetFormat()) return true;

	// JWW 27/10/03 added ALPHA format
	// 7 supported formats:
	// RGB 	  - RGB:  8-bit Red,Green,Blue
	// RGBA   - RGBA: 8-bit Red,Green,Blue,Alpha
	// BGR 	  - BGR:  8-bit Blue,Green,Red
	// BGRA   - BGR Alpha: 8-bit Red,Green,Blue
	// LUM 	  - Luminance: 8-bit greyscale
	// LUMALP - Luminance Alpha: 8-bit greyscale, 8-bit alpha
	// ALPHA  - Alpha: 8-bit alpha
	// 42 possible conversions (7x7 total - 7 trivial = 42)

	// temporary image for output, with requested format and no padding
	Image temp;
	if ( !temp.Create(Width(),Height(),fmt,0) ) return false;

	/**
	 * Inline functions to read/write particular formats, and
	 * keep track of src/dst pointers during the process.
	 */
	struct tagFun {
	private:
		BYTE r,g,b,a,l;
		BYTE *src,*dst;
	public:
		tagFun() {
			reset(0,0);
		}

		// reset before use: specify src/dst pointers
		void reset(BYTE *s, BYTE *d) {
			r=0; g=0; b=0;			// Red, Green, Blue
			a=Image_DefaultAlpha;	// Alpha
			l=0;					// Luminance
			// Source/Destination Pointers
			src=s;
			dst=d;
		}

		// these inlines get (r,g,b), luma and/or alpha from src
		void getRGB()    { r=src[0]; g=src[1]; b=src[2]; src+=3; }
		void getBGR()    { b=src[0]; g=src[1]; r=src[2]; src+=3; }
		void getRGBA()   { r=src[0]; g=src[1]; b=src[2]; a=src[3]; src+=4; }
		void getBGRA()   { b=src[0]; g=src[1]; r=src[2]; a=src[3]; src+=4; }
		void getLUM()    { l=src[0]; src++; }
		void getLUMALP() { l=src[0]; a=src[1]; src+=2; }
		void getALPHA()  { a=src[0]; src++; }	// JWW 27/10/03

		// these inlines convert between (r,g,b) and luma
		void conNONE()	   {}	// nop - when no conversion is needed
		void conRGBtoLUM() { l=ImageEx::RGB2LUM(r,g,b); }
		void conLUMtoRGB() { r=l; g=l; b=l; }
		void conRGBtoALP() { a=ImageEx::RGB2LUM(r,g,b); }	// JWW 27/10/03
		void conLUMtoALP() { a=l; }							// JWW 27/10/03
		void conALPtoRGB() { r=a; g=a; b=a; }				// JWW 27/10/03
		void conALPtoLUM() { l=a; }							// JWW 27/10/03

		// these inlines put (r,g,b), luma and/or alpha to dst
		void putRGB()	 { dst[0]=r; dst[1]=g; dst[2]=b; dst+=3; }
		void putBGR()	 { dst[0]=b; dst[1]=g; dst[2]=r; dst+=3; }
		void putRGBA()	 { dst[0]=r; dst[1]=g; dst[2]=b; dst[3]=a; dst+=4; }
		void putBGRA()	 { dst[0]=b; dst[1]=g; dst[2]=r; dst[3]=a; dst+=4; }
		void putLUM()	 { dst[0]=l; dst++; }
		void putLUMALP() { dst[0]=l; dst[1]=a; dst+=2; }
		void putALPHA()  { dst[0]=a; dst++; }

		// called for unsupported conversions: should return false
		bool Unsupported() {
			dbg_printf("Image::SetFormat - unsupported conversion");
			return false;
		}
	} fun;	// used by ConvertImage() macro below

	// builds inline code to convert an image from one format to another
	// used like this:
	//	  ConvertImage(RGB, NONE, BGR)
	// translates into calls of inline methods on 'fun' struct
	#define ConvertImage( g, c, p ) do {						\
		for (long y=0; y<Height(); y++) {						\
			fun.reset( GetRowData(y), temp.GetRowData(y) );		\
			for (long x=0; x<Width(); x++) {					\
				fun.get##g(); fun.con##c(); fun.put##p();		\
			}													\
		}														\
		} while (0)
	// JWW 13/11/03 removed:
	//  dbg_printf("ConvertImage(" #g ", " #c ", " #p ")\n");

	// source and destination formats
	const Format
		 srcFmt = GetFormat(),
		&dstFmt = fmt;

	// convert the image format: inline all 30 possible cases
	switch (srcFmt) {
	case RGB: switch (dstFmt) {
		case BGR:	ConvertImage( RGB, NONE, BGR		); break;
		case RGBA:	ConvertImage( RGB, NONE, RGBA		); break;
		case BGRA:	ConvertImage( RGB, NONE, BGRA		); break;
		case LUM:	ConvertImage( RGB, RGBtoLUM, LUM	); break;
		case LUMALP:ConvertImage( RGB, RGBtoLUM, LUMALP ); break;
		case ALPHA: ConvertImage( RGB, RGBtoALP, ALPHA  ); break;	// JWW 27/10/03
		default: return fun.Unsupported();
		} break;
	case BGR: switch (dstFmt) {
		case RGB:	ConvertImage( BGR, NONE, RGB		); break;
		case RGBA:	ConvertImage( BGR, NONE, RGBA		); break;
		case BGRA:	ConvertImage( BGR, NONE, BGRA		); break;
		case LUM:	ConvertImage( BGR, RGBtoLUM, LUM	); break;
		case LUMALP:ConvertImage( BGR, RGBtoLUM, LUMALP	); break;
		case ALPHA: ConvertImage( BGR, RGBtoALP, ALPHA  ); break;	// JWW 27/10/03
		default: return fun.Unsupported();
		} break;
	case RGBA: switch (dstFmt) {
		case RGB:	ConvertImage( RGBA, NONE, RGB		); break;
		case BGR:	ConvertImage( RGBA, NONE, BGR		); break;
		case BGRA:	ConvertImage( RGBA, NONE, BGRA		); break;
		case LUM:	ConvertImage( RGBA, RGBtoLUM, LUM	); break;
		case LUMALP:ConvertImage( RGBA, RGBtoLUM, LUMALP); break;
		case ALPHA: ConvertImage( RGBA, NONE, ALPHA     ); break;	// JWW 27/10/03
		default: return fun.Unsupported();
		} break;
	case BGRA: switch (dstFmt) {
		case RGB:	ConvertImage( BGRA, NONE, RGB		); break;
		case BGR:	ConvertImage( BGRA, NONE, BGR		); break;
		case RGBA:	ConvertImage( BGRA, NONE, RGBA		); break;
		case LUM:	ConvertImage( BGRA, RGBtoLUM, LUM	); break;
		case LUMALP:ConvertImage( BGRA, RGBtoLUM, LUMALP); break;
		case ALPHA:	ConvertImage( BGRA, NONE, ALPHA     ); break;	// JWW 27/10/03
		default: return fun.Unsupported();
		} break;
	case LUM: switch (dstFmt) {
		case RGB:	ConvertImage( LUM, LUMtoRGB, RGB	); break;
		case BGR:	ConvertImage( LUM, LUMtoRGB, BGR	); break;
		case RGBA:	ConvertImage( LUM, LUMtoRGB, RGBA	); break;
		case BGRA:	ConvertImage( LUM, LUMtoRGB, BGRA	); break;
		case LUMALP:ConvertImage( LUM, NONE, LUMALP		); break;
		case ALPHA: ConvertImage( LUM, LUMtoALP, ALPHA  ); break;	// JWW 27/10/03
		default: return fun.Unsupported();
		} break;
	case LUMALP: switch (dstFmt) {
		case RGB:	ConvertImage( LUMALP, LUMtoRGB, RGB ); break;
		case BGR:	ConvertImage( LUMALP, LUMtoRGB, BGR ); break;
		case RGBA:	ConvertImage( LUMALP, LUMtoRGB, RGBA); break;
		case BGRA:	ConvertImage( LUMALP, LUMtoRGB, BGRA); break;
		case LUM:	ConvertImage( LUMALP, NONE, LUM		); break;
		case ALPHA: ConvertImage( LUMALP, NONE, ALPHA   ); break;	// JWW 27/10/03
		default: return fun.Unsupported();
		} break;
	case ALPHA: switch (dstFmt) {	// JWW 27/10/03 this whole case added
		case RGB:	ConvertImage( ALPHA, ALPtoRGB, RGB ); break;
		case BGR:	ConvertImage( ALPHA, ALPtoRGB, BGR ); break;
		case RGBA:	ConvertImage( ALPHA, ALPtoRGB, RGBA); break;
		case BGRA:	ConvertImage( ALPHA, ALPtoRGB, BGRA); break;
		case LUM:	ConvertImage( ALPHA, ALPtoLUM, LUM ); break;
		case LUMALP:ConvertImage( ALPHA, NONE, LUMALP  ); break;
		default: return fun.Unsupported();
		} break;
	default: return fun.Unsupported();
	}

	// undefine macro used above
	#undef ConvertImage

	// copy temp image into this image
	// PERF: redundant copy; use code below if you want to avoid copy
	*this = temp;

	//// hijack temp image, destroying it in the process
	//delete extra;						// delete our context
	//extra = temp.extra;				// steal temp context
	//extra->m_parent = this;			// adopt it
	//temp.extra = new ImageEx(&temp);	// give temp an empty context

	return true;
}//SetFormat

//-----------------------------------------------------------------------------

/**
* Get the image format.
*/
Image::Format Image::GetFormat() const {
	return extra->m_format;
}

//-----------------------------------------------------------------------------

/**
* Image width (pixels)
*/
long Image::Width() const {
	return extra->Valid()?extra->m_nWidth:0;
}

//-----------------------------------------------------------------------------

/**
* Image height (pixels)
*/
long Image::Height() const {
	return extra->Valid()?extra->m_nHeight:0;
}

//-----------------------------------------------------------------------------

/**
* Image aspect ratio (width/height). Returns 1.0 if the height is zero.
*/
float Image::Aspect() const {
	long h = Height();
	return h?(float)Width()/(float)h:1.0f;
}

//-----------------------------------------------------------------------------

/**
 * Rescale the image.
 */
int Image::gluScaleImage(long width, long height) {
	int result = GLU_INVALID_VALUE;

	// check for stupid dimensions
	if ( (width<=0) || (height<=0) ) return result;

	// check for trivial case
	if ( (width==Width()) && (height==Height()) ) return 0;

	// make a temporary copy of the image
	Image src(*this);
	if (src.Size() != Size()) return result;

	// pack the source image
	if (!src.PackImage()) return result;

	// find a suitable GL compatible pixel format
	GLenum fmt;
	switch (src.GetFormat()) {
	case RGB:
	case BGR:
		fmt = GL_RGB;
		break;
	case RGBA:
	case BGRA:
		fmt = GL_RGBA;
		break;
	case LUM:
		fmt = GL_LUMINANCE;
		break;
	case LUMALP:
		fmt = GL_LUMINANCE_ALPHA;
		break;
	case ALPHA:		// JWW 27/10/03
		//fmt = GL_ALPHA;
		fmt = GL_LUMINANCE;	// JWW 04/11/03 treat alpha as luma for scaling
		break;
	default:
		return result;
	}

	// resize ourselves to the desired output size, and same format
	if (!Create(width,height,src.GetFormat(),0)) {
		// failed, try and restore from temporary, and return false
		*this = src;
		return result;
	}

	// safety checks
	if ((Width() != width)   ||
		(Height() != height) ||
		(GetData() == NULL)  ||
		(src.GetData() == NULL)
	) {
		*this = src;
		return result;
	}

#ifdef __WIN32__
	if (wglGetCurrentContext()==NULL) {
		dbg_printf("Image::Rescale() called out of GL context\n");
	} 
#endif

	// save old unpack alignment
	GLint unpackAlign;
	glGetIntegerv(GL_UNPACK_ALIGNMENT, &unpackAlign);
	// if needed, set unpack alignment to byte
	if (unpackAlign!=1) glPixelStorei(GL_UNPACK_ALIGNMENT,1);

	// call GLU to scale the image
	result = ::gluScaleImage(
		fmt,						// data format: eg. GL_RGB
		src.Width(), src.Height(),	// source (width,height)
		GL_UNSIGNED_BYTE,			// source data type
		src.GetData(),				// source data pointer
		Width(), Height(),			// output (width,height)
		GL_UNSIGNED_BYTE,			// output data type
		GetData()					// output data pointer
	);
	if (result != 0) {
		// failed, try and restore from temporary, and return false
		*this = src;
		// restore unpack alignment
		if (unpackAlign!=1) glPixelStorei(GL_UNPACK_ALIGNMENT,unpackAlign);
		return result;
	}

	// restore unpack alignment
	if (unpackAlign!=1) glPixelStorei(GL_UNPACK_ALIGNMENT,unpackAlign);

	// src is released automatically on destruction
	return 0;
}//gluScaleImage

//-----------------------------------------------------------------------------

/**
 * Rescale to nearest power of 2 size on each axis. If called from an
 * OpenGL context, this is automatically restricted to the maximum
 * texture size (ie. nearest power of 2 <= max.size).
 */
bool Image::ScaleImagePow2() {
	// current size of image
	long
		nWidth  = Width(),
		nHeight = Height();

	// get maximum OpenGL texture size, or zero
	GLint nMaxSize=0;
#ifdef __WIN32__
	if (wglGetCurrentContext())
#endif
		glGetIntegerv(GL_MAX_TEXTURE_SIZE, &nMaxSize);

	// closest power of two, or maximum size
	if ( (nMaxSize==0) || (nWidth < nMaxSize) )
		nWidth = 1<<(int)floor((log((double)nWidth)/log(2.0f)) + 0.5f);
	else
		nWidth = nMaxSize;

	// closest power of two, or maximum size
	if ( (nMaxSize==0) || (nHeight < nMaxSize) )
		nHeight = 1<<(int)floor((log((double)nWidth)/log(2.0f)) + 0.5f);
	else
		nHeight = nMaxSize;

	// rescale image
	return (gluScaleImage(nWidth, nHeight) == 0);
}//ScaleImagePow2

//-----------------------------------------------------------------------------
	
/**
 * Issues a call to gluBuild1DMipmaps() with the current image. The
 * parameters are automatically chosen, according to the current image
 * format. For this to work, the call must be made from a valid OpenGL
 * context. Returns the gluBuild1DMipmaps() result code, where 0
 * indicates success.
 */
int Image::gluBuild1DMipmaps() {
	int result = GLU_INVALID_VALUE;
	BYTE *pData = GetData();
	if (!pData) return result;

	// temporary image (used only in case of padding)
	Image tmp;

	// image format (may be changed later)
	Format fmt = GetFormat();

	// image width and height
	long
		nWidth  = Width(),
		nHeight = Height();

	// must be at least 1-pixel high
	if (nHeight < 1) return false;

	bool s_bHasBGRA = extra->HasBGRA();

	// not clear if gluBuild1DMipmaps is affected by pixel store
	// settings (doesn't seem to be documented if it is)
	// if the image is row padded or we can't support BGR/BGRA,
	// we build a new temporary image without padding in RGB form
	if ( (GetRowPad()!=0) || (!s_bHasBGRA) ) {
		// attempt to allocate temporary image with no padding
		if (!tmp.Create(nWidth, 1, GetFormat(), 0))
			return result;
		// copy image data
		memcpy(
			tmp.GetData(),		// destination
			GetData(),			// source
			tmp.GetRowSize()	// copy image data only
		);

		// if we don't support BGR/BGRA we must
		// translate those formats to RGB/RGBA
		if (!s_bHasBGRA) {
			switch (tmp.GetFormat()) {
			case BGR:
				if (!tmp.SetFormat(RGB)) return result;
				break;
			case BGRA:
				if (!tmp.SetFormat(RGBA)) return result;
				break;
			default:
				break;
			}
		}

		// use temporary image pointer when building mipmaps
		pData = tmp.GetData();
		fmt   = tmp.GetFormat();
	}

	// JWW 27/10/03 check more unpack settings, in case someone alters them
	// (previous version only altered unpack alignment)
	// save current settings (doesn't seem possible to push them)
	// we ignore GL_UNPACK_LSB_FIRST since it only affects bitmap data
	GLint
		unpackSwapBytes, unpackRowLength, unpackSkipPixels,
		unpackSkipRows, unpackAlign;
	glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unpackSwapBytes);
	glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unpackRowLength);
	glGetIntegerv(GL_UNPACK_SKIP_PIXELS,&unpackSkipPixels);
	glGetIntegerv(GL_UNPACK_SKIP_ROWS,  &unpackSkipRows);
	glGetIntegerv(GL_UNPACK_ALIGNMENT,  &unpackAlign);

	// if needed, change any settings that aren't appropriate
	if (unpackSwapBytes != GL_FALSE)
		glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  0);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   0);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   1);

	switch ( fmt ) {
	case RGB:
		result = ::gluBuild1DMipmaps(
			GL_TEXTURE_1D, 3, nWidth,
			GL_RGB, GL_UNSIGNED_BYTE, pData
		);
		break;
	case RGBA:
		result = ::gluBuild1DMipmaps(
			GL_TEXTURE_1D, 4, nWidth,
			GL_RGBA, GL_UNSIGNED_BYTE, pData
		);
		break;
	case BGR:
		result = ::gluBuild1DMipmaps(
			GL_TEXTURE_1D, 3, nWidth,
			GL_BGR_EXT, GL_UNSIGNED_BYTE, pData
		);
		break;
	case BGRA:
		result = ::gluBuild1DMipmaps(
			GL_TEXTURE_1D, 4, nWidth,
			GL_BGRA_EXT, GL_UNSIGNED_BYTE, pData
		);
		break;
	case LUM:
		result = ::gluBuild1DMipmaps(
			GL_TEXTURE_1D, 1, nWidth,
			GL_LUMINANCE, GL_UNSIGNED_BYTE, pData
		);
		break;
	case LUMALP:
		result = ::gluBuild1DMipmaps(
			GL_TEXTURE_1D, 2, nWidth,
			GL_LUMINANCE_ALPHA, GL_UNSIGNED_BYTE, pData
		);
		break;
	case ALPHA:	// JWW 27/10/03 added
		result = ::gluBuild1DMipmaps(
			GL_TEXTURE_1D, GL_ALPHA, nWidth,
			GL_ALPHA, GL_UNSIGNED_BYTE, pData
		);
		// JWW 04/11/03 changed components from 1 to GL_ALPHA
		break;
	}

	// JWW 27/10/03 restore state if we altered anything
	// (previous version only modified unpack alignment)
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  unpackRowLength);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, unpackSkipPixels);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   unpackSkipRows);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   unpackAlign);

	return result;
}//gluBuild1DMipmaps

//-----------------------------------------------------------------------------

int Image::gluBuild2DMipmaps() {
	int result = GLU_INVALID_VALUE;
	BYTE *pData = GetData();
	if (!pData) return result;

	// temporary image (used only in case of padding)
	Image tmp;

	// image format (may be changed later)
	Format fmt = GetFormat();

	// image width and height
	long
		nWidth  = Width(),
		nHeight = Height();

	bool s_bHasBGRA = extra->HasBGRA();

	// not clear if gluBuild2DMipmaps is affected by pixel store
	// settings (doesn't seem to be documented if it is)
	// if the image is row padded or we can't support BGR/BGRA,
	// we build a new temporary image without padding in RGB form
	if ( (GetRowPad()!=0) || (!s_bHasBGRA) ) {
		// attempt to allocate temporary image with no padding
		if (!tmp.Create(nWidth, nHeight, GetFormat(), 0))
			return result;
		// copy image data
		for (long n=0; n<nHeight; n++)
			memcpy(
				tmp.GetRowData(n),	// destination
				GetRowData(n),		// source
				tmp.GetRowSize()	// copy image data only
			);

		// if we don't support BGR/BGRA we must
		// translate those formats to RGB/RGBA
		if (!s_bHasBGRA) {
			switch (tmp.GetFormat()) {
			case BGR:
				if (!tmp.SetFormat(RGB)) return result;
				break;
			case BGRA:
				if (!tmp.SetFormat(RGBA)) return result;
				break;
			default:
				break;
			}
		}

		// use temporary image pointer when building mipmaps
		pData = tmp.GetData();
		fmt   = tmp.GetFormat();
	}

	// JWW 27/10/03 check more unpack settings, in case someone alters them
	// (previous version only altered unpack alignment)
	// save current settings (doesn't seem possible to push them)
	// we ignore GL_UNPACK_LSB_FIRST since it only affects bitmap data
	GLint
		unpackSwapBytes, unpackRowLength, unpackSkipPixels,
		unpackSkipRows, unpackAlign;
	glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unpackSwapBytes);
	glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unpackRowLength);
	glGetIntegerv(GL_UNPACK_SKIP_PIXELS,&unpackSkipPixels);
	glGetIntegerv(GL_UNPACK_SKIP_ROWS,  &unpackSkipRows);
	glGetIntegerv(GL_UNPACK_ALIGNMENT,  &unpackAlign);

	// if needed, change any settings that aren't appropriate
	if (unpackSwapBytes != GL_FALSE)
		glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  0);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   0);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   1);

	switch ( fmt ) {
	case RGB:
		result = ::gluBuild2DMipmaps(
			GL_TEXTURE_2D, 3, nWidth, nHeight,
			GL_RGB, GL_UNSIGNED_BYTE, pData
		);
		break;
	case RGBA:
		result = ::gluBuild2DMipmaps(
			GL_TEXTURE_2D, 4, nWidth, nHeight,
			GL_RGBA, GL_UNSIGNED_BYTE, pData
		);
		break;
	case BGR:
		result = ::gluBuild2DMipmaps(
			GL_TEXTURE_2D, 3, nWidth, nHeight,
			GL_BGR_EXT, GL_UNSIGNED_BYTE, pData
		);
		break;
	case BGRA:
		result = ::gluBuild2DMipmaps(
			GL_TEXTURE_2D, 4, nWidth, nHeight,
			GL_BGRA_EXT, GL_UNSIGNED_BYTE, pData
		);
		break;
	case LUM:
		result = ::gluBuild2DMipmaps(
			GL_TEXTURE_2D, 1, nWidth, nHeight,
			GL_LUMINANCE, GL_UNSIGNED_BYTE, pData
		);
		break;
	case LUMALP:
		result = ::gluBuild2DMipmaps(
			GL_TEXTURE_2D, 2, nWidth, nHeight,
			GL_LUMINANCE_ALPHA, GL_UNSIGNED_BYTE, pData
		);
		break;
	case ALPHA:	// JWW 27/10/03 added
		result = ::gluBuild2DMipmaps(
			GL_TEXTURE_2D, GL_ALPHA, nWidth, nHeight,
			GL_ALPHA, GL_UNSIGNED_BYTE, pData
		);
		// JWW 04/11/03 changed components from 1 to GL_ALPHA
		break;
	}

	// JWW 27/10/03 restore state if we altered anything
	// (previous version only modified unpack alignment)
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  unpackRowLength);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, unpackSkipPixels);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   unpackSkipRows);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   unpackAlign);

	return result;
}//gluBuild2DMipmaps

//-----------------------------------------------------------------------------

/**
 * Issues a call to glTexImage1D() with the current image. The
 * parameters are automatically chosen, according to the current image
 * format. For this to work, the call must be made from a valid OpenGL
 * context. Returns true for success, false in case of failure.
 * The (level) parameter specifies the level-of-detail number. Level 0
 * is the base image level. Level n is the nth mipmap reduction image.
 * Note: glTexImage1D() normally requires that the texture has a width
 * that is a power of two.
 */
bool Image::glTexImage1D(int level) {
	BYTE *pData = GetData();
	if (!pData) return false;

	// temporary image (used only in case of padding)
	Image tmp;

	// image format (may be changed later)
	Format fmt = GetFormat();

	// image width and height
	long
		nWidth  = Width(),
		nHeight = Height();

	// must be at least 1-pixel high
	if (nHeight < 1) return false;

	bool s_bHasBGRA = extra->HasBGRA();

	// if the image is row padded or we can't support BGR/BGRA,
	// we build a new temporary image without padding in RGB form
	if ( (GetRowPad()!=0) || (!s_bHasBGRA) ) {
		// attempt to allocate temporary image with no padding
		// note: we only create a 1-pixel high image, even if input is taller
		if (!tmp.Create(nWidth, 1, GetFormat(), 0)) return false;
		// copy first row of image
		memcpy(
			tmp.GetData(),		// destination
			GetData(),			// source
			tmp.GetRowSize()	// copy image data only
		);

		// if we don't support BGR/BGRA we must
		// translate those formats to RGB/RGBA
		if (!s_bHasBGRA) {
			switch (tmp.GetFormat()) {
			case BGR:
				if (!tmp.SetFormat(RGB)) return false;
				break;
			case BGRA:
				if (!tmp.SetFormat(RGBA)) return false;
				break;
			default:
				break;
			}
		}

		// use temporary image pointer when building texture
		pData = tmp.GetData();
		fmt   = tmp.GetFormat();
	}

	// JWW 27/10/03 check more unpack settings, in case someone alters them
	// (previous version only altered unpack alignment)
	// save current settings (doesn't seem possible to push them)
	// we ignore GL_UNPACK_LSB_FIRST since it only affects bitmap data
	GLint
		unpackSwapBytes, unpackRowLength, unpackSkipPixels,
		unpackSkipRows, unpackAlign;
	glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unpackSwapBytes);
	glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unpackRowLength);
	glGetIntegerv(GL_UNPACK_SKIP_PIXELS,&unpackSkipPixels);
	glGetIntegerv(GL_UNPACK_SKIP_ROWS,  &unpackSkipRows);
	glGetIntegerv(GL_UNPACK_ALIGNMENT,  &unpackAlign);

	// if needed, change any settings that aren't appropriate
	if (unpackSwapBytes != GL_FALSE)
		glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  0);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   0);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   1);

	// clear GL error code
	glGetError();
	switch ( fmt ) {
	case RGB:
		::glTexImage1D(
			GL_TEXTURE_1D, level, 3, nWidth, 0,
			GL_RGB, GL_UNSIGNED_BYTE, pData
		);
		break;
	case RGBA:
		::glTexImage1D(
			GL_TEXTURE_1D, level, 4, nWidth, 0,
			GL_RGBA, GL_UNSIGNED_BYTE, pData
		);
		break;
	case BGR:
		::glTexImage1D(
			GL_TEXTURE_1D, level, 3, nWidth, 0,
			GL_BGR_EXT, GL_UNSIGNED_BYTE, pData
		);
		break;
	case BGRA:
		::glTexImage1D(
			GL_TEXTURE_1D, level, 4, nWidth, 0,
			GL_BGRA_EXT, GL_UNSIGNED_BYTE, pData
		);
		break;
	case LUM:
		::glTexImage1D(
			GL_TEXTURE_1D, level, 1, nWidth, 0,
			GL_LUMINANCE, GL_UNSIGNED_BYTE, pData
		);
		break;
	case LUMALP:
		::glTexImage1D(
			GL_TEXTURE_1D, level, 2, nWidth, 0,
			GL_LUMINANCE_ALPHA, GL_UNSIGNED_BYTE, pData
		);
		break;
	case ALPHA:
		::glTexImage1D(
			GL_TEXTURE_1D, level, GL_ALPHA, nWidth, 0,
			GL_ALPHA, GL_UNSIGNED_BYTE, pData
		);
	}
	// if we made a glTexImage1D call, check the error state after
	GLenum err = glGetError();

	// restore state if we altered anything
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  unpackRowLength);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, unpackSkipPixels);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   unpackSkipRows);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   unpackAlign);

	return (err == GL_NO_ERROR);
}//glTexImage1D

//-----------------------------------------------------------------------------

/**
 * Issues a call to glTexImage2D() with the current image. The
 * parameters are automatically chosen, according to the current image
 * format. For this to work, the call must be made from a valid OpenGL
 * context. Returns true for success, false in case of failure.
 * The (level) parameter specifies the level-of-detail number. Level 0
 * is the base image level. Level n is the nth mipmap reduction image.
 */
bool Image::glTexImage2D(int level) {
	BYTE *pData = GetData();
	if (!pData) return false;

	// temporary image (used only in case of padding)
	Image tmp;

	// image format (may be changed later)
	Format fmt = GetFormat();

	// image width and height
	long
		nWidth  = Width(),
		nHeight = Height();

	bool s_bHasBGRA = extra->HasBGRA();

	// if the image is row padded or we can't support BGR/BGRA,
	// we build a new temporary image without padding in RGB form
	if ( (GetRowPad()!=0) || (!s_bHasBGRA) ) {
		// attempt to allocate temporary image with no padding
		if (!tmp.Create(nWidth, nHeight, GetFormat(), 0))
			return false;
		// copy image data
		for (long n=0; n<nHeight; n++)
			memcpy(
				tmp.GetRowData(n),	// destination
				GetRowData(n),		// source
				tmp.GetRowSize()	// copy image data only
			);

		// if we don't support BGR/BGRA we must
		// translate those formats to RGB/RGBA
		if (!s_bHasBGRA) {
			switch (tmp.GetFormat()) {
			case BGR:
				if (!tmp.SetFormat(RGB)) return false;
				break;
			case BGRA:
				if (!tmp.SetFormat(RGBA)) return false;
				break;
			default:
				break;
			}
		}

		// use temporary image pointer when building texture
		pData = tmp.GetData();
		fmt   = tmp.GetFormat();
	}

	// JWW 27/10/03 check more unpack settings, in case someone alters them
	// (previous version only altered unpack alignment)
	// save current settings (doesn't seem possible to push them)
	// we ignore GL_UNPACK_LSB_FIRST since it only affects bitmap data
	GLint
		unpackSwapBytes, unpackRowLength, unpackSkipPixels,
		unpackSkipRows, unpackAlign;
	glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unpackSwapBytes);
	glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unpackRowLength);
	glGetIntegerv(GL_UNPACK_SKIP_PIXELS,&unpackSkipPixels);
	glGetIntegerv(GL_UNPACK_SKIP_ROWS,  &unpackSkipRows);
	glGetIntegerv(GL_UNPACK_ALIGNMENT,  &unpackAlign);

	// if needed, change any settings that aren't appropriate
	if (unpackSwapBytes != GL_FALSE)
		glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  0);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   0);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   1);

	// clear GL error code
	glGetError();
	switch ( fmt ) {
	case RGB:
		::glTexImage2D(
			GL_TEXTURE_2D, level, 3, nWidth, nHeight, 0,
			GL_RGB, GL_UNSIGNED_BYTE, pData
		);
		break;
	case RGBA:
		::glTexImage2D(
			GL_TEXTURE_2D, level, 4, nWidth, nHeight, 0,
			GL_RGBA, GL_UNSIGNED_BYTE, pData
		);
		break;
	case BGR:
		::glTexImage2D(
			GL_TEXTURE_2D, level, 3, nWidth, nHeight, 0,
			GL_BGR_EXT, GL_UNSIGNED_BYTE, pData
		);
		break;
	case BGRA:
		::glTexImage2D(
			GL_TEXTURE_2D, level, 4, nWidth, nHeight, 0,
			GL_BGRA_EXT, GL_UNSIGNED_BYTE, pData
		);
		break;
	case LUM:
		::glTexImage2D(
			GL_TEXTURE_2D, level, 1, nWidth, nHeight, 0,
			GL_LUMINANCE, GL_UNSIGNED_BYTE, pData
		);
		break;
	case LUMALP:
		::glTexImage2D(
			GL_TEXTURE_2D, level, 2, nWidth, nHeight, 0,
			GL_LUMINANCE_ALPHA, GL_UNSIGNED_BYTE, pData
		);
		break;
	case ALPHA:	// JWW 27/10/03 added
		::glTexImage2D(
			GL_TEXTURE_2D, level, GL_ALPHA, nWidth, nHeight, 0,
			GL_ALPHA, GL_UNSIGNED_BYTE, pData
		);
		// JWW 04/11/03 changed components from 1 to GL_ALPHA
	}
	// if we made a glTexImage2D call, check the error state after
	GLenum err = glGetError();

	// JWW 27/10/03 restore state if we altered anything
	// (previous version only modified unpack alignment)
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  unpackRowLength);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, unpackSkipPixels);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   unpackSkipRows);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   unpackAlign);

	return (err == GL_NO_ERROR);
}//glTexImage2D

//-----------------------------------------------------------------------------

/**
 * Issues a call to glDrawPixels() with the current image. The parameters
 * are automatically chosen, according to the current image format. The
 * call must be made from a valid OpenGL context. Returns true for success,
 * false in case of failure.
 */
bool Image::glDrawPixels() {
	BYTE *pData = GetData();
	if (!pData) return false;

	// temporary image (used only in case of padding)
	Image tmp;

	// image format (may be changed later)
	Format fmt = GetFormat();

	// image width and height
	long
		nWidth  = Width(),
		nHeight = Height();

	bool s_bHasBGRA = extra->HasBGRA();

	// if the image is row padded or we can't support BGR/BGRA,
	// we build a new temporary image without padding in RGB form
	if ( (GetRowPad()!=0) || (!s_bHasBGRA) ) {
		// attempt to allocate temporary image with no padding
		if (!tmp.Create(nWidth, nHeight, GetFormat(), 0))
			return false;
		// copy image data
		for (long n=0; n<nHeight; n++)
			memcpy(
				tmp.GetRowData(n),	// destination
				GetRowData(n),		// source
				tmp.GetRowSize()	// copy image data only
			);

		// if we don't support BGR/BGRA we must
		// translate those formats to RGB/RGBA
		if (!s_bHasBGRA) {
			switch (tmp.GetFormat()) {
			case BGR:
				if (!tmp.SetFormat(RGB)) return false;
				break;
			case BGRA:
				if (!tmp.SetFormat(RGBA)) return false;
				break;
			default:
				break;
			}
		}

		// use temporary image pointer
		pData = tmp.GetData();
		fmt   = tmp.GetFormat();
	}

	// JWW 27/10/03 check more unpack settings, in case someone alters them
	// (previous version only altered unpack alignment)
	// save current settings (doesn't seem possible to push them)
	// we ignore GL_UNPACK_LSB_FIRST since it only affects bitmap data
	GLint
		unpackSwapBytes, unpackRowLength, unpackSkipPixels,
		unpackSkipRows, unpackAlign;
	glGetIntegerv(GL_UNPACK_SWAP_BYTES, &unpackSwapBytes);
	glGetIntegerv(GL_UNPACK_ROW_LENGTH, &unpackRowLength);
	glGetIntegerv(GL_UNPACK_SKIP_PIXELS,&unpackSkipPixels);
	glGetIntegerv(GL_UNPACK_SKIP_ROWS,  &unpackSkipRows);
	glGetIntegerv(GL_UNPACK_ALIGNMENT,  &unpackAlign);

	// if needed, change any settings that aren't appropriate
	if (unpackSwapBytes != GL_FALSE)
		glPixelStorei(GL_UNPACK_SWAP_BYTES, GL_FALSE);
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  0);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   0);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   1);

	// clear GL error code
	glGetError();
	switch ( fmt ) {
	case RGB:
		::glDrawPixels(nWidth, nHeight, GL_RGB, GL_UNSIGNED_BYTE, pData);
		break;
	case RGBA:
		::glDrawPixels(nWidth, nHeight, GL_RGBA, GL_UNSIGNED_BYTE, pData);
		break;
	case BGR:
		::glDrawPixels(nWidth, nHeight, GL_BGR_EXT, GL_UNSIGNED_BYTE, pData);
		break;
	case BGRA:
		::glDrawPixels(nWidth, nHeight, GL_BGRA_EXT, GL_UNSIGNED_BYTE, pData);
		break;
	case LUM:
		::glDrawPixels(nWidth, nHeight, GL_LUMINANCE, GL_UNSIGNED_BYTE, pData);
		break;
	case LUMALP:
		::glDrawPixels(nWidth, nHeight, GL_LUMINANCE_ALPHA, GL_UNSIGNED_BYTE, pData);
		break;
	case ALPHA:	// JWW 27/10/03 added
		::glDrawPixels(nWidth, nHeight, GL_ALPHA, GL_UNSIGNED_BYTE, pData);
		break;
	default:
		return false;
	}
	// if we made a glTexImage2D call, check the error state after
	GLenum err = glGetError();

	// JWW 27/10/03 restore state if we altered anything
	// (previous version only modified unpack alignment)
	if (unpackRowLength  != 0) glPixelStorei(GL_UNPACK_ROW_LENGTH,  unpackRowLength);
	if (unpackSkipPixels != 0) glPixelStorei(GL_UNPACK_SKIP_PIXELS, unpackSkipPixels);
	if (unpackSkipRows   != 0) glPixelStorei(GL_UNPACK_SKIP_ROWS,   unpackSkipRows);
	if (unpackAlign      != 1) glPixelStorei(GL_UNPACK_ALIGNMENT,   unpackAlign);

	return (err == GL_NO_ERROR);
}//glDrawPixels

//-----------------------------------------------------------------------------

/**
* Get image size (bytes)
*/
long Image::Size() const {
	return extra->Valid()?extra->m_nSize:0;
}

//-----------------------------------------------------------------------------

/**
* This function packs the image tightly, removing any padding at the end
* of each image row. It returns true for success, false on failure.
*/
bool Image::PackImage() {
	return SetRowPad(0);
}

//-----------------------------------------------------------------------------

/**
* Set the image row size in bytes. This can be used to add padding at the
* end of each image row. If you attempt to set the row size to a value less
* than the storage size of an image row, the function will fail and return
* false to indicate an error.
*/
bool Image::SetRowSize(long size) {
	// calculate padding amount: may be negative if size < storage size,
	// in which case SetRowPad() will return false
	return SetRowPad( size - extra->m_nRowSize );
}

//-----------------------------------------------------------------------------

/**
* Get the image row size in bytes. This may include padding at the end of
* each row of pixels.
*/
long Image::GetRowSize() const {
	return extra->m_nRowTotal;
}

//-----------------------------------------------------------------------------

/**
* Get the pixel size of the current pixel format, which is the number of
* bytes used to store each pixel. This will depend on the current image
* format.
*/
long Image::GetPixelSize() const {
	return ImageEx::GetPixelSize( GetFormat() );
}

//-----------------------------------------------------------------------------

/**
* Get the pixel size for a given pixel format, which is the number of bytes
* used to store each pixel. This need not be the same as the current pixel
* format.
*/
long ImageEx::GetPixelSize(Image::Format fmt) {
	switch (fmt) {
	case Image::RGB:
	case Image::BGR:
		return 3;
	case Image::RGBA:
	case Image::BGRA:
		return 4;
	case Image::LUM:
	case Image::ALPHA:	// JWW 27/10/03 added
		return 1;
	case Image::LUMALP:
		return 2;
	default:
		return 0;
	}
}//Image

//-----------------------------------------------------------------------------

/**
* Set row padding. It allows you to add padding at the end of each image
* row. It returns true for success, false on failure. Specifying a pad
* value of zero will remove any row padding.
*/
bool Image::SetRowPad(long pad) {
	// check for erroneous pad value
	if (pad < 0) return false;

	// get current padding
	long padNow = GetRowPad();

	// check for trivial case: same as current padding
	if (pad == padNow) return true;

	// if padding is smaller, we don't reallocate
	if (pad < padNow) {
		//-- padding is smaller: no reallocation

		// length of pixel data for a row, excluding padding
		size_t
			count = (size_t)extra->m_nRowSize;

		// total size of row in source and destination in bytes
		size_t
			srcPitch = (size_t)extra->m_nRowTotal,
			dstPitch = count + (size_t)pad;

		// source and destination pointers
		BYTE
			*dst = GetData()+dstPitch,
			*src = GetData()+srcPitch;

		// move data, use of memmove() handles overlapping regions
		// note: row 0 is already in place
		for (long n=1; n<Height(); n++) {
			memmove(dst,src,count);
			src+=srcPitch;
			dst+=dstPitch;
		}

		// update structure to reflect new row total and image size
		// note: storage size doesn't change in this case
		extra->m_nRowTotal = (long)dstPitch;
		extra->m_nSize	   = Height()*(long)dstPitch;

		// success
		return true;
	} else {
		//-- padding is larger

		// length of pixel data for a row, excluding padding
		size_t
			count = (size_t)extra->m_nRowSize;

		// total size of row in source and destination in bytes
		size_t
			//srcPitch = (size_t)extra->m_nRowTotal,
			dstPitch = count + (size_t)pad,
			newSize  = dstPitch * Height();	// new size required

		if (newSize <= (size_t)extra->m_nStore) {
			// we already have enough storage

			// destination pointer: start of last row
			BYTE
				*dst = GetData()+dstPitch*(Height()-1);
			// move data, use of memmove() handles overlapping regions
			for (int n=Height()-1; n>=0; n--) {
				memmove(dst, GetRowData(n), count);
				dst-=dstPitch;
			}

			// JWW 23/09/03 added this missing code..
			// update structure to reflect new row total and image size
			// note: storage size doesn't change in this case
			extra->m_nRowTotal = (long)dstPitch;
			extra->m_nSize	   = Height()*(long)dstPitch;

			return true;
		} else {
			// out of storage: need to reallocate

			// temporary copy of image
			Image temp(*this);

			// allocate new image with desired padding
			if ( !Create(Width(), Height(), GetFormat(), pad) )
				return false;

			// sanity checks
			assert(temp.GetData()!=NULL);
			assert(GetData() != NULL);
			assert(Width()  == temp.Width());
			assert(Height() == temp.Height());
			assert(GetFormat() == temp.GetFormat());

			// copy image data from temp -> this image
			for (int n=0; n<Height(); n++) {
				memcpy(
					GetRowData(n),			// dest.  = this
					temp.GetRowData(n),		// source = temp
					extra->m_nRowSize		// length of image row (exc.pad)
				);
			}

			// redundant: but just so you know :)
			temp.Free();

			return true;
		}
	}
}//Image

//-----------------------------------------------------------------------------

/**
* Get row padding. This returns the number of extra padding bytes at the
* end of each image row.
*/
long Image::GetRowPad() const {
	return (extra->m_nRowTotal - extra->m_nRowSize);
}

//-----------------------------------------------------------------------------

/**
* Get a pointer to the raw image data. This is useful for use with
* functions such as glTexImage2d(). See GetRowData() for more details
* of the image storage format.
*/
BYTE *Image::GetData() {
	return GetRowData(0);
}

//-----------------------------------------------------------------------------

const BYTE *Image::GetData() const {
	return GetRowData(0);
}

//-----------------------------------------------------------------------------

/**
* Get a pointer to the raw image data for a particular row. The rows
* are numbered 0..Height()-1 and start from the top of the image.
* Each row consists of Width() pixels, and the pixel format can be
* obtained using the GetFormat() method. If you want to verify the
* storage size of each pixel, use the GetPixelSize() method. At the
* end of each row there may be zero or more padding bytes. The number
* of padding bytes can be obtained with the GetRowPad() method.
* If the row number is out of range, this method will return a NULL
* pointer.
* Tip: to simplify your code, call SetFormat() to convert the image
* to a fixed format first. For example, if you SetFormat(RGB), then
* each row simply has Width() pixels, each of 3-bytes Red,Green,Blue.
*/
BYTE *Image::GetRowData(long row) {
	// check range: and (implicitly) that image is valid
	if ((row < 0) || (row >= Height())) return NULL;

	// calculate byte offset to start of row
	long offset = (extra->m_nRowTotal * row);

	// return pointer
	return &(extra->m_pData[offset]);
}//GetRowData

//-----------------------------------------------------------------------------

const BYTE *Image::GetRowData(long row) const {
	// check range: and (implicitly) that image is valid
	if ((row < 0) || (row >= Height())) return NULL;

	// calculate byte offset to start of row
	long offset = (extra->m_nRowTotal * row);

	// return pointer
	return &(extra->m_pData[offset]);
}//GetRowData

//-----------------------------------------------------------------------------

/**
 * Set a pixel at (x,y) to colour (r,g,b,a). Colour values range from
 * 0 to 255.
 */
void Image::SetPixel4b(long x, long y, BYTE r, BYTE g, BYTE b, BYTE a) {
	// check y range
	if ((y < 0) || (y >= extra->m_nHeight)) return;

	// obtain pointer to row y
	BYTE *pRow = &extra->m_pData[extra->m_nRowTotal * y];

	// check x range
	if ((x < 0) || (x >= extra->m_nWidth)) return;

	BYTE *pPixel;
	switch (extra->m_format) {
	case RGB:
		pPixel=&pRow[x*3];
		pPixel[0]=r;
		pPixel[1]=g;
		pPixel[2]=b;
		return;
	case RGBA:
		pPixel=&pRow[x*4];
		pPixel[0]=r;
		pPixel[1]=g;
		pPixel[2]=b;
		pPixel[3]=a;
		return;
	case BGR:
		pPixel=&pRow[x*3];
		pPixel[0]=b;
		pPixel[1]=g;
		pPixel[2]=r;
		return;
	case BGRA:
		pPixel=&pRow[x*4];
		pPixel[0]=b;
		pPixel[1]=g;
		pPixel[2]=r;
		pPixel[3]=a;
		return;
	case LUM:
		pRow[x]=ImageEx::RGB2LUM(r,g,b);
		return;
	case LUMALP:
		pPixel=&pRow[x*2];
		pPixel[0]=ImageEx::RGB2LUM(r,g,b);
		pPixel[1]=a;
		return;
	case ALPHA:	// JWW 27/10/03 added
		pRow[x]=a;
		return;
	}
}//SetPixel4b

//-----------------------------------------------------------------------------

/**
 * Set a pixel at (x,y) to colour (r,g,b,a). Colour values range from
 * 0 to 1.
 */
void Image::SetPixel4f(long x, long y, float r, float g, float b, float a) {
	SetPixel4b(
		x,y,
		(BYTE)(255.0f*r+0.5f),
		(BYTE)(255.0f*g+0.5f),
		(BYTE)(255.0f*b+0.5f),
		(BYTE)(255.0f*a+0.5f)
	);
}

//-----------------------------------------------------------------------------

/**
 * Set a pixel at (x,y) to colour (r,g,b). Colour values range from
 * 0 to 255.
 */
void Image::SetPixel3b(long x, long y, BYTE r, BYTE g, BYTE b) {
	SetPixel4b(
		x,y,
		r,g,b,
		Image_DefaultAlpha
	);
}

//-----------------------------------------------------------------------------

/**
 * Set a pixel at (x,y) to colour (r,g,b). Colour values range from
 * 0 to 1.
 */
void Image::SetPixel3f(long x, long y, float r, float g, float b) {
	SetPixel4b(
		x,y,
		(BYTE)(255.0f*r+0.5f),
		(BYTE)(255.0f*g+0.5f),
		(BYTE)(255.0f*b+0.5f),
		Image_DefaultAlpha
	);
}

//-----------------------------------------------------------------------------

/**
 * Set a pixel at (x,y) to intensity (i) alpha (a). Values range from
 * 0 to 255.
 */
void Image::SetPixel2b(long x, long y, BYTE i, BYTE a) {
	// check y range
	if ((y < 0) || (y >= extra->m_nHeight)) return;

	// obtain pointer to row y
	BYTE *pRow = &extra->m_pData[extra->m_nRowTotal * y];

	// check x range
	if ((x < 0) || (x >= extra->m_nWidth)) return;

	BYTE *pPixel;
	switch (GetFormat()) {
	case RGB:
	case BGR:
		pPixel=&pRow[x*3];
		pPixel[0]=i;
		pPixel[1]=i;
		pPixel[2]=i;
		return;
	case RGBA:
	case BGRA:
		pPixel=&pRow[x*4];
		pPixel[0]=i;
		pPixel[1]=i;
		pPixel[2]=i;
		pPixel[3]=a;
		return;
	case LUM:
		pRow[x]=i;
		return;
	case LUMALP:
		pPixel=&pRow[x*2];
		pPixel[0]=i;
		pPixel[1]=a;
		return;
	case ALPHA:	// JWW 27/10/03 added
		pRow[x]=a;
		return;
	}
}

//-----------------------------------------------------------------------------

/**
 * Set a pixel at (x,y) to intensity (i). Values range from
 * 0 to 255.
 */
void Image::SetPixel1b(long x, long y, BYTE i) {
	if ( (extra->m_format == Image::LUM) || (extra->m_format == Image::ALPHA) ) {
		// special case for LUM or ALPHA image format to avoid
		// overhead of general function
		if ( (x < 0) || (x >= extra->m_nWidth) )  return;
		if ( (y < 0) || (y >= extra->m_nHeight) ) return;
		if ( extra->m_pData == NULL ) return;
		// write the pixel directly
		extra->m_pData[ x + y * extra->m_nRowTotal ] = i;
	} else {
		// general case
		SetPixel2b(x,y,i, Image_DefaultAlpha);
	}
}

//-----------------------------------------------------------------------------

/**
 * Set a pixel at (x,y) to intensity (i) alpha (a). Values range from
 * 0 to 1.
 */
void Image::SetPixel2f(long x, long y, float i, float a) {
	SetPixel2b(
		x,y,
		(BYTE)(255.0f*i+0.5f),
		(BYTE)(255.0f*a+0.5f)
	);
}

//-----------------------------------------------------------------------------

/**
 * Set a pixel at (x,y) to intensity (i). Values range from
 * 0 to 1.
 */
void Image::SetPixel1f(long x, long y, float i) {
	SetPixel1b(x,y, (BYTE)(255.0f * i + 0.5f));
}

//-----------------------------------------------------------------------------

/**
 * Get the colour values (r,g,b,a) from the pixel at (x,y).
 * Colour values range from 0 to 255.
 */
void Image::GetPixel4b(long x, long y, BYTE &r, BYTE &g, BYTE &b, BYTE &a) const {
	// check y range
	if ((y < 0) || (y >= extra->m_nHeight)) {
		r=g=b=0; a=Image_DefaultAlpha;
		return;
	}

	// obtain pointer to row y
	BYTE *pRow = &extra->m_pData[extra->m_nRowTotal * y];

	// check x range
	if ((x < 0) || (x >= extra->m_nWidth)) {
		r=g=b=0; a=Image_DefaultAlpha;
		return;
	}

	BYTE *pPixel;
	switch (extra->m_format) {
	case RGB:
		pPixel=&pRow[x*3];
		r=pPixel[0];
		g=pPixel[1];
		b=pPixel[2];
		a=Image_DefaultAlpha;
		return;
	case RGBA:
		pPixel=&pRow[x*4];
		r=pPixel[0];
		g=pPixel[1];
		b=pPixel[2];
		a=pPixel[3];
		return;
	case BGR:
		pPixel=&pRow[x*3];
		b=pPixel[0];
		g=pPixel[1];
		r=pPixel[2];
		a=Image_DefaultAlpha;
		return;
	case BGRA:
		pPixel=&pRow[x*4];
		b=pPixel[0];
		g=pPixel[1];
		r=pPixel[2];
		a=pPixel[3];
		return;
	case LUM:
		r=g=b=pRow[x];
		a=Image_DefaultAlpha;
		return;
	case LUMALP:
		pPixel=&pRow[x*2];
		r=g=b=pPixel[0];
		a=pPixel[1];
		return;
	case ALPHA:	// JWW 27/10/03
		r=g=b=0;
		a=pRow[x];
		return;
	}
}//GetPixel4b

//-----------------------------------------------------------------------------

/**
 * Get the colour values (r,g,b,a) from the pixel at (x,y).
 * Colour values range from 0 to 1.
 */
void Image::GetPixel4f(long x, long y, float &r, float &g, float &b, float &a) const {
	BYTE cr,cg,cb,ca;
	GetPixel4b(x,y, cr,cg,cb,ca);
	r=(float)cr/255.0f;
	g=(float)cg/255.0f;
	b=(float)cb/255.0f;
	a=(float)ca/255.0f;
}//GetPixel4f

//-----------------------------------------------------------------------------

/**
 * Get the colour values (r,g,b) from the pixel at (x,y).
 * Colour values range from 0 to 255.
 */
void Image::GetPixel3b(long x, long y, BYTE &r, BYTE &g, BYTE &b) const {
	BYTE ca;
	GetPixel4b(x,y, r,g,b, ca);
}//GetPixel3b

//-----------------------------------------------------------------------------

/**
 * Get the colour values (r,g,b) from the pixel at (x,y).
 * Colour values range from 0 to 1.
 */
void Image::GetPixel3f(long x, long y, float &r, float &g, float &b) const {
	BYTE cr,cg,cb,ca;
	GetPixel4b(x,y, cr,cg,cb, ca);
	r=(float)cr/255.0f;
	g=(float)cg/255.0f;
	b=(float)cb/255.0f;
}//GetPixel3f

//-----------------------------------------------------------------------------

/**
 * Get the intensity and alpha values (i,a) from the pixel at (x,y).
 * Values range from 0 to 255.
 */
void Image::GetPixel2b(long x, long y, BYTE &i, BYTE &a) const {
	BYTE cr,cg,cb;
	GetPixel4b(x,y, cr,cg,cb, a);
	i = ImageEx::RGB2LUM(cr,cg,cb);
}//GetPixel2b

//-----------------------------------------------------------------------------

/**
 * Get the intensity and alpha values (i,a) from the pixel at (x,y).
 * Values range from 0 to 1.
 */
void Image::GetPixel2f(long x, long y, float &i, float &a) const {
	BYTE cr,cg,cb,ca;
	GetPixel4b(x,y, cr,cg,cb,ca);
	i = (float)ImageEx::RGB2LUM(cr,cg,cb)/255.0f;
	a = (float)ca/255.0f;
}//GetPixel2f

//-----------------------------------------------------------------------------

/**
 * Get the intensity value (i) from the pixel at (x,y).
 * The value ranges from 0 to 255.
 */
void Image::GetPixel1b(long x, long y, BYTE &i) const {
	if ( (extra->m_format == Image::LUM) || (extra->m_format == Image::ALPHA) ) {
		// special case for LUM image format to avoid
		// overhead of general function
		if ( (x < 0) || (x >= extra->m_nWidth) )  return;
		if ( (y < 0) || (y >= extra->m_nHeight) ) return;
		if ( extra->m_pData == NULL ) return;
		// read the pixel directly
		i = extra->m_pData[ x + y * extra->m_nRowTotal ];
	} else {
		// general case
		BYTE cr,cg,cb,ca;
		GetPixel4b(x,y, cr,cg,cb,ca);
		i = ImageEx::RGB2LUM(cr,cg,cb);
	}
}//GetPixel1b

//-----------------------------------------------------------------------------

/**
 * Get the intensity value (i) from the pixel at (x,y).
 * The value ranges from 0 to 1.
 */
void Image::GetPixel1f(long x, long y, float &i) const {
	BYTE ci;
	GetPixel1b(x,y,ci);
	i = (float)ci/255.0f;
}//GetPixel1f

//-----------------------------------------------------------------------------

/**
 * Helper class for templated drawing on 24bpp (RGB) format images
 */
struct ImageEx::FF_RGB {
	FF_RGB() {}
	FF_RGB(BYTE r, BYTE g, BYTE b) :R(r),G(g),B(b) {}
	bool operator == (const FF_RGB &rhs) const {
		return (R==rhs.R) && (G==rhs.G) && (B==rhs.B);
	}
	bool operator != (const FF_RGB &rhs) const {
		return !(*this == rhs);
	}
	void get(const Image &img, long x, long y) {
		img.GetPixel3b(x,y,R,G,B);
	}
	void put(Image &img, long x, long y) const {
		img.SetPixel3b(x,y,R,G,B);
	}
	BYTE R,G,B;
};

//-----------------------------------------------------------------------------

/**
 * Helper class for templated drawing on 8bpp (LUM) format images
 */
struct ImageEx::FF_LUM {
	FF_LUM() {}
	FF_LUM(BYTE i) :I(i) {}
	bool operator == (const FF_LUM &rhs) const {
		return (I==rhs.I);
	}
	bool operator != (const FF_LUM &rhs) const {
		return !(*this == rhs);
	}
	void get(const Image &img, long x, long y) {
		img.GetPixel1b(x,y,I);
	}
	void put(Image &img, long x, long y) const {
		img.SetPixel1b(x,y,I);
	}
	BYTE I;
};

//-----------------------------------------------------------------------------

/**
 * Generic Bresenham line implementation for any pixel type
 */
template <class T>
void ImageEx::draw_line(
	Image &img, long x1, long y1, long x2, long y2, const T &fgcol
) {
	// check for zero length
	if ( (x1==x2) && (y1==y2) ) {
		fgcol.put(img,x1,y1);
		return;
	}

	long
		x = x1,
		y = y1,
		dx = abs(x2-x1),
		dy = abs(y2-y1),
		s1 = (x2<x1) ? -1 : ((x2>x1) ? 1 : 0),
		s2 = (y2<y1) ? -1 : ((y2>y1) ? 1 : 0);
	bool
		swap = false;

	if (dy > dx) {
		long t = dx;
		dx = dy;
		dy = t;
		swap = true;
	}

	long
		err = 2 * dy - dx,
		dx2 = 2 * dx,
		dy2 = 2 * dy;

	if (swap) {
		for (long n=1; n<=dx; n++) {
			fgcol.put(img,x,y);
			while (err >= 0) {
				x += s1;
				err -= dx2;
			}
			y += s2;
			err += dy2;
		}
	} else {
		for (long n=1; n<=dx; n++) {
			fgcol.put(img,x,y);
			while (err >= 0) {
				y += s2;
				err -= dx2;
			}
			x += s1;
			err += dy2;
		}
	}
}//draw_line

void Image::DrawLine3b(
	long x1, long y1, long x2, long y2,
	BYTE r, BYTE g, BYTE b
) {
	ImageEx::draw_line<ImageEx::FF_RGB>(*this,x1,y1,x2,y2,ImageEx::FF_RGB(r,g,b));
}//DrawLine3b

void Image::DrawLine3f(
	long x1, long y1, long x2, long y2,
	float r, float g, float b
) {
	DrawLine3b(
		x1,y1,x2,y2,
		(BYTE)(255.0f*r+0.5f),
		(BYTE)(255.0f*g+0.5f),
		(BYTE)(255.0f*b+0.5f)
	);
}//DrawLine3f

void Image::DrawLine1b(long x1, long y1, long x2, long y2, BYTE i) {
	ImageEx::draw_line<ImageEx::FF_LUM>(*this,x1,y1,x2,y2,ImageEx::FF_LUM(i));
}//DrawLine1b

void Image::DrawLine1f(long x1, long y1, long x2, long y2, float i) {
	DrawLine1b(x1,y1,x2,y2, (BYTE)(255.0f*i+0.5f));
}//DrawLine1f


void Image::DrawRect3b(long x1, long y1, long x2, long y2, BYTE r, BYTE g, BYTE b) {
	DrawLine3b(x1,y1, x2,y1, r,g,b);
	DrawLine3b(x1,y2, x2,y2, r,g,b);
	DrawLine3b(x1,y1, x1,y2, r,g,b);
	DrawLine3b(x2,y1, x2,y2, r,g,b);
}//DrawRect3b

void Image::DrawRect3f(long x1, long y1, long x2, long y2, float r, float g, float b) {
	DrawRect3b(
		x1,y1, x2,y2,
		(BYTE)(255.0f*r+0.5f),
		(BYTE)(255.0f*g+0.5f),
		(BYTE)(255.0f*b+0.5f)
	);
}//DrawRect3f

void Image::DrawRect1b(long x1, long y1, long x2, long y2, BYTE i) {
	DrawLine1b(x1,y1, x2,y1, i);
	DrawLine1b(x1,y2, x2,y2, i);
	DrawLine1b(x1,y1, x1,y2, i);
	DrawLine1b(x2,y1, x2,y2, i);
}//DrawRect1b

void Image::DrawRect1f(long x1, long y1, long x2, long y2, float i) {
	DrawRect1b( x1,y1, x2,y2, (BYTE)(255.0f*i+0.5f)	);
}//DrawRect1f

void Image::Blur() {
	long
		w = Width(),
		h = Height();

	// create temporary image with same format
	Image tmp( w, h, GetFormat(), GetRowPad() );
	if ( !tmp.IsValid() ) return;

	// blur is implemented as a horizontal and vertical pass, using an
	// intermediate temporary image. it operates directly on bytes rather
	// than using set/get pixel functions for format independence

	// blur rows
	long x,y,span=GetRowSize();
	memcpy( tmp.GetRowData(0), GetRowData(0), GetRowSize() );
	for (y=1; y<h-1; y++) {
		BYTE *src = GetRowData(y), *dst = tmp.GetRowData(y);
		for (x=0; x<GetRowSize(); x++) {
			BYTE a,b,c;
			a = src[-span];	// getPixel(x,y-1)
			b = src[0];		// getPixel(x,y)
			c = src[span];	// getPixel(x,y+1)
			// t = (a+2b+c)/4
			BYTE t = (BYTE)(( (WORD)a + 2*(WORD)b + (WORD)c ) >> 2);
			*dst++ = t;		// setPixel(x,y)
			src++;
		}
	}
	memcpy( tmp.GetRowData(h-1), GetRowData(h-1), GetRowSize() );

	// bytes per pixel
	long pixelSize = GetPixelSize();

	// blur columns
	for (y=0; y<h; y++) {
		BYTE *src = tmp.GetRowData(y), *dst = GetRowData(y);
		// copy first pixel of row
		memcpy(dst, src, pixelSize);
		// for each channel (eg. I,R,G,B,A depending on image type)
		for (long c=0; c<pixelSize; c++) {
			// for channel c in every pixel in this row
			for (x=pixelSize+c; x<((w-1)*pixelSize+c); x+=pixelSize) {
				WORD
					a = (WORD)( src[x-pixelSize] ),		// left
					b = (WORD)( src[x] ),				// centre
					c = (WORD)( src[x+pixelSize] );		// right
				// t = (a+2b+c)/4
				dst[x] = (BYTE)(( a + (b<<1) + c ) >> 2);
			}
		}
		// copy last pixel of row
		memcpy(&dst[(w-1)*pixelSize], &src[(w-1)*pixelSize], pixelSize);
	}
}//Blur

//-----------------------------------------------------------------------------

/**
 * This class represents a 1D filter kernel
 */
class Kernel1D {
public:
	Kernel1D();
	~Kernel1D();
	Kernel1D(const Kernel1D &);
	Kernel1D & operator = (const Kernel1D &);

	bool makeGaussian(float radius);

	bool alloc(unsigned size);
	void free();

	unsigned size() const;

	float total() const;

	const float & operator [] (unsigned i) const;
	float & operator [] (unsigned i);

private:
	void reset();

private:
	float	 *m_pData;	///< pointer to data
	unsigned  m_nSize;	///< number of elements
};

inline unsigned Kernel1D::size() const {
	return m_nSize;
}

inline const float & Kernel1D::operator [] (unsigned i) const {
	return m_pData[i];
}

inline float & Kernel1D::operator [] (unsigned i) {
	return m_pData[i];
}

Kernel1D::Kernel1D() {
	reset();
}

Kernel1D::~Kernel1D() {
	free();
}

Kernel1D::Kernel1D(const Kernel1D &rhs) {
	*this = rhs;
}

Kernel1D & Kernel1D::operator = (const Kernel1D &rhs) {
	if ( this == &rhs ) return *this;
	if ( alloc(rhs.m_nSize) )
		memcpy( m_pData, rhs.m_pData, m_nSize*sizeof(m_pData[0]) );
	return *this;
}

void Kernel1D::reset() {
	m_pData = NULL;
	m_nSize = 0;
}

bool Kernel1D::alloc(unsigned size) {
	if ( size == m_nSize ) return true;

	delete [] m_pData;
	reset();

	if (size == 0)
		return true;
	else {
		m_pData = new float[size];
		if (m_pData == NULL) return false;

		m_nSize = size;
		return true;
	}
}//alloc

void Kernel1D::free() {
	alloc(0);
}//free

bool Kernel1D::makeGaussian(float radius) {
	if (radius <= 0.0f) return false;

	int
		r = (int)ceil(radius),
		rows = r*2+1;

	if ( !alloc(rows) ) return false;

	float
		sigma = radius / 3.0f,
		sigma22 = 2.0f*sigma*sigma,
		sigmaPI2 = 2.0f*(float)M_PI*sigma,
		sqrtSigmaPI2 = sqrt(sigmaPI2),
		//radius2 = radius*radius,
		total = 0.0f;
	int
		index = 0;

	for (int row=-r; row<=r; row++) {
		float distance = (float)(row*row);
		//if (distance > radius2)
		//	m_pData[index] = 0;
		//else
			m_pData[index] = exp(-distance/sigma22) / sqrtSigmaPI2;
		total += m_pData[index];
		index++;
	}
	for (int i=0; i<rows; i++)
		m_pData[i] /= total;

	return true;
}//makeGaussian

//-----------------------------------------------------------------------------

void Image::GaussBlur(float radius) {
	// create filter kernel
	Kernel1D kernel;
	kernel.makeGaussian(radius);

	// allocate buffer for fixed point representation of kernel
	// and fill it with scaled weights from original kernel
	//
	long *weight = new long[kernel.size()];
	if (weight == NULL) return;
	for (unsigned n=0; n<kernel.size(); n++)
		weight[n] = (long)(kernel[n] * 256.f + 0.5f);

	// get image dimensions
	int
		w = Width(),
		h = Height();

	// create temporary image with same size and format
	Image tmp( w, h, GetFormat(), GetRowPad() );

	// kernel size is odd, hence we use -half to +half
	int
		size = kernel.size(),
		half = size/2,
		pixSize  = GetPixelSize(),
		numChans = (pixSize <= 3) ? pixSize : 3;	// don't touch alpha

	// blur pass 1
	// for each channel
	for (int chan=0; chan<numChans; chan++) {
		// for each row
		for (int y=0; y<h; y++) {
			BYTE
				*src = GetRowData(y) + chan,
				*dst = tmp.GetRowData(y) + chan;
			// for each column
			for (int x=0; x<w; x++) {
				long sum = 0;
				for (int c=0; c<size; c++) {
					// coordinate in source
					int u=x+c-half;
					if (u < 0)
						u=0;
					else if (u >= w)
						u=w-1;
					// accumulate weighted pixel contributions
					sum += (long)src[u*pixSize] * weight[c];//(float)row[u] * k;
				}//for(c)
				// store pixel in temporary image
				*dst= (BYTE)(sum>>8);
				dst+=pixSize;
			}//for(x)
		}//for(y)
	}//for(chan)

	// blur pass 2
	long rowSize = GetRowSize();
	for (int chan=0; chan<numChans; chan++) {
		for (int y=0; y<h; y++) {
			BYTE *dst = GetRowData(y) + chan;
			for (int x=0; x<w; x++) {
				BYTE *src = tmp.GetData() + x*pixSize + chan;
				long sum = 0;
				for (int c=0; c<size; c++) {
					//float k = kernel[c];
					// coordinate in source
					int v=y+c-half;
					if (v < 0)
						v=0;
					else if (v >= h)
						v=h-1;
					// accumulate weighted pixel contributions
					sum += src[v*rowSize] * weight[c];
				}//for(c)
				*dst= (BYTE)(sum>>8);
				dst+=pixSize;
			}//for(x)
		}//for(y)
	}//for(chan)

	delete [] weight;
}//GaussBlur

bool Image::Average(const Image &rhs) {
	if ( !IsValid() || !SameFormat(rhs) ) return false;

	BYTE *dst = GetData();
	const BYTE *src = rhs.GetData();
	for (long i=0; i<Size(); i++) {
		*dst = (BYTE)(((WORD)*dst + (WORD)*src++)>>1);
		++dst;
	}

	return true;
}//Average

/**
 * Logically AND the contents of this image with a second image.
 * The two images must have identical format and dimensions.
 */
bool Image::AND(const Image &rhs) {
	if ( !IsValid() || !SameFormat(rhs) ) return false;

	BYTE *dst = GetData();
	const BYTE *src = rhs.GetData();
	for (long i=0; i<Size(); i++)
		*dst++ &= *src++;

	return true;
}//OR

/**
 * Logically XOR the contents of this image with a second image.
 * The two images must have identical format and dimensions.
 */
bool Image::XOR(const Image &rhs) {
	if ( !IsValid() || !SameFormat(rhs) ) return false;

	BYTE *dst = GetData();
	const BYTE *src = rhs.GetData();
	for (long i=0; i<Size(); i++)
		*dst++ ^= *src++;
	
	return true;
}//XOR

/**
 * Logically OR the contents of this image with a second image.
 * The two images must have identical format and dimensions.
 */
bool Image::OR(const Image &rhs) {
	if ( !IsValid() || !SameFormat(rhs) ) return false;

	BYTE *dst = GetData();
	const BYTE *src = rhs.GetData();
	for (long i=0; i<Size(); i++)
		*dst++ |= *src++;

	return true;
}//OR

bool Image::SameFormat(const Image &rhs) const {
	return (
		(extra->m_format  == rhs.extra->m_format)  &&
		(extra->m_nWidth  == rhs.extra->m_nWidth)  && 
		(extra->m_nHeight == rhs.extra->m_nHeight) &&
		(extra->m_nSize   == rhs.extra->m_nSize)   &&
		(extra->m_nRowTotal== rhs.extra->m_nRowTotal)
	);
}//SameFormat

// this is only used inside flood_fill, but VS.NET 2003 doesn't like
// STL containers of local structs and gives spurious error C2664 -
// works fine in VS.NET 2005 though
struct ImageEx::pixel {
	pixel(long X, long Y) :x(X),y(Y) {}
	long x,y;
};

/**
 * Flood fill implementation. Uses templates to avoid code repetition.
 */
template <class T>
void ImageEx::flood_fill(Image &img, long x, long y, const T &fgcol) {
	stack<pixel> s;

	long
		w = img.Width(),
		h = img.Height();

	long u, xleft,xright;
	s.push( pixel(x,y) );
	T col, bgcol;
	bgcol.get(img,x,y);
	while ( !s.empty() ) {
		// pop pixel from stack
		pixel p( s.top() );
		s.pop();

		// fill right
		for (u=p.x; u<w; u++) {
			fgcol.put(img,u,p.y);
			col.get(img,u+1,p.y);
			if (col != bgcol) break;
		}
		xright=u-1;

		// fill left
		for (u=p.x-1; u>=0; u--) {
			col.get(img,u,p.y);
			if (col != bgcol) break;
			fgcol.put(img,u,p.y);
		}
		xleft=u+1;

		// check scan line above
		if (p.y < h-1) {
			bool oldspace=false;
			for (u=xleft; u<=xright; u++) {
				col.get(img, u,p.y+1);
				bool space = (col == bgcol) && (col != fgcol);
				if (space && !oldspace)
					s.push( pixel(u,p.y+1) );
				oldspace=space;
			}
		}

		// check scan line below
		if (p.y > 1) {
			bool oldspace=false;
			for (u=xleft; u<=xright; u++) {
				col.get(img,u,p.y-1);
				bool space = (col == bgcol) && (col != fgcol);
				if ( space && !oldspace )
					s.push( pixel(u,p.y-1) );
				oldspace=space;
			}
		}
	}//while
}//flood_fill

void Image::FloodFill3b(long x, long y, BYTE r, BYTE g, BYTE b) {
	ImageEx::flood_fill<ImageEx::FF_RGB>(*this,x,y,ImageEx::FF_RGB(r,g,b));
}//FloodFill3b

void Image::FloodFill3f(long x, long y, float r, float g, float b) {
	FloodFill3b(
		x,y,
		(BYTE)(255.0f*r+0.5f),
		(BYTE)(255.0f*g+0.5f),
		(BYTE)(255.0f*b+0.5f)
	);
}//FloodFill3f

void Image::FloodFill1b(long x, long y, BYTE i) {
	ImageEx::flood_fill<ImageEx::FF_LUM>(*this,x,y,ImageEx::FF_LUM(i));
}//FloodFill1b

void Image::FloodFill1f(long x, long y, float i) {
	FloodFill1b(x,y, (BYTE)(255.0f*i+0.5f));
}//FloodFill1f

//-----------------------------------------------------------------------------

// JWW 27/10/03 added this
bool Image::glReadPixels(int x, int y, int width, int height, Format format) {
	// check dimensions
	if ((width==0) && (height==0)) {
		// zero size image is allowed: creates an empty image
		Free();
		return true;
	} else if ((width < 1) || (height < 1)) {
		// stupid dimensions
		return false;
	}

	// note: we don't check (x,y): we leave that to ::glReadPixels

	// can we support BGR/BGRA?
	bool bHasBGRA = extra->HasBGRA();
	Format capForm = format;	// format to capture
	if (!bHasBGRA) {
		// if we don't support BGR/BGRA, we have to capture as RGB/RGBA
		// and then switch formats later
		if (format == BGR)
			capForm = RGB;
		else if (format == BGRA)
			capForm = RGBA;
	}

	// create an image of correct size, with desired output format
	// (or substituted format in case of unsupported BGR/BGRA)
	if (!Create(width, height, capForm)) {
		// allocation failed :(
		return false;
	}

	// save current settings (doesn't seem possible to push them)
	// we ignore GL_PACK_LSB_FIRST since it only affects bitmap data
	GLint
		packSwapBytes, packRowLength, packSkipPixels, packSkipRows, packAlign;
	glGetIntegerv(GL_PACK_SWAP_BYTES, &packSwapBytes);
	glGetIntegerv(GL_PACK_ROW_LENGTH, &packRowLength);
	glGetIntegerv(GL_PACK_SKIP_PIXELS,&packSkipPixels);
	glGetIntegerv(GL_PACK_SKIP_ROWS,  &packSkipRows);
	glGetIntegerv(GL_PACK_ALIGNMENT,  &packAlign);

	// if needed, change any settings that aren't appropriate
	if (packSwapBytes != GL_FALSE) glPixelStorei(GL_PACK_SWAP_BYTES, GL_FALSE);
	if (packRowLength  != 0) glPixelStorei(GL_PACK_ROW_LENGTH,  0);
	if (packSkipPixels != 0) glPixelStorei(GL_PACK_SKIP_PIXELS, 0);
	if (packSkipRows   != 0) glPixelStorei(GL_PACK_SKIP_ROWS,   0);
	if (packAlign      != 1) glPixelStorei(GL_PACK_ALIGNMENT,   1);

	// clear GL error code, and call glReadPixels()
	glGetError();
	GLvoid *pData = (GLvoid*)GetData();
	switch ( capForm ) {	// capture format
	case RGB:
		::glReadPixels(x,y, width,height, GL_RGB, GL_UNSIGNED_BYTE, pData);
		break;
	case RGBA:
		::glReadPixels(x,y, width,height, GL_RGBA, GL_UNSIGNED_BYTE, pData);
		break;
	case BGR:
		::glReadPixels(x,y, width,height, GL_BGR_EXT, GL_UNSIGNED_BYTE, pData);
		break;
	case BGRA:
		::glReadPixels(x,y, width,height, GL_BGRA_EXT, GL_UNSIGNED_BYTE, pData);
		break;
	case LUM:
		::glReadPixels(x,y, width,height, GL_LUMINANCE, GL_UNSIGNED_BYTE, pData);
		break;
	case LUMALP:
		::glReadPixels(x,y, width,height, GL_LUMINANCE_ALPHA, GL_UNSIGNED_BYTE, pData);
		break;
	case ALPHA:
		::glReadPixels(x,y, width,height, GL_ALPHA, GL_UNSIGNED_BYTE, pData);
		break;
	}
	// if we made a glReadPixels call, check the error state after
	GLenum err = glGetError();

	// if we changed any OpenGL pack settings, restore them here
	if (packSwapBytes != GL_FALSE)
		glPixelStorei(GL_PACK_SWAP_BYTES, packSwapBytes);
	if (packRowLength  != 0) glPixelStorei(GL_PACK_ROW_LENGTH, packRowLength);
	if (packSkipPixels != 0) glPixelStorei(GL_PACK_SKIP_PIXELS,packSkipPixels);
	if (packSkipRows   != 0) glPixelStorei(GL_PACK_SKIP_ROWS,  packSkipRows);
	if (packAlign      != 1) glPixelStorei(GL_PACK_ALIGNMENT,  packAlign);

	// if captured format does not match desired output format, change it now
	// (for example, if we had to capture RGB/RGBA when BGR/BGRA unsupported)
	if (capForm != format) SetFormat(format);

	// were we successful?
	return (err == GL_NO_ERROR);
}//glReadPixels

//-----------------------------------------------------------------------------

/**
 * Copy the alpha channel from the source image to the current image
 * (destination). The colour or intensity values in the destination
 * image are not altered, but the alpha values are replaced with those
 * from the source. The images must have the same size.
 * If the destination image does not have an alpha channel, one will be
 * added first. If the source image does not have an alpha channel, the
 * operation will fail.
 * Returns true for success, false on failure.
 */
bool Image::CopyAlpha(const Image &source) {
	// source image must have an alpha channel
	switch (source.GetFormat()) {
	case RGB:
	case BGR:
	case LUM:
		return false;
	default:
		break;
	}

	// source and destination must have same size
	if ( (source.Width() != Width()) || (source.Height() != Height()))
		return false;

	// image must be at least 1x1 pixel
	if ( !Width() || !Height() ) return false;

	// if destination doesn't have an alpha channel, add one
	switch (GetFormat()) {
	case RGB:
		if (!SetFormat(RGBA))   return false;
		break;
	case BGR:
		if (!SetFormat(BGRA))   return false;
		break;
	case LUM:
		if (!SetFormat(LUMALP)) return false;
		break;
	default:
		break;
	}

	// at this point, we have two equal sized images, both with alpha
	// next step is to copy only the alpha channel across

	// size of a pixel in source and destination
	long
		srcStep = source.GetPixelSize(),
		dstStep = GetPixelSize();

	// local function to get byte offset of alpha value for given format
	struct local {
		static long AlphaOffset(Format fmt) {
			switch (fmt) {
			case Image::RGBA:
			case Image::BGRA:
				return 3;
			case Image::LUMALP:
				return 1;
			case Image::ALPHA:
				return 0;
			default:
				break;
			};
			return 0;
		};
	};

	// offset of alpha value in source/destination pixel
	long
		srcOffset = local::AlphaOffset( source.GetFormat() ),
		dstOffset = local::AlphaOffset( GetFormat() );

	// for each row..
	for (long y=0; y<Height(); y++) {
		// pointer to start of row y in source and destination image
		const BYTE *pSrc = source.GetRowData(y);
		BYTE *pDst = GetRowData(y);
		// for each column..
		for (long x=0; x<Width(); x++) {
			// copy alpha value
			pDst[dstOffset] = pSrc[srcOffset];
			// next pixel
			pSrc += srcStep;
			pDst += dstStep;
		}
	}//for(y)

	// success
	return true;
}//CopyAlpha

//-----------------------------------------------------------------------------

/**
 * Flip the image horizontally.
 */
void Image::FlipX() {
	// create a copy of the image
	Image temp(*this);
	// copy rows from temp->this in reverse X order
	long nPixSize = GetPixelSize();
	for (long y=0; y<Height(); y++) {
		BYTE
			*pSrc = temp.GetRowData(y),
			*pDst = GetRowData(y);
		if (!pSrc || !pDst) return;
		// start at end of row
		pSrc += (Width()-1)*nPixSize;
		// copy row in reverse order
		for (long x=0; x<Width(); x++) {
			memcpy(pDst,pSrc, nPixSize);
			pDst+=nPixSize;
			pSrc-=nPixSize;
		}
	}
}//FlipX

//-----------------------------------------------------------------------------

/**
 * Flip the image vertically.
 */
void Image::FlipY() {
	// create a copy of the image
	Image temp(*this);
	// copy rows from temp->this in reverse Y order
	for (long y=0; y<Height(); y++) {
		BYTE
			*pSrc = temp.GetRowData(y),
			*pDst = GetRowData(temp.Height()-y-1);
		if (!pSrc || !pDst) return;
		memcpy(pDst,pSrc, temp.GetRowSize());
	}
}//FlipY

//-----------------------------------------------------------------------------
