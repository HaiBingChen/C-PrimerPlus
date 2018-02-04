// 8.8.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

template <typename T>
T maxn(T *arr, int len)
{
	T temp_max = arr[0];
	for(int i=1; i<len; ++i)
	{
		if(arr[i] > temp_max)
		{
			temp_max = arr[i];
		}
	}

	return temp_max;
}

template<> char *maxn(char *arr[], int num)
{
	char *temp_arr = arr[0];

	for(int i=1; i<num; ++i)
	{
		if(strlen(arr[i]) > strlen(temp_arr))
		{
			temp_arr = arr[i];
		}
	}

	return temp_arr;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int int_test[6] = {10, 22, 4, 50, 33, 8};
	double double_test[4] = {3.1415f, 12.88f, 2.45f, 22.453f};
	char *char_test[5] = {"this is test1", \
						  "this is test2, very long long long", \
						  "this is test3", \
						  "this is test4, very long long long", \
						  "this is test5, a little long"};

	cout << "max int is: " << maxn(int_test, 6) << endl;
	cout << "max double is: " << maxn(double_test, 4) << endl;
	cout << "max char string is: " << maxn(char_test, 5) << endl;

	getchar();

	return 0;
}

