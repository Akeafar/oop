//Класс  Одномерный массив. Дополнительно перегрузить следующие операции:
//[]  доступ по индексу; >  проверка на вхождение; !=  проверка на неравенство;
//+  объединение массивов. massiv stekov
#include <iostream>
#include <stdio.h>
#include "Arr.h"


using namespace std;

void main()
{

	Array<float> arr1(5);
	Array<float> arr2(5);
	Array<float> test1(5);
	Array<float> test2(5);

	//test1.set();
	//test2.set();
	//arr1.setRandom();
	//arr2.setRandom();

	test1.print();
	test2.print();
	arr1.print();
	arr2.print();

	Array<float> arr3;

	arr3 = arr1 + arr2;

	arr3.print();


	arr1[3];

	if (test1 != test2)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}


	if (arr1 != arr2)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
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