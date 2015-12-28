#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

void loadSomeFunc(char* func) {
	HINSTANCE hLib = LoadLibrary(L"LR15_Dll.dll");

	if (hLib == NULL)
	{
		cout << "Unable to load library!" << endl;
		_getch();
		return;
	}

	FARPROC loadFunc = (FARPROC)GetProcAddress((HMODULE)hLib, func); // replacing previous string
	if (loadFunc == NULL)
	{
		cout << "Unable to load function(s)." << endl;
		FreeLibrary((HMODULE)hLib);
		_getch();
		return;
	}
	loadFunc();
	FreeLibrary((HMODULE)hLib);
	_getch();
}

void main()
{
	loadSomeFunc("?myGetLogicalDrives@@YA_NXZ");
}