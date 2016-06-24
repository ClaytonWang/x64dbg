#pragma once
#include "_global.h"

void* EncodeMapGetBuffer(duint addr, bool create = false);
void EncodeMapReleaseBuffer(void* buffer);
ENCODETYPE EncodeMapGetType(duint addr, duint codesize);
duint EncodeMapGetSize(duint addr, duint codesize);
void EncodeMapDelSegment(duint addr);
void EncodeMapDelRange(duint addr, duint size);
bool EncodeMapSetType(duint addr, duint size, ENCODETYPE type);
void EncodeMapDelRange(duint Start, duint End);
void EncodeMapCacheSave(JSON Root);
void EncodeMapCacheLoad(JSON Root);
void EncodeMapClear();
duint GetEncodeTypeSize(ENCODETYPE type);