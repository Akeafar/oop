#pragma once
#include <iostream>

#include "Worker.h"
using namespace std;
class Ext_student : public Worker
{
	int rukojopost;

public:

	Ext_student(void);
	~Ext_student(void);

	int getrukojopost(void);

	void setrukojopost(int rukojopost);

};
