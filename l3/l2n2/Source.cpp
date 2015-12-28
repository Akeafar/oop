#include <iostream>
#include <string>
#include "Employee.h"
#include "Engineer.h"
#include "Extramural student.h"
#include "vPersona.h"
#include "Turner.h"
#include "Worker.h"
#include "List.h"
#include "Company.h"

using namespace std;
vPersona * vPersona::head = NULL;

/*Создать Предприятие из имеющихся работников.
Вывести имена токарей со стажем не менее заданного, подсчитать количество студентов-заочников на предприятии и рабочих заданного года рождения.*/

void main()
{
	/*
	Employee emp;
	emp.setage(25);
	emp.setcash(35555);
	emp.setcorp("qwrety");
	emp.setname("Artas");
	emp.setrang(1);
	emp.setworktime(8);
	
	emp.vShow();
	*/

	Worker *q1 = new Worker;
	q1->setBirthday(1985);
	q1->setname("Vas9");
	q1->setworktime(8);
	q1->setcash(9999);


	Worker *q2 = new Worker;
	q2->setBirthday(1979);
	q2->setname("Ivan");
	q2->setworktime(6);
	q2->setcash(15999);

	Worker *q5 = new Worker;
	q5->setBirthday(1979);
	q5->setname("Oleg");
	q5->setworktime(9);
	q5->setcash(25999);


	Ext_student *q3 = new Ext_student;
	q3->setBirthday(1996);
	q3->setname("Maksim");
	q3->setcash(10);
	q3->setworktime(4);
	q3->setrukojopost(9000);

	Ext_student *q4 = new Ext_student;
	q4->setBirthday(1997);
	q4->setname("Kirill");
	q4->setcash(100);
	q4->setworktime(6);
	q4->setrukojopost(1000);

	Turner *q10 = new Turner;
	q10->setname("Kol9n");
	q10->setage(40);
	q10->setw_exp(14);
	q10->setrank(4);

	Turner *q11 = new Turner;
	q11->setname("Denis");
	q11->setage(55);
	q11->setw_exp(33);
	q11->setrank(99);

	Turner *q12 = new Turner;
	q12->setname("Ravshan");
	q12->setage(35);
	q12->setw_exp(8);
	q12->setrank(3);

	Company comp;
	comp.Insert(q1);
	comp.Insert(q2);
	comp.Insert(q3);
	comp.Insert(q4);
	comp.Insert(q5);
	comp.Insert(q10);
	comp.Insert(q11);
	comp.Insert(q12);
	comp.findTurnerByYear(10);
	cout << endl;
	comp.findWorkersByYear(1979);
	cout << endl;
	comp.findStudents();
	cout << endl;
	//comp.studentsPrint();




}