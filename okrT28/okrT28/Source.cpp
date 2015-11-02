#include <iostream>
#include "Array.h"
#include "Vec.h"

using namespace std;
 /*void hz()
	{
		for (int i = 0; i < arr_size; i++)
		{
			if (n <= arr_size)
			{
				if (i == m)
				{
					{
						arr[i] = arr[i] * m;
						//buf = buf * m;
						//cout << buf << " ";
					}
				}
				else
				{
					//cout << arr[i] << " ";
				}
			}
			else
			{
				cout << "kos9k";
				break;
			}
		}
		cout << endl;
	}*/

int n,m;

template <typename  T>
void hz(const T arr, int m, int n, int arr_size)
{
	for (int i = 0; i < arr.arr_size; i++)
	{
		if (n <= arr.arr_size)
		{
			if (i == m)
			{
				{
					arr.arr[i] = arr.arr[i] * m;
				}
			}
		}
		else
		{
			cout << "kos9k";
			break;
		}
	}
	cout << endl;
	//return 0;
}

void main()
{
	int set_size = 5;
	Array<int> arr1(set_size);
	Array<double> arr2(set_size);
	Array<char> arr3(set_size);
	//Vec<int> vec;

	//int a[5];

	arr1.setRandom();
	arr2.setRandom();
	arr3.setRandom();




	arr1.print();
	arr2.print();
	arr3.print();

	//cout << "Vvedite m " << endl;
	arr1.setM(2);
	arr1.setN(2);

	arr2.setM(2);
	arr2.setN(2);


	arr3.setM(2);
	arr3.setN(2);


	n = m = 2;
	hz(arr1,2,2,set_size);
	hz(arr2, 2, 2, set_size);
	hz(arr3, 2, 2, set_size);
	//arr1.setN(2);
	//arr1.hz();
	arr1.print();
	arr2.print();
	arr3.print();




}