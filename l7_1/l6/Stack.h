#pragma once 
#include <iostream>

using namespace std;

class Stack {
	struct Stk
	{
		int x;
		Stk *Next, *Head;
	};
	Stk *MyStk = new Stk;

public:
	char buf[4];

	void buf_null()
	{
		for (int i = 0; i < 4; i++)
		{
			buf[i] = 0;
		}
	}
	
	
	/*
	friend ostream& operator<<(ostream & output, Stack& y)
	{
		
		return output << y.MyStk->x;
	}
	*/
	
	Stack operator << (int MyStk)
	{
		/*Stk *temp = MyStk->Head;
		while (temp != NULL)
		{
			cout << temp->x << " ";
			temp = temp->Next;
		}
	*/	
		cout <<"qwe" << endl;
	}


	Stack()
	{
		buf_null();
		MyStk->Head = NULL;

		int x;
		for (int i = 0; i < 4; i++)
		{
			x = rand() % 8 + 1;
			inStack(x, &MyStk);
			buf[i] = x;
		}

	}

    ~Stack()
	{
	
	}

	void inStack(int x, Stk **MyStk)
	{
		Stk *temp = new Stk;
		temp->x = x;
		temp->Next = (*MyStk)->Head;
		(*MyStk)->Head = temp;

	}

	void print()
	{
		
		Stk *temp = MyStk->Head;
		while (temp != NULL)
		{
			cout << temp->x << " ";
			temp = temp->Next;
		}
		cout << endl;
	}
};