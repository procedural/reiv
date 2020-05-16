#pragma once

typedef struct ReivBatchPixels {
  unsigned pixelsIndex;
  unsigned x;
  unsigned y;
  unsigned w;
  unsigned h;
  const unsigned char * rgba[6];
} ReivBatchPixels;

typedef struct ReivBatchMeshAos {
  unsigned meshIndex;
  unsigned vertexesFirst;
  unsigned vertexesCount;
  const float * xyzw[4];
} ReivBatchMeshAos;

typedef struct ReivBatchMeshSoa {
  unsigned meshIndex;
  unsigned vertexesFirst;
  unsigned vertexesCount;
  const float * x[4];
  const float * y[4];
  const float * z[4];
  const float * w[4];
} ReivBatchMeshSoa;

typedef struct ReivBatchPipeline {
  unsigned pipelineIndex;
  const void * state;
} ReivBatchPipeline;

typedef struct ReivBatchDraw {
  unsigned meshIndex;
  unsigned pipelineIndex;
  unsigned pixelsIndexes[4];
  unsigned instancesCount;
} ReivBatchDraw;

typedef struct ReivBatchReadback {
  unsigned x;
  unsigned y;
  unsigned w;
  unsigned h;
  unsigned char * outRgba;
} ReivBatchReadback;

void reivMark(const char * group64Chars, const char * label64Chars);
void reivWindow(unsigned w, unsigned h, const void * displayOrHinstance, const void * windowOrHwnd);
void reivResources(unsigned meshAosBatchesCount, const ReivBatchMeshAos * meshAosBatches, unsigned meshSoaBatchesCount, const ReivBatchMeshSoa * meshSoaBatches, unsigned pixelsBatchesCount, const ReivBatchPixels * pixelsBatches, unsigned pipelineBatchesCount, const ReivBatchPipeline * pipelineBatches);
void reivVariables(unsigned variablesIndex, unsigned values32BitCount, const void * values32Bit);
void reivDraw(unsigned batchesCount, const ReivBatchDraw * batches);
void reivReadback(unsigned batchesCount, ReivBatchReadback * batches);
void reivPresent(void);
void reivDestroyEverything(void);
