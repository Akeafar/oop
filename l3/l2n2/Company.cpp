#include "Company.h"
#include "Worker.h"
#include <string>
#include <iostream>
#include <algorithm>
#include "Extramural student.h"
#include "Turner.h"

Company::~Company()
{
	vPersona *pers;
	while (stud_count)
	{
		pers = stud_count;
		stud_count = stud_count->next;
		delete pers;
	}
}

void Company::Insert(vPersona *app)
{
	vPersona *pers1;
	pers1 = stud_count;
	stud_count = app;
	app->next = pers1;
}

void Company::ShowCompany(void)
{
	vPersona *pers1;
	pers1 = stud_count;
	while (pers1)
	{
		pers1->vShow();
		pers1 = pers1->next;
	}
}

void Company::findWorkersByYear(int DateOfYear)
{
	vPersona *pers1;
	int worker_count = 0;
	pers1 = stud_count;
	Worker wk;
	while (pers1)
	{
		if (typeid(*pers1).name() == typeid(wk).name())
		{
			if (dynamic_cast<Worker&>(*pers1).getBirthday() == DateOfYear)
			{
				worker_count++;
				//pers1->vShow();
				//cout << "Worker " << worker_count;
				//return;
			}
		}
		pers1 = pers1->next;
	}
	cout << "Worker " << worker_count;
	//cout << "Nothing found" << endl;
}


void Company::findTurnerByYear(int DownLimitYear)
{
	vPersona *pers1;
	//int worker_count = 0;
	pers1 = stud_count;
	Turner turn;
	while (pers1)
	{
		if (typeid(*pers1).name() == typeid(turn).name())
		{
			if (dynamic_cast<Turner&>(*pers1).getw_exp() >= DownLimitYear)
			{
				//worker_count++;
				pers1->vShow();
				cout << endl;
				//cout << "Worker " << worker_count;
				//return;
			}
		}
		pers1 = pers1->next;
	}
	//cout << "Worker " << worker_count;
	//cout << "Nothing found" << endl;
}

void Company::findStudents()
{
	vPersona *pers1;
	int students_count = 0;
	pers1 = stud_count;
	Ext_student ES;
	Worker wk;
	while (pers1)
	{
		if (typeid(*pers1).name() == typeid(ES).name())
		{
			//if (dynamic_cast<Worker&>(*pers1).getBirthday() == DateOfYear)
			{
				students_count++;
				//pers1->vShow();
				//cout << "Students " << students_count;
				//return;
			}
		}
		pers1 = pers1->next;
	}
	cout << "Students " << students_count;
	//cout << "Nothing found" << endl;
}
