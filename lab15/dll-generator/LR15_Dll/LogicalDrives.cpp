#include "stdafx.h"
#include "LogicalDrives.h"
#include <Windows.h>
#include <iostream>
using namespace std;

extern "C++" __declspec(dllexport)
bool myGetLogicalDrives() {

	int n;
	char dd[4];
	DWORD dr = GetLogicalDrives();

	for (int i = 0; i < 26; i++)
	{
		n = ((dr >> i) & 0x00000001);
		if (n == 1)
		{
			dd[0] = char(65 + i); dd[1] = ':'; dd[2] = '\\'; dd[3] = 0;
			cout << "Available disk drives : " << dd << endl;
		}
	}
}