#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "memory.h"

typedef enum
{
    OP_RETURN,
} OpCode;

typedef struct
{
    // 新增部分开始
    int count;
    int capacity;
    // 新增部分结束
    uint8_t *code;
} Chunk;
void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk *chunk, uint8_t byte);
#endif