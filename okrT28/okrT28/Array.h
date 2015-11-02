#pragma once
#include <iostream>
#include "Vec.h"

using namespace std;




template <class Vec>
class Array
{
protected:
	
	
public:
	Vec *arr;
	int arr_size;
	int n;
	int m;
	int buf;
	//Array(void);
	//~Array();

	/*int getM(void);
	int getN(void);

	void setN(int n);
	void setM(int m);
	*/

	Array(void)
	{
		arr = NULL;
		arr_size = 0;
		n = 0;
		m = 0;
	};
	Array(int size)
	{
		arr = new Vec[size];
		arr_size = size;
		for (int i = 0; i < arr_size; i++)
		{
			arr[i] = 0;
		}
	};
	/*Array(Vec *a, int size)
	{
		arr = new Vec[size]; //LOL TEPER' VSE OK
		for (int i = 0; i < size; i++)
		{
			arr[i] = a[i];
			arr_size = size;
		}
	};
	Array(Array& a_)
	{
		arr = new Vec[a_.arr_size];
		arr_size = a_.arr_size;
		for (int i = 0; i < arr_size; i++)
		{
			arr[i] = a_.arr[i];
		}
	};*/
	// destructor
	~Array(void)
	{
		arr_size = 0;
	};
	// functions

	void setRandom()
	{
		for (int i = 0; i < arr_size; i++)
		{
			arr[i] = rand() % 8 + 1;
		}
	};
	void print()
	{
		
		for (int i = 0; i < arr_size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	//void hz();
	void Array::setM(int m)
	{
		this->m = m;
	}

	void Array::setN(int n)
	{
		this->n = n;
	}


	int Array::getM(void)
	{
		return this->m;
	}


	int Array::getN(void)
	{
		return this->n;
	}
	
};