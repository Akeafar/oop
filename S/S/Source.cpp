#include <iostream>
#include <string>
#include <stack>
#include <set>
#include <vector>

using namespace std;

void main()
{
	//vector<int> qwe(5);
	vector<int>qwe;
	vector<int>ewq;
	vector<int>::iterator It;
	int i;
	//int *pointer = qwe.data();
	for ( i = 0; i <5; i++)
	{
		qwe.push_back(i);
	}
	for (i = 10; i <15; i++)
	{
		ewq.push_back(i);
	}
	//for (qwe.begin();)
	///�������� ��������� �� ������� ������� �������
	It = qwe.begin();
	qwe.emplace(It, 99);///��������� ������� ��������� �����
	It = qwe.begin() + 2;///�������� ��������� �� ������� 
	qwe.emplace(It, 77);///��������� ������ ���������
	qwe.emplace_back(88);///��������� � ����� ������� 
	//qwe.swap();
	cout << "Vector contains: ";
	for (It = qwe.begin(); It<qwe.end(); It++)
	{
		cout << *It << ends;
	}


	qwe.erase(qwe.begin(),qwe.begin()+3);

	cout << endl;

	cout << "Vector contains: ";
	for (It = qwe.begin(); It<qwe.end(); It++)
	{
		cout << *It << ends;
	}

	qwe.insert(qwe.begin() + 4, 33);

	cout << endl;

	cout << "Vector contains: ";
	for (It = qwe.begin(); It<qwe.end(); It++)
	{
		cout << *It << ends;
	}



	qwe.swap(ewq);

	cout << endl;

	cout << "Vector contains qwe: ";
	for (It = qwe.begin(); It<qwe.end(); It++)
	{
		cout << *It << ends;
	}
	cout << "Vector contains ewq: ";
	for (It = ewq.begin(); It<ewq.end(); It++)
	{
		cout << *It << ends;
	}


	cout << endl;

	//cout << qwe[9]<<endl;

	qwe.erase(qwe.begin(), qwe.end());

	for (It = qwe.begin(); It<qwe.end(); It++)
	{
		cout << *It << ends;
	}
}