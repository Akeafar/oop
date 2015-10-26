#include "Arr.h"
#include <iostream>

using namespace std;

Array::Array(void)
{	
	arr = NULL;
	arr_size = 0;
}

Array::Array(int size)
{
	arr = new int[size];
	arr_size = size;
}

Array::~Array()
{

}

void Array::setRandom()
{
	for (int i = 0; i < arr_size; i++)
	{
		arr[i] = rand() % 8 + 1;
	}
}


void Array::set()
{
	for (int i = 0; i < arr_size; i++)
	{
		arr[i] = i;
	}
}

void Array::print()
{
	for (int i = 0; i < arr_size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}