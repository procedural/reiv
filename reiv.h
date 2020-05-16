#pragma once

void reivMark(const char * group64Chars, const char * label64Chars);
void reivWindow(unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
void reivPixels(unsigned pixelsIndex, unsigned x, unsigned y, unsigned w, unsigned h, const unsigned char * rgbaFace0, const unsigned char * rgbaFace1, const unsigned char * rgbaFace2, const unsigned char * rgbaFace3, const unsigned char * rgbaFace4, const unsigned char * rgbaFace5);
void reivMeshAos(unsigned meshIndex, unsigned trianglesFirst, unsigned trianglesCount, const float4 * triplets0, const float4 * triplets1, const float4 * triplets2, const float4 * triplets3);
void reivMeshSoa(unsigned meshIndex, unsigned trianglesFirst, unsigned trianglesCount, const float * triplets0x, const float * triplets0y, const float * triplets0z, const float * triplets0w, const float * triplets1x, const float * triplets1y, const float * triplets1z, const float * triplets1w, const float * triplets2x, const float * triplets2y, const float * triplets2z, const float * triplets2w, const float * triplets3x, const float * triplets3y, const float * triplets3z, const float * triplets3w);
void reivPipeline(unsigned pipelineIndex, const void * state);
void reivVariables(unsigned variablesIndex, unsigned values32BitCount, const void * values32Bit);
void reivDraw(unsigned count, unsigned * meshIndexes, unsigned * pipelineIndexes, unsigned * instancesCounts);
void reivReadback(unsigned x, unsigned y, unsigned w, unsigned h, unsigned char * outRgba);
void reivPresent(void);
void reivDestroyEverything(void);
