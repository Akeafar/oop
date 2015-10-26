#include <iostream>
#include "Employee.h"
#include <string>

using namespace std;

Employee::Employee(void)
{
	cout << "Called Employee's constructor" << endl;
}

int Employee::getcash(void)
{
	return this->cash;
}

string Employee::getcorp(void)
{
	return this->corp;
}

int Employee::getworktime(void)
{
	return this->worktime;
}

int Employee::getage(void)
{
	return this->age;
}

int Employee::getrang(void)
{
	return this->rang;
}

string Employee::getname(void)
{
	return this->name;
}

void Employee::setcorp(string corp)
{
	this->corp = corp;
}

void Employee::setworktime(int worktime)
{
	this->worktime = worktime;
}

void Employee::setcash(int cash)
{
	this->cash = cash;
}

void Employee::setage(int age)
{
	this->age=age;
}

void Employee::setrang(int rang)
{
	this->rang = rang;
}

void Employee::setname(string name)
{
	this->name = name;
}



void Employee::show()
{
	vPersona *app = head;
	while (app)
	{
		cout << "QQWWEE" << endl;
		app = app->next;
	}
}

void Employee::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		vPersona * q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		};
	};
}

void Employee::vShow(void)
{
	cout << "Corp " << this->corp << endl;
	cout << "Rang " << this->rang << endl;
	cout << "Age " << this->age << endl;
	cout << "Name " << this->name<<endl  ;
	cout << "Worktime " << this->worktime << endl;
	cout << "Cash " << this->cash << endl;
}




Employee::~Employee(void)
{
	cout << "FUCK THE MASTER " << endl;
}