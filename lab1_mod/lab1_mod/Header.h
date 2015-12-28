#pragma once
#include <iostream> 
#include <ctime> 




class Stack {
	struct Stk
	{
		int x;
		Stk *Next, *Head;
	};
	//Stk *storage = new Stk;
	Stk *MyStk = new Stk;
	//int **storage;

	//int hsize,vsize;
	int ssize;
	int counttoinput;
	static const int maxsize = 20;
public:

	Stack();//
	Stack(int size);//
	Stack(const Stack &);//
	~Stack();//
	void inStack(int x, Stk **MyStk);//
	int outStack();//
	void print();//
	void setcount(int);
	int getcount();
	void setsize(int);
	int getsize();
	int showMin(void);
	void showMax();
	int checkTop(void);//
	void checkNeg();//
	void showstk();
	void setallrnd();
};