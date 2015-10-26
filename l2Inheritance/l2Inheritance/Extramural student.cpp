#include "stdafx.h"
#include <iostream>
#include "Extramural student.h"

using namespace std;

Ext_student::Ext_student(void)
{
	cout << "Called Extramural student's constructor" << endl;
}

void Ext_student::setrukojopost(int rukojopost)
{
	this->rukojopost = rukojopost;
}

int Ext_student::getrukojopost(void)
{
	return this->rukojopost;
}

Ext_student::~Ext_student(void)
{
	cout << "and at this moment student knew...he fucked up" << endl;
}