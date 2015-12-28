#include <iostream>
#include <string>
#include <stack>
#include <list>
#include <vector>
#include "Array.h"
#include <iterator>

using namespace std;



void printCurrentlist(list<Array<int>> T)								
{
	for (list<Array<int>> temp = T; !temp.empty(); temp.pop_back())
	{
		temp.back().print();
		//temp.pop_back.print();

	}
	cout << endl;
	//cout << "Size: " << T.size() << endl;
}

list<Array<int>> uniteBoth(list<Array<int>> destination, list<Array<int>> result) 
{
	list<Array<int>> temp1 = result;
	list<Array<int>> temp2 = destination;

	while (!temp1.empty())
	{
		temp2.push_front(temp1.back());
		temp1.pop_back();
	}

	return temp2;
}


list<Array<int>> delarr(list<Array<int>> T, Array<int> symbolDel)	
{
	list<Array<int>> temp = T;
	list<Array<int>> emptylist;
	list<Array<int>> newlist;
	int counter = 0;
	while (!temp.empty())
	{
		Array<int> current = temp.back();
		if (current == symbolDel)
		{
			counter++;
		}
		else
		{
			newlist.push_front(current);
		}
		temp.pop_back();
	}
	temp = newlist;
	newlist = emptylist;
	while (!temp.empty())
	{
		newlist.push_front(temp.back());
		temp.pop_back();
	}
	cout << "Count of items deleted: " << counter << endl;
	return newlist;
}


list<Array<int>> change(list<Array<int>> T, Array<int> symbolIn, Array<int> symbolOut)	
{
	list<Array<int>> temp = T;
	list<Array<int>> emptylist;
	list<Array<int>> newlist;
	while (!temp.empty())
	{
		Array<int> current = temp.back();
		if (current == symbolIn)
		{
			newlist.push_front(symbolOut);
		}
		else
		{
			newlist.push_front(current);
		}
		temp.pop_back();
	}
	temp = newlist;
	newlist = emptylist;
	while (!temp.empty())
	{
		newlist.push_front(temp.back());
		temp.pop_back();
	}
	return newlist;
}

void main()
{

	list<Array<int>> qwe;
	//auto ib = qwe.begin(), ie = qwe.end();
	Array<int> arr1(5);
	Array<int> arr2(4);
	Array<int> arr3(6);
	Array<int> arr4(7);
	Array<int> arr5(8);
	arr1.setRandom();
	arr2.setRandom();
	arr3.setRandom();
	arr4.setRandom();
	arr5.setRandom();
	arr1.print();
	arr2.print();
	arr3.print();
	arr4.print();
	arr5.print();
	qwe.push_front(arr1);
	qwe.push_front(arr2);
	qwe.push_front(arr3);

	cout << "Print qwe" << endl;
	printCurrentlist(qwe);

	list<Array<int>> qwe2;
	qwe2.push_front(arr4);
	qwe2.push_front(arr5);


	cout << "Print qwe2" << endl;
	printCurrentlist(qwe2);

	list<Array<int>> qwe3 = uniteBoth(qwe, qwe2);

	cout << "Print qwe3" << endl;
	printCurrentlist(qwe3);


	list<Array<int>> qwe4 = delarr(qwe, arr2);
	cout << "Print qwe4" << endl;
	printCurrentlist(qwe4);


	list<Array<int>> qwe5 = change(qwe, arr3, arr2);
	cout << "Print qwe" << endl;
	printCurrentlist(qwe);
	cout << "Print qwe5" << endl;
	printCurrentlist(qwe5);





	/*while (ie != ib)
	{
		cout << *ib <<endl;
		--ie;
		if (ie != ib)
		cout << *ie <<endl;
		else
			break;
		++ib;
	}*/

	

	//printCurrentStack(qwe);

	//cout << "Список: ";
	//copy(qwe.begin(), qwe.end(), ostream_iterator<int>(cout, " "));
	//cout<<qwe;
	//cout<<qwe.begin();
}