#pragma once
#include <iostream>
#include "Stack.h"
using namespace std;

template <class T>
class Array
{
public:
	T *arr;
	int arr_size;


	Array(void)
	{
		arr = new T;
		arr_size = 0;
	}

	
	Array (int size)
	{
		arr = new T[size];
		arr_size = size;
		//*arr[size] = NULL;
	}

	~Array()
	{

	}

	
	void add(T data)
	{
		arr[arr_size] = data;
		arr_size++;
	}

	void set(T data)
	{


	}
	
	/*friend ostream& operator <<(ostream& out, Array& a)
	{
		//for (int i = 0; i<a_.arr_size; i++)
		//	out << a_.arr[i] << " ";
		//out << endl;
		//for (int i = 0; i < a.arr_size; i++)
		{
		//	out << a.arr[i];
		}
		//a.printstk();
		Stack *arr = new Stack;

		out << a.arr;
		return out;
	}
	*/

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

	void prnt()
	{	
		
	
		//Stack *arr = new Stack[arr_size];
		for (int i = 0; i < arr_size; i++)
		{
			arr[i].printstk();
		}
		cout << endl;
	}

	/*
	Array<Stack> operator +(Array<Stack> arr2)
	{
		int x;
		Array<Stack> newArr(arr_size);
		Stack *qwe = new Stack;

		for (int i = 0; i < arr_size; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				x = this->arr[i].get_el(j) + arr2.arr[i].get_el(j);
				//newArr.arr[i].inStack(x, &newArr);
				qwe.inStack(x, &qwe);
			}
		
		}
		newArr.add(qwe);
		return newArr;
	}
	*/

	Array<Stack> operator +(Array<Stack> arr2)
	{
		int x;
		Array<Stack> newArr(arr_size);
		//Stack *qwe = new Stack;
		int min_arr_size=arr_size;
		if (arr_size > arr2.arr_size)
		{
			min_arr_size = arr2.arr_size;
		}
		for (int i = 0; i < min_arr_size; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				x = this->arr[i].buf[j] + arr2.arr[i].buf[j];
				//newArr.arr[i].inStack(x, &newArr);
				//qwe.inStack(x, &qwe);
				this->arr[i].set_el(j, x);
				
			}
			
		}
		//newArr.add(qwe);

		return *this;
		//return newArr;
	}

	/*
	Array<T> operator << (T qwe)
	{
		Stack *arr = new Stack[arr_size];
		
			arr[i].printstk();
		
		cout << endl;

	}
	*/
	/*
	Array<Stack> operator << (int arr_size)
	{
		Stack *arr = new Stack[arr_size];
		arr[arr_size].printstk();

	}
	*/

	

	void operator [] (int arrInx)
	{
		//arr_size = arrInx;
		//Stack *arr = new Stack[arrInx];
		//arr[arr_size].printstk();

		if ((arrInx > 0 && arrInx) < this->arr_size)
		{
			  this->arr[arrInx].printstk();
			//return arr[arrInx - 1];
		}
		else
		{
			cout << "Trouble with index" << endl;
			//return 0;

		}
	}


	bool operator != (Array<Stack> arrr2)
	{
		if (this->arr_size == arrr2.arr_size)
		{
			for (int i = 0; i < arr_size; i++)
			{
				for (int k = 0; k < 4; k++)
				{
					if (this->arr[i].get_el(k) != arrr2.arr[i].get_el(k))
					{
						return false;
					}
				}
				
			}
			return true;
		}
		else
		{
			return false;
		}
	}

	/*bool operator > (Array arr2)
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


	}*/

	bool operator > (Array<Stack> arr2)
	{
		int buf;

		if (this->arr_size >= arr2.arr_size)
		{
			for (int i = 0; i < arr2.arr_size; i++)
			{
				for (int k = 0; k < 4; k++)
				{
					buf = arr2.arr[i].get_el(k);
					{
						for (int j = 0; j < arr_size; i++)
						{
							if (buf == this->arr[i].get_el(k))
							{
								break;
							}
							return false;

						}
					}
				}
			}
			return true;
		}


	}



};