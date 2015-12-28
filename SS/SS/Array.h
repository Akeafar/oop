#pragma once
#include <iostream>

using namespace std;

template<typename T>
class Array
{
protected:
	T *arr;
	int arr_size;
public:
	/*Array(void);
	Array(int size);
	void setRandom();
	void set();
	void print();
	~Array(void);
	*/

	/*Array::Array(void)
	{
		arr = NULL;
		arr_size = 0;
	}

	Array::Array(int size)
	{
		arr = new T[size];
		arr_size = size;
	}*/

	Array(int size)
	{
		arr = new T[size];
		arr_size = size;
		for (int i = 0; i < arr_size; i++)
		{
			arr[i] = 0;
		}
	};
	Array(const Array &obj)
	{
		arr = new T[obj.arr_size];
		arr = obj.arr;
		arr_size = obj.arr_size;
	};
	Array(int *a, int size)
	{
		arr = new T[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = a[i];
			arr_size = size;
		}
	};
	Array(Array& a_)
	{
		arr = new T[a_.arr_size];
		arr_size = a_.arr_size;
		for (int i = 0; i < arr_size; i++)
		{
			arr[i] = a_.arr[i];
		}
	};







	Array::~Array()
	{
		arr_size = 0;
	}

	void Array::setRandom()
	{
		for (int i = 0; i < arr_size; i++)
		{
			this->arr[i] = rand() % 8 + 1;
		}
	}


	void Array::set()
	{
		for (int i = 0; i < arr_size; i++)
		{
			this->arr[i] = i;
		}
	}

	T Array::get(int val)
	{
		
		return this->arr[val];
		
	}

	void Array::print()
	{
		for (int i = 0; i < arr_size; i++)
		{
			cout << this->arr[i] << " ";
		}
		cout << endl;
	}

	bool operator == (Array arrayB)
	{
		if (arrayB.arr_size == arr_size)
		{
			for (int i = 0; i < arr_size; i++)
			{
				if (arr[i] != arrayB.arr[i])
				{
					return false;
				}
			}
			return true;
		}
		else
		{
			return false;
		}
	}



	Array operator +(Array arr2)
	{
		Array newArr(arr_size);
		for (int i = 0; i < arr_size; i++)
		{
			newArr.arr[i] = this->arr[i] + arr2.arr[i];
		}
		return newArr;
	}

	int operator [] (int arrInx)
	{
		if (arrInx > 0 && arrInx < arr_size)
		{
			return this->arr[arrInx - 1];
		}
		else
		{
			cout << "Trouble with index" << endl;
			return 0;

		}
	}

	int operator << (Array<T> arr)
	{
		for (int i; i < arr_size; i++){
			return this->arr[i];
		}
			
		
	}



	bool operator != (Array arr2)
	{
		if (arr_size == arr2.arr_size)
		{
			for (int i = 0; i < arr_size; i++)
			{
				if (this->arr[i] != arr2.arr[i])
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
						if (buf == this->arr[i])
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