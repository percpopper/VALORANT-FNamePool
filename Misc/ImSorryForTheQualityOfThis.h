#pragma once
#include <stdio.h>
#include <fstream>
#include <filesystem>

class ImSorryForTheQualityOfThis {
public:
	ImSorryForTheQualityOfThis(std::string FileName, bool Append = false)
	{
		std::filesystem::path Path = std::filesystem::current_path();
		Path += FileName;
		LogFile.open(Path, Append ? std::fstream::out : std::fstream::out | std::fstream::app);
	}

	inline void CloseLog() 
	{
		LogFile.close();
	}

	void LogToFile(std::string ToLog) 
	{
		LogFile << ToLog << std::endl;
	}

	void LogToFile(std::string ToLog, void* Pointer)
	{
		LogFile << ToLog << "0x" << std::hex << Pointer << std::endl;
	}

	void LogToFile(std::string ToLog, uint64 Pointer)
	{
		LogFile << ToLog << "0x" << std::hex << reinterpret_cast<void*>(Pointer) << std::endl;
	}

private:
	std::ofstream LogFile;
};


