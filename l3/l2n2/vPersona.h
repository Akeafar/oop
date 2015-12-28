#pragma once
#include <iostream>
using namespace std;

class vPersona
{

public:
	vPersona *next;
	vPersona();
	virtual ~vPersona(){}
	virtual string getname(void) = 0; // ������ ����������� �������
	virtual int getrang(void) = 0;
	virtual int getage(void) = 0;
	virtual int getw_exp(void) = 0;

	virtual void setname(string name)=0;
	virtual void setrang(int rang) = 0;
	virtual void setage(int age) = 0;
	virtual void setw_exp(int Work_exp) = 0;

	virtual void vShow(void) = 0;

	void add();

protected:
	static vPersona *head; // ����������� ����������
	int age;
	string name;
	int rang;
	int Work_exp;
};



