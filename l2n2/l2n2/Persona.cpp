#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(void)
{
	cout << "Called persona's constructor" << endl;
}

void Persona::setname(string name)
{
	this->name = name;

}

string Persona::getname(void)
{
	return this->name;//cout << "Persona's name: " << this->name << endl;
	
}


Persona::~Persona(void)
{
	cout << "BURN THAT CLASS WITH FIRE!!11!1!! shout coz that painfull ho-ho-ha-ha" << endl;
}