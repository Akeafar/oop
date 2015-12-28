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
	Array<Stack> arr2;
	//arr2.setRandom();
	Stack s1;
	Stack s2;
	s1.printstk();
	s2.printstk();
	arr2.add(s1);
	//arr2.add(s2);
	arr2.prnt();

	Array<Stack> arr4;
	arr4.add(s1);
	arr4.prnt();

	Array<Stack> arr5;
	arr5.add(s1);
	arr5.prnt();

	Array<Stack> arr1;
	//arr2.setRandom();
	Stack ss1;
	Stack ss2;
	ss1.printstk();
	ss2.printstk();
	arr1.add(ss1);
	arr1.add(ss2);
	arr1.prnt();

	//ss1.get_el(3);
	arr1[0];

	//Array<Stack> arr3;
	//Stack sss1;
	//Stack sss2;
	//arr3.add(sss1); 
	//arr3.add(sss2);
	//arr3 = arr1 + arr2;
	//arr3.prnt();
	arr1 + arr2;

	arr1.prnt();

	if (arr1 != arr2)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	

//	arr1.prnt();
//	arr2.prnt();

	if (arr5 != arr4)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	if (arr5 > arr4)
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





	//arr3.prnt();
	
	/*Array<int> qwe(4);
	qwe.setRandom();
	qwe.print();
	cout << qwe[3] << endl;
	*/
	//Array q(3);

	
	//cout << arr2[1] << endl;
	

	//cout << arr2[1];

	//Array<Stack> arr1(3);


	



	//Array<int> arr1(3);
	//arr1.setRandom();
	//arr1.print();
	//arr1.prnt();
		//Stack q;
	//q.print();
	//Array<int> arr2(3);
	//arr2.setRandom();
	//arr2.print();
	//arr2.print();
		
	
	//Array<int> arr1(5);
	/*Array arr1(5);
	arr1.setRandom();
	arr1.print();
	*/

	/*Array arr1(5);
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


	cout << arr1[0] << endl;

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
*/
}