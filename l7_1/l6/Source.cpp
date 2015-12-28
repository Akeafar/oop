//Класс  Одномерный массив. Дополнительно перегрузить следующие операции:
//[]  доступ по индексу; >  проверка на вхождение; !=  проверка на неравенство;
//+  объединение массивов.

//перегрузка для любых типов

#include <iostream>
#include <stdio.h>
#include "Arr.h"
#include "Stack.h"

using namespace std;

void main()
{

	Array<int> arr1(5);
	Array<int> arr2(5);
	Array<int> test1(5);
	Array<int> test2(5);
	
	//Stack dod;

	Array<Stack> dod(4);
	Array<Stack> qwe(4);



	Stack dp;
	dp.print();
	dod.print();


	Stack dp1;
	dp1.print();


	//cout << dod[0];





	//test1.set();
	//test2.set();
	arr1.setRandom();
	arr2.setRandom();
	//cout << arr1[3] << endl;
	//test1.print();
	//test2.print();
	arr1.print();
	arr2.print();
	/*
	Array<int> arr3;

	arr3 = arr1 + arr2;

	//arr3.print();
	



	//cout << arr1[3]<<endl;

	 if (test1 != test2)
	{
		cout << "true"<<endl;
	}
	else
	{
		cout << "false"<<endl;
	}


	if (arr1 != arr2)
	{
		cout << "true"<<endl;
	}
	else
	{
		cout << "false"<<endl;
	}


	if (test1 > test2)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}


	if (arr1 > arr2)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	*/
}