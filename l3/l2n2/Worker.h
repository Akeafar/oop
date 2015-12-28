#pragma once
#include <iostream>

#include "Employee.h"
using namespace std;
class Worker :public Employee
{

	string	profession;
	int exp;
	string workplace;
	int BirthDate;
public:
	Worker(void);
	string getprofession(void);
	string getworkplace(void);
	int getexp(void);
	int getBirthday(void);

	void setBirthday(int DateOfYear);
	void setproffesion(string profession);
	void setworkplace(string workplace);
	void setexp(int exp);

	virtual void vShow(void);

	~Worker(void);
};