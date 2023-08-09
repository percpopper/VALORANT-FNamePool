#pragma once

#include <Windows.h>
#include <string>
#include <Misc/Types.h>
#include <Misc/AllignmentTemplates.h>
#include <Misc/ImSorryForTheQualityOfThis.h>

uint64 BaseAddress = NULL;
class FNamePool* NamePoolData = nullptr;

#define FileName "\\FNamePool_Entries_Log.txt"

#define DecryptWideOffset 0x3A0C4C0
#define DecryptNonWideOffset 0x3A0C450 
#define NamePoolDataOffset 0x9C9FD80

#include <VALORANT/FNamePool.h>
