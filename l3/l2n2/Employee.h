#pragma once
#include <iostream>
#include "vPersona.h"

using namespace std;

class Employee :
	public vPersona
{
	int cash;
	string corp;//corporation
	int worktime;
public:
	Employee(void);
	void setcash(int cash);
	void setworktime(int worktime);
	void setcorp(string corp);
	int getcash(void);
	int getworktime(void);
	string getcorp(void);


	virtual string getname(void); // ������ ����������� �������
	virtual int getrang(void);
	virtual int getage(void);

	virtual void setname(string name);
	virtual void setrang(int rang);
	virtual void setage(int age);


	virtual void vShow(void);
	static void show();
	virtual void add();



	

	~Employee();
private:
	//static vPersona *head; // ����������� ����������
	int age;
	string name;
	int rang;

};