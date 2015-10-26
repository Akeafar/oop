#pragma once
#include <iostream>
#include "vPersona.h"

class List
{
public:
	List()
	{
		startPoint = 0;
	}
	~List();
	void Insert(vPersona *);
	void Show(void);

private:
	vPersona *startPoint;
};