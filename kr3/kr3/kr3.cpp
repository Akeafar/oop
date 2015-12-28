// kr3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

using namespace std;

typedef int(*functionDLL)(int, int, int, int);
HINSTANCE hDllInstance;
int _tmain(int argc, _TCHAR* argv[])
{

	int x[6];
	hDllInstance= LoadLibrary(L"MYDLL.dll");
	functionDLL fpFunction = (functionDLL)GetProcAddress(hDllInstance, "FuncX");

	int a, b, c;

	a = 10;
	b = 6;
	c = 4;


	for (int i = 0; i < 6; i++)
	{
		x[i] = fpFunction(i, a, b, c);
	}

	for (int i = 0; i < 6; i++)
	{
		cout << x[i] << endl;
	}


	FreeLibrary(hDllInstance);

	return 0;
}

