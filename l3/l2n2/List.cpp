#include "List.h"

List::~List()
{
	vPersona *app;
	while (startPoint)
	{
		app = startPoint;
		startPoint = startPoint->next;
		delete app;
	}
}

void List::Insert(vPersona *app)
{
	vPersona *app1;
	app1 = startPoint;
	startPoint = app;
	app->next = app1;
}

void List::Show(void)
{
	vPersona *app1;
	app1 = startPoint;
	while (app1)
	{
		app1->vShow();
		app1 = app1->next;
	}
}