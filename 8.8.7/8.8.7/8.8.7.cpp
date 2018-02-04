// 8.8.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T>
T SumArray(T arr[], int n)
{
	T sum = 0;
	for(int i=0; i<n; ++i)
	{
		sum += arr[i];
	}

	return sum;
}

template <typename T>
T SumArray(T *arr[], int n)
{
	T sum = 0;
	
	for(int i=0; i<n; ++i)
	{
		sum += *arr[i];
	}

	return sum;
}

struct debts
{
	char name[50];
	double amount;
};

int _tmain(int argc, _TCHAR* argv[])
{
	int things[6] = {13, 31, 103, 301, 310, 130};
	struct debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 1800.0}

	};

	double *pd[3];
	
	for(int i=0; i<3; i++)
	{
		pd[i] = &mr_E[i].amount;
	}
	
	cout << "Listing Mr. E's counts of things: " << SumArray(things, 6) << endl;
	cout << "Listing Mr. E's debts: " << SumArray(pd, 3) << endl;

	getchar();

	return 0;
}



