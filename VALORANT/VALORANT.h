#pragma once

#include <Windows.h>
#include <string>
#include <Misc/Types.h>
#include <Misc/AllignmentTemplates.h>
#include <Misc/ImSorryForTheQualityOfThis.h>

uint64 BaseAddress = NULL;
class FNamePool* NamePoolData = nullptr;

#define FileName "\\FNamePool_Entries_Log.txt"

#define DecryptWideOffset 0x313DDD0
#define DecryptNonWideOffset 0x313DD60 
#define NamePoolDataOffset 0x8AC0E00

#include <VALORANT/FNamePool.h>
