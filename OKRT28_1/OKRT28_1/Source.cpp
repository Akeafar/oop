#include <iostream>
#define NIL 0x00000000


//void create_array(int size);





using namespace std;



template <typename  T>
void preobraz(const T arr_arr, int m, int n, int size_ar)
{
	for (int i = 0; i < arr_arr.size_ar; i++)
	{
		if (n <= arr_arr.size_ar)
		{
			if (i == m)
			{
				{
					arr_arr.arr_arr[i] = arr_arr.arr_arr[i] * m;
				}
			}
		}
		else
		{
			cout << "kos9k";
			break;
		}
	}	
}

template <typename Q>
class Arr{
public:
	int size_ar;
	Q  *arr_arr;
	//int arr_size;
	//int *arr;
	//size = arr_size;
	

	Arr(void)
	{
		//arr = NIL;		
	
		size_ar = 0;
	}
	~Arr(void)
	{
		//cout << endl  <<"xxxDESTROYxxx"<<endl<<endl;
		//delete[] arr;

	}

	void create_array(int size)
	{
		Q *arr = new Q[size];
		arr_arr = arr;
		//arr_size = size;
		size_ar = size;
	//	int arr(size);
		
		//return *arr;
	
		//SetRand(arr);
		//Print(arr);
	}

	void SetRand()
	{
	for (int i = 0; i < size_ar; i++)
	{
		arr_arr[i] = rand() % 8;
	}
	//return *arr;
	}

	void Print()
	{
		for (int i = 0; i < size_ar; i++)
		{
			cout << arr_arr[i] << " ";
		}
		cout <<endl<< "------------------------------" << endl;
	}


};

void main()
{
	const int arr_size=5;
	//int arr[arr_size];
	Arr<int> arr1;
	arr1.create_array(arr_size);
	arr1.SetRand();
	arr1.Print(); 

	preobraz(arr1, 2, 2, arr_size);

	arr1.Print();


	Arr<double> arr2;
	arr2.create_array(arr_size);
	arr2.SetRand();
	arr2.Print();
	
	preobraz(arr2, 2, 2, arr_size);

	arr2.Print();


	Arr<char> arr3;
	arr3.create_array(arr_size);
	arr3.SetRand();
	arr3.Print();

	preobraz(arr3, 2, 2, arr_size);

	arr3.Print();


}




