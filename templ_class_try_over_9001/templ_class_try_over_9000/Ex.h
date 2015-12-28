#pragma once 
#include <iostream>
#include "Arr.h"
#include <string>
#include "Stack.h"

using namespace std;

class Error
{
protected:
	string message;
	int temp;
public:
	Error()
	{
		message = "";
		temp = NULL;
	};
	Error(string msg, int tmp)
	{
		message = msg;
		temp = tmp;
	}
	~Error()
	{
		message = "";
		temp = NULL;
	};
	virtual void show(void) = 0;
};

class Overflow : public Error
{
public:
	Overflow(string msg)
	{
		this->message = msg;
	};
	virtual void show()
	{
		cout << "Exception overflow executed: ";
		cout << this->message << endl;
	}
};

class IncorrectIndex : public Error
{
	int index;
public:
	IncorrectIndex(string msg, int ind)
	{
		this->message = msg;
		index = ind;
	}

	virtual void show()
	{
		cout << "Exception incorrect index executed: ";
		cout << this->message << index << endl;
	}
};

class IncorrectOutput : public Error
{
public:
	IncorrectOutput(string msg)
	{
		this->message = msg;
	};
	virtual void show()
	{
		cout << "Exception incorrect output executed: ";
		cout << this->message << endl;
	}
};

class IncorrectSize : public Error
{
	int size;
public:
	IncorrectSize(string msg, int sz)
	{
		this->message = msg;
		size = sz;
	}
	virtual void show()
	{
		cout << "Exception incorrect size executed: ";
		cout << this->message << size << endl;
	}
};

class MultiplicationError : public Error
{
public:
	MultiplicationError(string msg)
	{
		this->message = msg;
	}
	virtual void show()
	{
		cout << "Exception multiplication error executed: ";
		cout << this->message << endl;
	}
};