#include "Header.h"
#include <iostream>
#include <locale> 
using namespace std;



void stkMin(Stack **stk)
{
	int qwe=0;
	int qwei = 99;
	int imin = 0;
	for (int i = 0; i < 3; i++)
	{

		qwe=stk[i]->showMin();
		if (qwe<qwei)
		{	
			qwei = qwe;
			imin = i;
		}
	}

	stk[imin]->print();
}


void stkTop(Stack **stk)
{

		cout << "stk top elem" << endl;
		for (int i = 0; i < 3; i++)
		{
			stk[i]->checkTop();
			cout << endl;
		}
		
}


void stkTopmin(Stack **stk)
{
	int qwe = 0;
	int qwei = 99;
	int imin = 0;
	for (int i = 0; i < 3; i++)
	{

		qwe = stk[i]->checkTop();
		if (qwe<qwei)
		{
			qwei = qwe;
			imin = i;
		}
	}

	stk[imin]->print();
}

void stkTopmax(Stack **stk)
{
	int qwe = 0;
	int qwei = 99;
	int imin = 0;
	for (int i = 0; i < 3; i++)
	{

		qwe = stk[i]->checkTop();
		if (qwe>qwei)
		{
			qwei = qwe;
			imin = i;
		}
	}

	stk[imin]->print();
}

void stkNeg(Stack **stk)
{
	cout << "stk with neg elem" << endl;
	for (int i = 0; i < 3; i++)
	{
		stk[i]->checkNeg();
		cout << endl;
	}

}


void printArrayOfStack(Stack **stk)
{
	for (int i = 0; i < 3; i++)
	{
		stk[i]->print();
		cout << endl;
	}
	//nextAction();
}

void main()
{
	setlocale(LC_ALL, ".1251");

	Stack *stk[3]{new Stack{ 3 }, new Stack{ 4 }, new Stack{ 5 }};
	for (int i = 0; i < 3; i++)
	{
		stk[i]->setallrnd();
	}

	printArrayOfStack(stk);
	stkMin(stk);
	//stkTop(stk);
	stkNeg(stk);
	stkTopmin(stk);
	stkTopmax(stk);
}