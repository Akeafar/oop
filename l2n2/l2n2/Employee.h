#pragma once
#include <iostream>
#include "Persona.h"

using namespace std;

class Employee :
	public Persona
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
	~Employee(void);


};