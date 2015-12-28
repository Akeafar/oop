#include "windows.h"

extern "C"_declspec(dllexport) int FuncX(int x, int a, int b, int c)
{
	int res = 0;
	res = (x*x*a) + (b*x) + c;
	return res;


}