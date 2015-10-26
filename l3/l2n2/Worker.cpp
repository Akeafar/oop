#include <iostream>
#include "Worker.h"

using namespace std;


Worker::Worker(void)
{
	cout << "Called worker's constructor" << endl;
}

string Worker::getprofession(void)
{
	return this->profession;
}

string Worker::getworkplace(void)
{
	return this->workplace;
}

int Worker::getexp(void)
{
	return this->exp;
}


void Worker::setexp(int exp)
{
	this->exp = exp;
}

void Worker::setworkplace(string workplace)
{
	this->workplace = workplace;
}


void Worker::setproffesion(string profession)
{
	this->profession = profession;
}

void Worker::vShow(void)
{
	cout << "Profession" << endl;
}

Worker::~Worker(void)
{
	cout << "worker fired up, lulz" << endl;
}