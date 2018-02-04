// 8.8.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

const string &toupperStr(string &str);

int _tmain(int argc, _TCHAR* argv[])
{
	string input_str;

	cout << "Enter a string (q to quit):";

	do
	{
		getline(cin,input_str);

		if(input_str != "q")
			cout << toupperStr(input_str) << endl;
		else
		{
			cout << "quit" << endl;
			break;
		}

		cout << "Next string (q to quit):";
	}
	while(1);

	return 0;
}

const string &toupperStr(string &str)
{
	for(string::iterator it=str.begin(); it!=str.end(); ++it)
		*it = toupper( *it );

	return str;
}

