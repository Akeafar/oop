// l1stack.cpp : Defines the entry point for the console application.
//������� ����� ���� ������������.
//�������-����� ��������� ������� � ����, ����������� ������� �� �����,
//�������� ���� , ��������� ������� �����. ������� ������ ��������.
//�������:
//a) ����� � ���������/���������� ������� ���������; 
//b) ������ ������, ���������� ������������� ��������.
#include "stdafx.h"
#include "Header.h"
#include <iostream>
#include <locale> 
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, ".1251");

	cout << "Stack" << endl;
	//Stack *a = new Stack();
	Stack *a = new Stack(3);
	a->print();
	a->checkNeg();
	a->setsize(2);
	Stack *b = new Stack(*a);
	
	cout << "Stack show" << endl;
	b->checkNeg();
	b->print();
	
	//b->print();
	//a->showMax();
	//a->showMin();
	//a->checkTop();
	


	//b->showMax();
	//b->showMin();
	//b->checkTop();
	return 0;
}

