#include "vPersona.h"
#define NULL 0

using namespace std;

void vPersona::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		vPersona * q = head;
		if (q->next == NULL)
		{
			q->next = this;
			this->next = NULL;
		}
		else
		{
			while (q->next != NULL)
			{
				q = q->next;
			};
			q->next = this;
			this->next = NULL;
		};
	};
};