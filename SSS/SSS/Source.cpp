#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <vector>

using namespace std;

void printvector(vector<int> T)
{
	for (vector<int> temp = T; !temp.empty(); temp.pop_back())
	{
		cout << temp.back() << " ";
	}
	cout << endl;
}

void printlist(list<int> T)
{
	list<int> temp = T;
	for (list<int>::iterator iter = temp.begin(); iter != temp.end(); ++iter)
	{
		cout << *iter << " ";
	}
}

vector<int> sortvecHighToLow(vector<int> T)
{
	vector<int> newvec;
	vector<int> temp = T;
	int size = T.size();
	int *arrayOfvec = new int[size];
	int i = 0;
	for (temp = T; !temp.empty(); temp.pop_back(), i++)
	{
		arrayOfvec[i] = temp.back();
	}

	std::sort(arrayOfvec, arrayOfvec + size);

	i = 0;
	for (int j = 0; j < size; j++)
	{
		temp = T;
		while (!temp.empty())
		{
			if (temp.back() == arrayOfvec[i])
			{
				newvec.push_back(temp.back());
			}
			temp.pop_back();
		}
		i++;
	}

	return newvec;
}

vector<int> sortvecLowToHigh(vector<int> T)
{
	vector<int> newvec;
	vector<int> temp = T;
	int size = T.size();
	int *arrayOfvec = new int[size];
	int i = 0;
	for (temp = T; !temp.empty(); temp.pop_back(), i++)
	{
		arrayOfvec[i] = temp.back();
	}

	std::sort(arrayOfvec, arrayOfvec + size);

	i = size - 1;
	for (int j = 0; j < size; j++)
	{
		temp = T;
		while (!temp.empty())
		{
			if (temp.back() == arrayOfvec[i])
			{
				newvec.push_back(temp.back());
			}
			temp.pop_back();
		}
		i--;
	}

	return newvec;
}


list<int> sortlistrLowToHigh(list<int> T)
{
	list<int> newlist;
	list<int> temp = T;
	int size = T.size();
	int *arrayOflist = new int[size];
	int i = 0;
	for (temp = T; !temp.empty(); temp.pop_back(), i++)
	{
		arrayOflist[i] = temp.back();
	}

	std::sort(arrayOflist, arrayOflist + size);

	i = size - 1;
	for (int j = 0; j < size; j++)
	{
		temp = T;
		while (!temp.empty())
		{
			if (temp.back() == arrayOflist[i])
			{
				newlist.push_front(temp.back());
			}
			temp.pop_back();
		}
		i--;
	}

	return newlist;
}

bool search(vector<int> T, int value)
{
	vector<int> temp = T;
	for (temp.begin(); !temp.empty(); temp.pop_back())
	{
		if (temp.back() == value)
		{
			return true;
		}
	}
	return false;
}

int search2(list<int> T, int value)
{
	int cnt=0;
	list<int> temp = T;
	for (temp.begin(); !temp.empty(); temp.pop_back())
	{
		if (temp.back() == value)
		{
			cnt++;
		}
	}
	return cnt;
}

list<int> merge(vector<int> ST, list<int> SE)
{
	list<int> Newlist;
	for (list<int> temp = SE; !temp.empty(); temp.pop_back())
	{
		Newlist.push_back(temp.back());
	}
	for (vector<int> temp = ST; !temp.empty(); temp.pop_back())
	{
		Newlist.push_back(temp.back());
	}
	return Newlist;
}

void main()
{
	int val;
	
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(3);
	cout << "vector: ";
	printvector(vec);
	cout << endl;
	vector<int> newvechighToLow = sortvecHighToLow(vec);
	cout << "Sorted hightolow list: ";
	printvector(newvechighToLow);
	cout << endl;
	vector<int> newveclowToHigh = sortvecLowToHigh(vec);
	cout << "Sorted lowtohigh list: ";
	printvector(newveclowToHigh);
	cout << endl;
	cout << "Poisk elementa v vectore: ";
	cin >> val;
	if (search(vec, val))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}


	list<int> lst;
	lst.push_front(4);
	lst.push_front(5);
	lst.push_front(6);
	printlist(lst);
	cout << endl;

	cout << "Vvod elem dl9  poiska i vstvki v list: ";
	cin >> val;
	if (search(vec, val))
	{
		lst.push_back(val);
	}
	else
	{
		cout << "Elem not found" << endl;
	}
	printlist(lst);
	cout << endl;


	vector<int> sortvec= sortvecLowToHigh(vec);
	cout << "Sorted vec: ";
	printvector(sortvec);
	cout << endl;

	list<int> sortlist = sortlistrLowToHigh(lst);
	cout << "Sorted list: ";
	printlist(sortlist);
	cout << endl;

	cout << "merge: ";
	list<int> merglist = merge(vec, lst);
	printlist(merglist);
	cout << endl;


	list<int> sortmerge = sortlistrLowToHigh(merglist);
	cout << "Sorted merge: ";
	printlist(sortmerge);
	cout << endl;

	int count=0;
	cout << "Enter value to find in merglist: ";
	cin >> val;
	count = search2(merglist, val);
	cout << "Koli4estvo v merge udovletvor9uwih: " << count << endl;


	
}