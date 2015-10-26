#pragma once
#include <iostream>

#include "Worker.h"
using namespace std;
class Engineer : public Worker
{
	int category;
	string specialization;
public:
	Engineer(void);
	~Engineer(void);

	int getcategory(void);
	string getspecialization(void);

	void setcategory(int category);
	void setspecialization(string specialization);
};