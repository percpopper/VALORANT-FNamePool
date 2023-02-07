#pragma once

#include <Windows.h>
#include <string>
#include <Misc/Types.h>
#include <Misc/AllignmentTemplates.h>
#include <Misc/ImSorryForTheQualityOfThis.h>

uint64 BaseAddress = NULL;
class FNamePool* NamePoolData = nullptr;

#define FileName "\\FNamePool_Entries_Log.txt"

#define DecryptWideOffset 0x318ED00
#define DecryptNonWideOffset 0x318EC90 
#define NamePoolDataOffset 0x8F5E2C0

#include <VALORANT/FNamePool.h>
