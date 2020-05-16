#pragma once

void reivMark(const char * group64Chars, const char * label64Chars);
void reivWindow(unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
void reivPixels(unsigned pixelsIndex, unsigned x, unsigned y, unsigned w, unsigned h, const unsigned char * rgbaFace0, const unsigned char * rgbaFace1, const unsigned char * rgbaFace2, const unsigned char * rgbaFace3, const unsigned char * rgbaFace4, const unsigned char * rgbaFace5);
void reivMeshAos(unsigned meshIndex, unsigned vertexesFirst, unsigned vertexesCount, const float4 * attribute0, const float4 * attribute1, const float4 * attribute2, const float4 * attribute3);
void reivMeshSoa(unsigned meshIndex, unsigned vertexesFirst, unsigned vertexesCount, const float * attribute0x, const float * attribute0y, const float * attribute0z, const float * attribute0w, const float * attribute1x, const float * attribute1y, const float * attribute1z, const float * attribute1w, const float * attribute2x, const float * attribute2y, const float * attribute2z, const float * attribute2w, const float * attribute3x, const float * attribute3y, const float * attribute3z, const float * attribute3w);
void reivPipeline(unsigned pipelineIndex, const void * state);
void reivVariables(unsigned variablesIndex, unsigned values32BitCount, const void * values32Bit);
void reivDraw(unsigned count, const unsigned * meshIndexes, const unsigned * pipelineIndexes, const unsigned * instancesCounts);
void reivReadback(unsigned x, unsigned y, unsigned w, unsigned h, unsigned char * outRgba);
void reivPresent(void);
void reivDestroyEverything(void);
