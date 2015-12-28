#pragma once
#include <iostream>
#include "stack.h"
using namespace std;

template <class Stk>
class Array
{
protected:
	//int *arr;
	Stk *arr;
	
	int arr_size;
public:

	Array(void)
	{
		arr = NULL;
		arr_size = 0;
	}

	Array(int size)
	{
		arr = new Stk[size];
		arr_size = size;
	}

	~Array()
	{

	}

	void setRandom()
	{
		for (int i = 0; i < arr_size; i++)
		{
			arr[i] = rand() % 8 + 1;
		}
	}


	void set()
	{
		for (int i = 0; i < arr_size; i++)
		{
			arr[i] = i;
		}
	}

	void print()
	{
		for (int i = 0; i < arr_size; i++)
		{
			//cout << arr[i] << " ";
			arr[i];
		}
		cout << endl;
		//Stk::print();

	}

	Array operator +(Array arr2)
	{
		Array newArr(arr_size);
		for (int i = 0; i < arr_size; i++)
		{
			newArr.arr[i].counter = arr[i].counter + arr2.arr[i].counter;
		}
		return newArr;
	}

	void operator [] (int arrInx)
	{
		/*if (arrInx > 0 && arrInx < arr_size)
		{
			//return arr[arrInx -1];
		}
		else
		{
			cout << "Trouble with index" << endl;
			return 0;

		}*/
		arr[arrInx].print();
	}

	bool operator != (Array arr2)
	{
		if (arr_size == arr2.arr_size)
		{
			for (int i = 0; i < arr_size; i++)
			{
				if (arr[i].counter != arr2.arr[i].counter)
				{
					return false;
				}
			}
			return true;
		}
	}

	bool operator > (Array arr2)
	{
		int buf;

		if (arr_size >= arr2.arr_size)
		{
			for (int i = 0; i < arr2.arr_size; i++)
			{
				buf = arr2.arr[i].counter;
				{
					for (int j = 0; j < arr_size; i++)
					{
						if (buf == arr[i].counter)
						{
							break;
						}
						return false;

					}
				}
			}
			return true;
		}


	}



};