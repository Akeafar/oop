#include "Header.h"
#include <iostream>




using namespace std;



Stack::Stack()
{
	std::cout << "����� ������������ ��� ����������\n";

	int ssize =0;
	//Stk *MyStk = new Stk;
	MyStk->Head = NULL;

	int x;
	//cout << "vvedite 4 elementa" << endl;
	/*for (int i = 0; i < ssize; i++)
	{
		cin >> x;
		inStack(x, &MyStk);
	}*/
	//storage = MyStk->Head;
	//setallrnd();
}


Stack::Stack(int size)
{
	std::cout << "����� ������������ � ����������\n";

	MyStk->Head = NULL;

	int x;
	/*cout << "vvedite " << size << " elementa" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> x;
		inStack(x, &MyStk);
	}*/
	ssize = size;
}

Stack::Stack(const Stack &c)
{
	std::cout << "����� ������������ �����������\n";

	



	MyStk->Head = NULL;

	//int x;
	//cout << "vvedite " << c.ssize << " elementa" << endl;
	//MyStk->Head = c.MyStk->Head;
	for (int i = 0; i < c.ssize; i++)
	{
		//cin >> x;
		inStack(c.MyStk->Head->x, &MyStk);
		c.MyStk->Head = c.MyStk->Head->Next;
	}
	//ssize = size;




	//Stk *MyStk = storage;
	/*MyStk->Head = NULL;

	int x;
	cout << "vvedite 4 elementa" << endl;
	for (int i = 0; i < 4; i++)
	{
	cin >> x;
	inStack(x, &MyStk);
	}
	storage = MyStk->Head;
	*/
}

Stack::~Stack()
{
	/*Stk *MyStk;
	//while (MyStk->Head != NULL)
	{
	Stk *temp = MyStk->Head->Next;
	delete  MyStk->Head;
	MyStk->Head = temp;
	}*/
}


void Stack::setallrnd(void)
{
	for (int i = 0; i < ssize; i++)
	{
		inStack((rand() % 8-1), &MyStk);
	}
}



void Stack::setsize(int size)
{
	ssize = size;
}

int Stack::getsize()
{
	return ssize;
}


int Stack::getcount()
{
	return counttoinput;
}

void Stack::setcount(int counttoinput)//????
{

	cin >> counttoinput;
}


void Stack::inStack(int x, Stk **MyStk)
{
	Stk *temp = new Stk;
	temp->x = x;
	temp->Next = (*MyStk)->Head;
	(*MyStk)->Head = temp;

}

int Stack::showMin(void)
{
	int minElem;
	//Stk *MyStk = storage;
	Stk *temp = MyStk->Head;
	minElem = temp->x;
	while (temp != NULL)
	{
		if (minElem > temp->x)
		{
			minElem = temp->x;
		}

		temp = temp->Next;
	}

	//qwer = minElem;
	cout << "Min element" << endl << minElem << endl;
	return minElem;
}


void Stack::showMax()
{
	int maxElem;
	//Stk *MyStk = storage;
	Stk *temp = MyStk->Head;
	maxElem = temp->x;
	while (temp != NULL)
	{
		if (maxElem < temp->x)
		{
			maxElem = temp->x;
		}

		temp = temp->Next;
	}

	cout << "Max element" << endl << maxElem << endl;
}

int Stack::checkTop(void)
{
	int HeadElem;
	//Stk *MyStk = storage;
	/*
	Stk *temp = MyStk->Head;
	HeadElem = temp->x;
	cout << "Head element" << endl << HeadElem << endl;*/
	//mojno prowe
	HeadElem = MyStk->Head->x;
	cout << "Head element" << endl << MyStk->Head->x << endl;
	return HeadElem;
}

void Stack::checkNeg()
{
	bool negElem = false;
	//cout << "stack with negElem" << endl;


	//Stk *MyStk = storage;
	Stk *temp = MyStk->Head;
	Stk *tempifneg = MyStk->Head;
	//minElem = temp->x;
	while (temp != NULL)
	{
		if (temp->x<0)
		{
			negElem = true;
			//print();
			break;
		}

		temp = temp->Next;
	}


	if (negElem == true)
	{
		while (tempifneg != NULL)
		{
			cout << tempifneg->x << " ";
			tempifneg = tempifneg->Next;
		}
	}
	else
	{
	//	cout << "Not found" << endl;
	}
	//cout << "stack with negElem" << endl << minElem << endl;

}


void Stack::showstk()
{
	//etonah ne nado
	//print(Stk *MyStk);

}



void Stack::print()
{
	//Stk *MyStk = storage;
	Stk *temp = MyStk->Head;
	while (temp != NULL)
	{
		cout << temp->x << " ";
		temp = temp->Next;
	}
	cout << endl;
}