#pragma once
#include <iostream>
#include "Stack.h"


using namespace std;

template<class I>
class Array
{
public:
	I *arr;
	int arr_size;
public:


	Array(int size)
	{
		arr = new I[size];
		arr_size = size;
		for (int i = 0; i < arr_size; i++)
		{
			//arr[i] = 0;
		}
	};
	Array(const Array &obj)
	{
		arr = new I[obj.arr_size];
		arr = obj.arr;
		arr_size = obj.arr_size;
	};
	Array(int *a, int size)
	{
		arr = new I[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = a[i];
			arr_size = size;
		}
	};
	Array(Array& a_)
	{
		arr = new I[a_.arr_size];
		arr_size = a_.arr_size;
		for (int i = 0; i < arr_size; i++)
		{
			arr[i] = a_.arr[i];
		}
	};





	Array operator +(Array arr2)
	{
		Array newArr(arr_size);
		for (int i = 0; i < arr_size; i++)
		{	
			newArr.arr[i] = arr[i] + arr2.arr[i];
		}
		return newArr;
	}



	
	int operator [] (int arrInx)
	{
		if (arrInx > 0 && arrInx < arr_size)
		{
			return arr[arrInx-1];
		}
		else
		{
			cout << "Trouble with index" << endl;
			return 0;
			 
		}
	}
	
	bool operator != (Array arr2)
	{
		if (arr_size == arr2.arr_size)
		{
			for (int i = 0; i < arr_size; i++)
			{
				if (arr[i] != arr2.arr[i])
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
				buf = arr2.arr[i];
				{
					for (int j = 0; j < arr_size; i++)
					{
						if (buf == arr[i])
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

	
	Array(void)
	{
		arr = NULL;
		arr_size = 0;
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

	 I operator << (int MyStk)
	{
		/*Stk *temp = MyStk->Head;
		while (temp != NULL)
		{
		cout << temp->x << " ";
		temp = temp->Next;
		}
		*/
		cout << "qwe" << endl;
	}

	void print()
	{
		for (int i = 0; i < arr_size; i++)
		{
			cout << arr[i];
		}
		cout << endl;
	}
};