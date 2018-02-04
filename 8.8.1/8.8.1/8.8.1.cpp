// 8.8.1.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

void print_str(const string str);
void print_str(const string str, int value);

int _tmain(int argc, _TCHAR* argv[])
{
	print_str("chenhaibing");
	print_str("chenhaibing");
	print_str("chenhaibing");

	for(int i=0; i<5; ++i)
	{
		print_str("zhuangsufeng", i);
	}

	getchar();

	return 0;
}

void print_str(const string str)
{
	std::cout << str << endl;
}

void print_str(const string str, int value)
{
	if(value)
	{
		std::cout << str << endl;
	}
}