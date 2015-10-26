//Класс  Одномерный массив. Дополнительно перегрузить следующие операции:
//[]  доступ по индексу; >  проверка на вхождение; !=  проверка на неравенство;
//+  объединение массивов.
#include <iostream>
#include <stdio.h>
#include "Arr.h"


using namespace std;

void main()
{

	Array arr1(5);
	Array arr2(5);
	Array test1(5);
	Array test2(5);

	test1.set();
	test2.set();
	arr1.setRandom();
	arr2.setRandom();

	test1.print();
	test2.print();
	arr1.print();
	arr2.print();

	Array arr3;

	arr3 = arr1 + arr2;

	arr3.print();
	

	cout << arr1[0]<<endl;

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
}