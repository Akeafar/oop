#pragma once
#include <iostream>
#include "vPersona.h"

/*������� ����������� �� ��������� ����������. 
������� ����� ������� �� ������ �� ����� ���������, 
���������� ���������� ���������-��������� �� ����������� � ������� ��������� ���� ��������.*/

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