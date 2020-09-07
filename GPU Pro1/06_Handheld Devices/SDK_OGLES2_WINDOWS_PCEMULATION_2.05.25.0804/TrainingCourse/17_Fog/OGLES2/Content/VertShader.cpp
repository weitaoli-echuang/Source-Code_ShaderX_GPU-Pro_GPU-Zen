// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: VertShader.vsh ********

// File data
static const char _VertShader_vsh[] = 
	"attribute highp vec4  inVertex;\r\n"
	"attribute highp vec3  inNormal;\r\n"
	"attribute highp vec2  inTexCoord;\r\n"
	"\r\n"
	"uniform highp   mat4  MVPMatrix;\r\n"
	"uniform highp   mat4  ModelViewMatrix;\r\n"
	"uniform highp vec3  LightDirection;\r\n"
	"// fog uniforms\r\n"
	"uniform lowp    int    iFogMode;\r\n"
	"uniform highp float  FogDensity;\r\n"
	"uniform highp float  FogEnd;\r\n"
	"uniform highp float  FogRcpEndStartDiff;\r\n"
	"\r\n"
	"varying mediump vec2  TexCoord;\r\n"
	"varying lowp    vec3  DiffuseLight;\r\n"
	"varying lowp    vec3  FogIntensity;\r\n"
	"\r\n"
	"void main()\r\n"
	"{\r\n"
	"\t// transform position to view space as we need the distance to the eye for fog\r\n"
	"\thighp vec3 viewPos = vec3(ModelViewMatrix * inVertex);\r\n"
	"\thighp float eyeDist = length(viewPos);\r\n"
	"\t\r\n"
	"\t// transform vertex position\r\n"
	"\tgl_Position = MVPMatrix * inVertex;\r\n"
	"\t\r\n"
	"\t// texcoords pass through\r\n"
	"\tTexCoord = inTexCoord;\r\n"
	"\r\n"
	"\t// calculate lighting\r\n"
	"\t// We use a directional light with direction given in model space\r\n"
	"\tlowp float DiffuseIntensity = dot(inNormal, normalize(LightDirection));\r\n"
	"\t\r\n"
	"\t// clamp negative values and add some ambient light\r\n"
	"\tDiffuseLight = vec3(max(DiffuseIntensity, 0.0) * 0.5 + 0.5);\r\n"
	"\r\n"
	"\t\r\n"
	"\t// select fog function. 1 is linear, 2 is exponential, 3 is exponential squared, 0 is no fog.\r\n"
	"\thighp float fogIntensity = 1.0;\r\n"
	"\tif(iFogMode == 1)\r\n"
	"\t{\r\n"
	"\t\tfogIntensity = (FogEnd - eyeDist) * FogRcpEndStartDiff;\r\n"
	"\t}\r\n"
	"\telse if(iFogMode >= 2)\r\n"
	"\t{\r\n"
	"\t\thighp float scaledDist = eyeDist * FogDensity;\r\n"
	"\t\tif (iFogMode == 3)\r\n"
	"\t\t{\r\n"
	"\t\t\tscaledDist *= scaledDist;\r\n"
	"\t\t}\r\n"
	"\t\tfogIntensity = exp2(-scaledDist);\r\n"
	"\r\n"
	"\t}\r\n"
	"\r\n"
	"\t// clamp the intensity within a valid range\r\n"
	"\tFogIntensity = vec3(clamp(fogIntensity, 0.0, 1.0));\r\n"
	"}\r\n";

// Register VertShader.vsh in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsh("VertShader.vsh", _VertShader_vsh, 1604);

// ******** End: VertShader.vsh ********

// This file was created by Filewrap 1.1
// Little endian mode
// DO NOT EDIT

#include "../PVRTMemoryFileSystem.h"

// using 32 bit to guarantee alignment.
#ifndef A32BIT
 #define A32BIT static const unsigned int
#endif

// ******** Start: VertShader.vsc ********

// File data
A32BIT _VertShader_vsc[] = {
0x10fab438,0x3c323d99,0x30050100,0x2101,0xa9142cc2,0x0,0x0,0x87070000,0x0,0x4000000,0x0,0x39000000,0x20303,0x0,0x1010000,0x2,0x0,0xca040000,0x55535020,0x17,0x4be,0x1,0x0,0x80c,0x0,0x2,0x79,0x0,0x8,0x0,0xffffffff,0x0,0x76000a,0xffff,0xb,0x0,0x290000,0x0,0x0,0x0,0x0,0xfffc0000,0x0,0x0,0x0,0x20000,0xffffffff,0x270006,0x1000b,0x20,0x10000,0x10021,0x10000,0x20022,0x20000,0x3002e,0x20000,0x3002f,0x30010,0x4002b,0x10000,0x50000,0x10000,0x60001,
0x10000,0x70002,0x10000,0x80004,0x10000,0x90005,0x10000,0xa0006,0x10000,0xb0008,0x10000,0xc0009,0x10000,0xd000a,0x10000,0xe000c,0x10000,0xf000d,0x10000,0x10000e,0x10000,0x110010,0x10000,0x120011,0x10000,0x130012,0x10000,0x140013,0x10000,0x150014,0x10000,0x160015,0x10000,0x170016,0x10000,0x180017,0x10000,0x190018,0x10000,0x1a0019,0x10000,0x1b001a,0x10000,0x1c001b,0x10000,0x1d001c,0x10000,0x1e001d,0x10000,0x1f001e,0x10000,0x20001f,0x10000,0x210034,0x10000,0x220035,0x10000,0x230036,0x20000,0x24003a,0x20000,0x24003b,0x20010,0x25003e,
0x20000,0x25003f,0x858b0010,0x1406a602,0x6300080,0x1006a603,0x18000080,0x12028600,0x18300880,0x10069183,0x5300081,0x1006914c,0x5b00081,0x1006916c,0x73f0081,0x40000,0x20000,0x2,0x20001,0x80008000,0x80008000,0x0,0x0,0x1000004,0x0,0x2fd10,0x20000,0x80000002,0x80048004,0x8001,0x0,0x40000,0x4010000,0x4,0xf00fa10,0x3001e060,0x210a0,0x30000,0x80010002,0x80018001,0x8001,0x0,0x40000,0x0,0x1010101,0xfa100000,0xa1400200,0x28a11001,0xb040040a,0x10a02002,0x2,0x2000a,0x80018000,0x80048004,0x0,0x0,0x4,0x10001,0x10001,0x1,0x0,0x10404,0xfa100000,0xa0040004,
0x408a1dff,0xd0002030,0x91bb8e03,0xf01f274e,0x88889103,0xe0870000,0x40831fbd,0xe0a70000,0x40831fbd,0xe0c70000,0x40831fbd,0x60a01a00,0x28831002,0xd003adb4,0x488d1181,0xf0200e1d,0x10a83205,0x2,0x2000b,0x80018000,0x80038004,0x0,0x0,0x10005,0x10001,0x10001,0x10000,0x0,0x4030000,0x1,0x790fa10,0x605f040,0x49133898,0x606f080,0x8a963882,0x606f080,0xcc193882,0x606f080,0x813882,0x1402f09f,0xd910083,0x3205f000,0x410a0,0x1002e01f,0x82,0x12028000,0x880,0x10028000,0x15ac0880,0x1286f0a0,0x30180,0x0,0x400000,0x3f900,0x2,0x20002,0x80018000,0x80038004,0x0,0x5d0000,0x4,0x5d,0xfb100000,0xf003adc0,
0x488c1901,0x3,0x0,0xfd000040,0x20005,0x20000,0x80000002,0x80048001,0x8003,0x0,0x40000,0x0,0x0,0x16b0fb10,0x1006d000,0x20081,0x20000,0x80000002,0x80048001,0x8003,0x0,0x4005f,0x5f0000,0x0,0xadc0fb10,0x1181f003,0x2488c,0x30000,0x80000002,0x80048001,0x8003,0x0,0x40000,0x0,0x0,0xfb100000,0x90000030,0x1811006,0x80a00000,0x8801622,0x4,0x40005,0x30000,0x2,0x20003,0x80018000,0x80038004,0x0,0x0,0x4,0x0,0x0,0x2b0fb10,0x12029000,0x341881,0x10029000,0x21881,0x20000,0x80010002,0x80008000,0x8001,0x0,0x40000,0x10000,
0x100,0xfa10,0x2001a0e0,0x628a1,0x40000000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x803f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x3f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x803f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x4040,0x6f4d0e00,0x566c6564,0x4d776569,0x69727461,0x78,0x316,0x1000001,0xff100000,0x690000ff,0x7265566e,0x786574,0x4050000,0x10000,0x100,0xf0004,0x5f6c6700,0x69736f50,0x6e6f6974,0x5010000,0x1000005,0x10000,0xf000400,0x564d0000,0x74614d50,0x786972,0x3160000,0x10000,0x10000100,0xffff10,0x78655400,0x726f6f43,0x64,0x503,0x1000001,0x20800,0x69000003,0x7865546e,0x726f6f43,0x64,0x403,0x1000001,0x40400,0x4c000003,0x74686769,0x65726944,0x6f697463,0x6e,0x304,0x1000001,0x32000,0x69000007,0x726f4e6e,0x6c616d,0x4040000,0x10000,0x8000100,0x70004,0x66694400,0x65737566,
0x6867694c,0x74,0x504,0x1000001,0x30000,0x69000007,0x4d676f46,0x65646f,0x3060000,0x10000,0x2f000100,0x10004,0x676f4600,0x646e45,0x3020000,0x10000,0x34000100,0x10001,0x676f4600,0x45706352,0x7453646e,0x44747261,0x666669,0x3020000,0x10000,0x35000100,0x10001,0x676f4600,0x736e6544,0x797469,0x3020000,0x10000,0x36000100,0x10001,0x676f4600,0x65746e49,0x7469736e,0x79,0x504,0x1000001,0x30400,0x7,
};

// Register VertShader.vsc in memory file system at application startup time
static CPVRTMemoryFileSystem RegisterFile_VertShader_vsc("VertShader.vsc", _VertShader_vsc, 1959);

// ******** End: VertShader.vsc ********

