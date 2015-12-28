#pragma once
#include <iostream>
#include "vPersona.h"

/*Создать Предприятие из имеющихся работников. 
Вывести имена токарей со стажем не менее заданного, 
подсчитать количество студентов-заочников на предприятии и рабочих заданного года рождения.*/

class Company
{
public:
	Company()
	{
		stud_count = 0;
	}

	~Company();
	void Insert(vPersona *);
	void ShowCompany(void);
	void findWorkersByYear(int DateOfYear);
	void findTurnerByYear(int DownLimitYear);
	void studentsPrint();
	void findStudents();
private:
	vPersona *stud_count = 0;
};