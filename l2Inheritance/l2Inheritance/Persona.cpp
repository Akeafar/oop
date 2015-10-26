#include "stdafx.h"
#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(void)
{
	cout << "Called persona's constructor"<< endl;
}

void Persona::setname(char *name)
{
	this->name=name;

}

void Persona::getname()
{
	cout << "Persona's name: " << this->name << endl;
}


Persona::~Persona(void)
{
	cout << "BURN THAT CLASS WITH FIRE!!11!1!! "<<this->name<<" shout coz that painfull ho-ho-ha-ha" << endl;
}