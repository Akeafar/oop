#include <iostream>
#include <string>
#include "Employee.h"
#include "Engineer.h"
#include "Extramural student.h"
#include "vPersona.h"
#include "Turner.h"
#include "Worker.h"
#include "List.h"

using namespace std;
vPersona * vPersona::head = NULL;

void main()
{
	
	Employee emp;
	emp.setage(25);
	emp.setcash(35555);
	emp.setcorp("qwrety");
	emp.setname("Artas");
	emp.setrang(1);
	emp.setworktime(8);
	
	emp.vShow();

}