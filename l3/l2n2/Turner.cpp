#include <iostream>
#include "Turner.h"
#include <string>
using namespace std;

Turner::Turner(void)
{
	//cout << "Called Turner's constructor" << endl;
}

int Turner::getrank(void)
{
	return this->rank;
}

void Turner::setrank(int rank)
{
	this->rank = rank;
}

void Turner::vShow(void)
{

	cout << "Name " << this->name << endl;
	cout << "Age " << this->age << endl;
	cout << "rank " << this->rank << endl;
	cout << "Work experience " << this->Work_exp << endl;
}

Turner::~Turner(void)
{
	//cout << "Turner is going out..." << endl;
}