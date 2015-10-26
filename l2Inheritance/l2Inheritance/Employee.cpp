#include "stdafx.h"
#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(void)
{	
	cout << "Called Employee's constructor" << endl;
}

int Employee::getcash(void)
{
	return this->cash;
}

string Employee::getcorp(void)
{
	return this->corp;
}

int Employee::getworktime(void)
{
	return this->worktime;
}

void Employee::setcorp(string corp)
{
	this->corp = corp;
}

void Employee::setworktime(int worktime)
{
	this->worktime = worktime;
}

void Employee::setcash(int cash)
{
	this->cash = cash;
}

Employee::~Employee(void)
{
	cout << "FUCK THE MASTER " << endl;
}