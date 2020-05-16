#pragma once

void reivScreen(unsigned x, unsigned y, unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
void reivPixels(unsigned pixelsIndex, unsigned wh, const unsigned char * rgba);
void reivMesh(unsigned meshIndex, unsigned trianglesFirst, unsigned trianglesCount, const float4 * triplet0, const float4 * triplet1, const float4 * triplet2, const float4 * triplet3);
void reivPipeline(unsigned pipelineIndex, const void * state);
void reivVariables(unsigned variablesCount, const float4 * variables);
void reivDraw(unsigned count, unsigned * meshIndexes, unsigned * pipelineIndexes, unsigned * instancesCounts);
void reivReadback(unsigned x, unsigned y, unsigned w, unsigned h, unsigned char * outRgba);
void reivPresent(void);
void reivDestroyEverything(void);
