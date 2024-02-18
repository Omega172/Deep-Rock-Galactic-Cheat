#pragma once
#include <algorithm>
#include <cctype>
#include <string>
#include <Windows.h>
#include <TlHelp32.h>

namespace Utils
{
	inline std::string ToLower(std::string str)
	{
		std::transform(str.begin(), str.end(), str.begin(),
			[](unsigned char c) { return std::tolower(c); });

		return str;
	}

	inline DWORD GetProcId(const char* procName)
	{
		DWORD procId = 0;
		HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		if (hSnap != INVALID_HANDLE_VALUE)
		{
			PROCESSENTRY32 procEntry;
			procEntry.dwSize = sizeof(procEntry);

			if (Process32First(hSnap, &procEntry))
			{
				do
				{
					if (!_stricmp(procEntry.szExeFile, procName))
					{
						procId = procEntry.th32ProcessID;
						break;
					}
				} while (Process32Next(hSnap, &procEntry));
			}
		}
		CloseHandle(hSnap);
		return procId;
	}
}