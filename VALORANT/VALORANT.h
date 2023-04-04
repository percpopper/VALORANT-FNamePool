#pragma once

#include <Windows.h>
#include <string>
#include <Misc/Types.h>
#include <Misc/AllignmentTemplates.h>
#include <Misc/ImSorryForTheQualityOfThis.h>

uint64 BaseAddress = NULL;
class FNamePool* NamePoolData = nullptr;

#define FileName "\\FNamePool_Entries_Log.txt"

#define DecryptWideOffset 0x311C250
#define DecryptNonWideOffset 0x311C1E0 
#define NamePoolDataOffset 0x8A7FD80

#include <VALORANT/FNamePool.h>
