#pragma once
#include <iostream>

#include "Employee.h"
using namespace std;
class Worker :public Employee
{

	string	profession;
	int exp;
	//string workplace;

public:
	Worker(void);
	string getprofession(void);
	//string getworkplace(void);
	int getexp(void);

	void setproffesion(string profession);
	//void setworkplace(string workplace);
	void setexp(int exp);
	~Worker(void);
};