// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: FragShader.fsh ********

// File data
static const char _FragShader_fsh[] = 
	"uniform sampler2D  sTexture;\r\n"
	"\r\n"
	"varying lowp    float  SpecularIntensity;\r\n"
	"varying mediump vec2   RefractCoord;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\tlowp vec3 refractColor = texture2D(sTexture, RefractCoord).rgb;\t\r\n"
	"\tgl_FragColor = vec4(refractColor + SpecularIntensity, 1.0);\r\n"
	"}";

// Register FragShader.fsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsh("FragShader.fsh", _FragShader_fsh, 261);

// ******** End: FragShader.fsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: FragShader.fsc ********

// File data
A32BIT _FragShader_fsc[] = {
0x10fab438,0xa9aed146,0x30050100,0x2101,0xa9142cc2,0x0,0x0,0x17030000,0x1000000,0x4000000,0x0,0x18000000,0x10202,0x2a0008,0x1020100,0xa200,0x91301,0x3a010000,0x55535020,0x17,0x12e,0x1,0x0,0x848,0x0,0x2,0x79,0x0,0x0,0x0,0xffffffff,0x0,0x770009,0xffff,0x2,0x0,0x2,0x0,0x0,0x0,0x0,0xfffc0000,0x10003,0x10004,0x0,0x20000,0xffffffff,0x0,0x40000,0x20000,0x30001,0x0,0x1,0x40000,0x20000,0x2,0x20001,0x80018001,0x80018001,0x0,0x0,0x1000004,0x0,0x5fd10,
0x10000,0x80010002,0x80018001,0x8001,0x0,0x0,0x70000,0x60a0007,0x30003,0x30003,0x10001,0x10001,0x40004,0x40004,0x10000,0x30002,0x1,0x20001,0x2,0x20003,0x80018001,0x80018001,0x0,0x0,0x120000,0x80000010,0x1ffea002,0xc04080,0xf002a020,0x1c009180,0x8026020,0x69183,0x0,0x50204201,0x175553,0x1360000,0x10000,0x0,0x9480000,0x0,0x20000,0x790000,0x0,0x80000,0x0,0xffff0000,0xffff,0x90000,0xffff0077,0x20000,0x1,0x20000,0x0,0x0,0x0,0x0,0x0,0x1fffc,0x40000,0x1,0x0,0xffff0002,0x1ffff,0x1,
0x4,0x10002,0x3,0x10000,0x0,0x61201c00,0x91837802,0x4,0x20002,0x10000,0x80010002,0x80018001,0x8001,0x0,0x40000,0x100,0xfd100000,0x5,0x20001,0x80018001,0x80018001,0x0,0x0,0x0,0x70007,0x3060a,0x30003,0x10003,0x10001,0x40001,0x40004,0x4,0x20001,0x10003,0x10001,0x20002,0x30000,0x80010002,0x80018001,0x8001,0x0,0x0,0x100012,0xa0028000,0x40801ffc,0x800000c0,0x9180f000,0xe0030480,0x40811020,0x6,0x400,0x0,0x0,0x803f0000,0x3000000,0x78655473,0x65727574,0x18000000,0x1000003,0x20000,0x1000100,0x65520000,0x63617266,0x6f6f4374,
0x6472,0x50300,0x100,0x2000001,0x300,0x63657053,0x72616c75,0x65746e49,0x7469736e,0x79,0x502,0x1000001,0x10400,0x1,
};

// Register FragShader.fsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_FragShader_fsc("FragShader.fsc", _FragShader_fsc, 823);

// ******** End: FragShader.fsc ********

