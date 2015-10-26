#include <iostream>
#include "Engineer.h"

using namespace std;


Engineer::Engineer(void)
{
	cout << "Called Engineer's constructor" << endl;
}

string Engineer::getspecialization(void)
{
	return this->specialization;
}

int Engineer::getcategory(void)
{
	return this->category;
}

void Engineer::setspecialization(string specialization)
{
	this->specialization = specialization;
}

void Engineer::setcategory(int category)
{
	this->category = category;
}

void Engineer::vShow(void)
{
	cout << "Engineer category " << this->category<<endl;
}

Engineer::~Engineer(void)
{
	cout << "Engineer get drunk and told dont disturb him" << endl;
}