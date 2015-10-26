#pragma once
#include <iostream>
#include "vPersona.h"

using namespace std;

class Employee :
	public vPersona
{
	int cash;
	string corp;//corporation
	int worktime;
public:
	Employee(void);
	void setcash(int cash);
	void setworktime(int worktime);
	void setcorp(string corp);
	int getcash(void);
	int getworktime(void);
	string getcorp(void);

	string getName(void);
	void setName(string name_);
	int getAge(void);
	void setAge( int age_);


	~Employee(void);


};