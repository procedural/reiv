#pragma once

void reivWindow(unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
void reivPixels(unsigned pixelsIndex, unsigned wh, const unsigned char * rgbaFace0, const unsigned char * rgbaFace1, const unsigned char * rgbaFace2, const unsigned char * rgbaFace3, const unsigned char * rgbaFace4, const unsigned char * rgbaFace5);
void reivMesh(unsigned meshIndex, unsigned trianglesFirst, unsigned trianglesCount, const float4 * triplets0, const float4 * triplets1, const float4 * triplets2, const float4 * triplets3);
void reivPipeline(unsigned pipelineIndex, const void * state);
void reivVariables(unsigned variablesIndex, unsigned values32BitCount, const void * values32Bit);
void reivDraw(unsigned count, unsigned * meshIndexes, unsigned * pipelineIndexes, unsigned * instancesCounts);
void reivReadback(unsigned x, unsigned y, unsigned w, unsigned h, unsigned char * outRgba);
void reivPresent(void);
void reivDestroyEverything(void);
