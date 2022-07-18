#pragma once

#include <Windows.h>
#include <string>
#include <Misc/Types.h>
#include <Misc/AllignmentTemplates.h>
#include <Misc/ImSorryForTheQualityOfThis.h>

uint64 BaseAddress = NULL;
class FNamePool* NamePoolData = nullptr;

#define FileName "\\FNamePool_Entries_Log.txt"

#define DecryptWideOffset 0x2DBF0A0
#define DecryptNonWideOffset 0x2DBF030 
#define NamePoolDataOffset 0x867DC40 

#include <VALORANT/FNamePool.h>
