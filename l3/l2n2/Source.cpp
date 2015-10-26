#include <iostream>
#include <string>
#include "Employee.h"
#include "Engineer.h"
#include "Extramural student.h"
#include "Persona.h"
#include "Turner.h"
#include "Worker.h"

using namespace std;

void main()
{
	Employee Emp;
	Emp.setname("YAC9");
	Emp.setcash(1005009000);
	Emp.setcorp("roga i kopito");
	Emp.setworktime(0);

	Ext_student student;
	student.setcash(-1);
	student.setname("Makson");
	student.setrukojopost(9000);
	student.setworktime(0);
	student.setworkplace("parawa");
	
	Engineer engineer;
	engineer.setname("lisii");
	engineer.setcash(50000);
	engineer.setspecialization("Alko voiska");
	engineer.setcategory(9999);
	engineer.setexp(99);
	engineer.setworktime(8);
	engineer.setworkplace("tam gde mojno pospat");


	Turner turner;
	turner.setname("pahan Karlo");
	turner.setcash(5);
	turner.setexp(80);
	turner.setrank(10);
	turner.setworkplace("turbo stanok");
	turner.setworktime(24);


	


	cout << endl << endl << endl;
	cout << "Top corp- " << Emp.getcorp() << endl;
	cout << "Vladelec top corpi " << Emp.getname() << endl;
	cout << "Ego rabi" << turner.getname() << " eti buhaut " << engineer.getname() << " a eto raspizd9i-" << student.getname() << endl;
	cout << "prosto komanda me4ti" << endl;
	cout << "rebata polu4aut " << turner.getcash() << " eto alkawi " << engineer.getname() << " a rab ewe i platit " << student.getcash() << " zato hoz9in ne pri delah i imeet" << Emp.getcash() << endl;
	cout << endl;

}