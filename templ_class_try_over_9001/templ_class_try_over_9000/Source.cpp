//Класс  Одномерный массив. Дополнительно перегрузить следующие операции:
//[]  доступ по индексу; >  проверка на вхождение; !=  проверка на неравенство;
//+  объединение массивов.
//Написать функцию-шаблон - сортировка методом подсчета.
#include <iostream>
#include <stdio.h>
#include "Arr.h"
#include "Stack.h"


using namespace std;




void main()
{
	Array<int> arr1(5);
	Array<double> arr2(11);
	//Stack s1;
	//s1.printstk();
	//arr2.add(s1);
	arr1.setRandom();
	arr2.setRandom();


	arr1.print();
	arr2.print();


	arr1.CountingSort();
	arr2.CountingSort();

	arr1.print();
	arr2.print();
	
}