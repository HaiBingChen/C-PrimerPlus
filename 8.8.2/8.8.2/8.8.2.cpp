// 8.8.2.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string.h"

typedef struct _CandyBar
{
	char *name;
	double weight;
	int hot;
}CandyBar;

const CandyBar & set_CandyBar(CandyBar &cb, const char *name="Millennium", double weight=2.85, int hot=350);
void show_CandyBar(const CandyBar &cb);

int _tmain(int argc, _TCHAR* argv[])
{
	CandyBar cb;
	cb.name = new char();

	show_CandyBar(set_CandyBar(cb));

	show_CandyBar(set_CandyBar(cb, "chenhaibing"));

	show_CandyBar(set_CandyBar(cb, "zhuangsufeng", 5.679));

	show_CandyBar(set_CandyBar(cb, "zhaolu", 8.245, 600));

	getchar();

	delete cb.name;

	return 0;
}

const CandyBar &set_CandyBar(CandyBar &cb, const char *name, double weight, int hot)
{	
	memcpy(cb.name, name, strlen(name)+1);
	cb.weight = weight;
	cb.hot = hot;
	return cb;
}

void show_CandyBar(const CandyBar &cb)
{
	std::cout << "CandyBar.name=" << cb.name << std::endl;
	std::cout << "CandyBar.weight=" << cb.weight << std::endl;
	std::cout << "CandyBar.hot=" << cb.hot << std::endl;
}