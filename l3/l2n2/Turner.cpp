#include <iostream>
#include "Turner.h"

using namespace std;

Turner::Turner(void)
{
	cout << "Called Turner's constructor" << endl;
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
	cout << "rank " << this->rank << endl;
}

Turner::~Turner(void)
{
	cout << "Turner is going out..." << endl;
}