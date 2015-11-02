#pragma once
#include <iostream>
#define NIL 0x00000000

template <class T>
class Vec
{
protected:
	int v_size;
	T * v_vector;
	int v_error;
	int n;
	int m;
public:

	

	enum
	{
		e_no_error, e_memory_full, e_out_of_range
	};
	Vec(void)
	{
		v_vector = NIL;
		v_size = 0;
		v_error = e_no_error;
	};
	Vec(int size, ...)
	{
		v_vector = new T[size];
		v_size = size;
		int* marker = &size;
		marker++;
		while (size != 0)
		{
			v_vector[v_size - size] = *marker;
			marker++;
			size--;
		}
		v_error = e_no_error;
	};
	~Vec(void)
	{
		delete[] v_vector;
	};
	int getError(void)
	{
		return v_error;
	};
	int getSize(void)
	{
		return v_size;
	};
	bool searchElement(int value)
	{
		for (int i = 0; i < v_size; i++)
		{
			if (v_vector[i] == value)
			{
				return true;
			}
		}
		return false;
	};
	void setRandomAll(void)
	{
		for (int i = 0; i < v_size; i++)
		{
			v_vector[i] = rand() % 8;
		}
	};
	void setValue(int position, T value)
	{
		if (position < 0 || position > v_size)
		{
			v_error = e_out_of_range;
			return;
		}
		v_vector[position] = value;
	};
	void printVector(void)
	{
		for (int i = 0; i < v_size; i++)
		{
			std::cout << v_vector[i] << " ";
		}
		std::cout << std::endl;
	};

	
};