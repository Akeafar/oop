#pragma once
#include <iostream>
//#include "vPersona.h"

class vEmployee :public vPersona
{
protected:
	static vPersona *head; // статическая компонента
public:
	vPersona *next;
	virtual char* getName() const; // чистые виртуальные функции
	virtual void setName(const char *name_);
	int getAge() const;
	void setAge(const int age_);
	virtual void vShow(void);
	void add();
	//friend ostream& operator <<(ostream& out, vEmployee& e);
};



