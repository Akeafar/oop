#pragma once
#include <iostream>

using namespace std;


class Array
{
protected:
	int *arr;
	int arr_size;
public:
	Array(void);
	Array(int size);
	void setRandom();
	void set();
	void print();
	~Array(void);
	

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