/**********************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 1
**File Name: proj_1.cpp
***********************************************************************************/
//HEADER FILES
#include "q.h"
qele *head= null;
qele *current = head;

using namespace std;

int main() 

	
	return 0;	
}

NewItem ()
{
	
//	return current->next;
	
}

InitQueue (&head)
{
	
}

AddQueue(&head, item) 
{
	qele *temp;
	temp = (qele*) malloc (sizeof (qele));
	
	
	
	else { return current-> next; }
}

DelQueue(&head)
{
	
}

// Deletes header
RotateQ (&head)
{
	qele *temp;
	temp = (qele*) malloc (sizeof (qele));
	temp = header;
	header = temp->next;
	header->prev = NULL;
	FreeItem (temp);
}

FreeItem (item)
{
	free item;
}