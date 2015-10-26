#pragma once
#include <iostream>

#include "Worker.h"
using namespace std;
class Turner : public Worker
{
	int rank;
public:
	Turner(void);
	int getrank(void);
	void setrank(int rank);
	~Turner(void);

	virtual void vShow(void);
};