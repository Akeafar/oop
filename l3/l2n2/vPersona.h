#pragma once
#include <iostream>
using namespace std;

class vPersona
{

public:
	vPersona *next;
	vPersona();
	virtual ~vPersona(){}
	virtual string getname(void) = 0; // чистые виртуальные функции
	virtual int getrang(void) = 0;
	virtual int getage(void) = 0;

	virtual void setname(string name)=0;
	virtual void setrang(int rang) = 0;
	virtual void setage(int age) = 0;

	virtual void vShow(void) = 0;

	void add();

protected:
	static vPersona *head; // статическая компонента
	int age;
	string name;
	int rang;
};



