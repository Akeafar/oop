#pragma once
#include <iostream>


using namespace std;

template<class T>
class Stack
{
public:
	struct Stk
	{
		T x;		
		Stk *Next, *Head;
	};
	int counter = 0;

	Stk *MyStk = new Stk;
	Stk *temp = MyStk->Head;

	//void inStack(T x, Stk **MyStk);
	//void print();

	Stack()
	{
		MyStk->Head = NULL;
		T x;
		for (int i = 0; i < 4; i++)
		{
			x = rand() % 8 + 1;
			counter += x;
			inStack(x, &MyStk);
		}
	}
	


	void inStack(T x, Stk **MyStk)
	{
		Stk *temp = new Stk;
		temp->x = x;
		temp->Next = (*MyStk)->Head;
		(*MyStk)->Head = temp;

	}

	static void Stack::print()
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



