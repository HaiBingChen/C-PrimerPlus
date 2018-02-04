// 8.8.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

template <typename T>
T max5(T arr[5])
{
	T max_temp = arr[0];
	for(int i=1; i<5; ++i)
	{
		if(arr[i] > max_temp)
		{
			max_temp = arr[i];
		}
	}

	return max_temp;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int int_arr[5] = {3, 10, 4, 33, 23};
	double double_arr[5] = {2.5f, 23.5f, 21.67f, 10.4f, 33.6f};
	
	cout << "max int is: " << max5(int_arr) << endl;
	cout << "max double is: " << max5(double_arr) << endl;
	
	getchar();
	
	return 0;
}

