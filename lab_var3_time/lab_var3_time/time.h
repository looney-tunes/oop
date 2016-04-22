#pragma once


#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

class Time
{
	int Hour, Min, Sec;
public:
	int NN;			//порядковый номер
	Time();
	~Time();
	void setTime(int countTime);
	void getTime();
	
};