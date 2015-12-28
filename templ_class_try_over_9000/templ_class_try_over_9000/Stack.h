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

	void printstk()
	{

		Stk *temp = MyStk->Head;
		while (temp != NULL)
		{
			cout << temp->x << " ";
			temp = temp->Next;
		}
		cout << endl;
	}

	int get_el(int id)
	{
		int i = 4;
			Stk *temp = MyStk->Head;
			while (temp != NULL)
			{
				if (i == id){
					//cout << temp->x << " ";
					temp = temp->Next;
					break;
				}				
				i--;
			}
			//cout << endl;
			return temp->x;
	}

	bool operator != (Stack arr2)
	{
		//Stack *temp = new Stack();
		//Stack *tr = new Stack();
		for (int i = 0; i < 4; i++)
		{
			if (this->get_el(i) != arr2.get_el(i))
			{
				return false;
			}
			
		}
		return true;

	}


	void set_el(int id, int val)
	{
		int i = 3;
		Stk *temp = MyStk->Head;
		while (temp != NULL)
		{
			if (i == id){
				//cout << temp->x << " ";
				temp->x=val;
				
				break;
			}
			temp =temp->Next;
			i--;
			if (i == -1){
				break;
			}
		}
		//cout << endl;
		//return temp->x;
	}


};