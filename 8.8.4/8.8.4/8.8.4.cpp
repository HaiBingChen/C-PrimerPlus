// 8.8.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <cstring>

struct stringy
{
	char *str;
	size_t cnt;
};

void set(stringy &str_to, const char *str_from);
void show(const stringy stry, const int count = 1);
void show(const char *strc, const int count = 1);

int _tmain(int argc, _TCHAR* argv[])
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany,2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");

	getchar();

	return 0;
}

void set(stringy &str_to, const char *str_from)
{
	str_to.cnt = strlen(str_from);

	str_to.str = new char();

	memcpy(str_to.str, str_from, str_to.cnt+1);
}

void show(const stringy stry, const int count)
{
	for(int i=0; i<count; ++i)
	{
		cout << stry.str << endl;
	}
}

void show(const char *strc, const int count)
{
	for(int i=0; i<count; ++i)
	{
		cout << strc << endl; 
	}
}
