#pragma once
#include <iostream>

using namespace std;


class Array
{
public:
	int *arr;
	int arr_size;


	Array(void)
	{
		arr = NULL;
		arr_size = 0;
	}

	Array(int size)
	{
		arr = new int[size];
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
			cout << arr[i] << " ";
		}
		cout << endl;
	}



	Array operator +(Array arr2)
	{
		Array newArr(arr_size);
		for (int i = 0; i < arr_size; i++)
		{	
			newArr.arr[i] = arr[i]+ arr2.arr[i];
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

	

};