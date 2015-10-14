/**********************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 1
**File Name: proj_1.cpp
***********************************************************************************/
//HEADER FILES
#include "q.h";
//Libraries
#include<stdio.h>;
//global variables
qele *first= null; //header pointer
//qele *current = head; //current pointer 


int main() 

	
	return 0;	
}

NewItem () // cretes a new queue
{
	qele *head;
	head = (qele*) malloc (sizeof (qele));
	qele->next= NULL;
	qele->prev = NULL;
	
	return head;
	
}
//creates a new queue
InitQueue (*head)
{
	//set head to null
	head = NULL;
}

AddQueue(*head, *item) //adds to queue
{
	if (head == NULL) // no queue
	{
		item->next = NULL;
		item->prev = NULL:
		first = item;
	}
	
	else
	{
		if (head->next=NULL) // only 1 queue in list
		{
			first->next = item;
			first->prev = item;
			item-> next= first;
			item-> prev = first;
		}
		
		else // multiple queus in list
		{
			item->prev = first->prev; 
			item->next = first; 
			first->prev->next = item; 
			first->prev = item; 
		}
	}
}

DelQueue(&head)
{
	qele *temp;
	temp = (qele*) malloc (sizeof (qele));
	
	if (head->prev == NULL)
	{
		if (head->next == NULL)
		{
			free (head);
		}
	}
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
	free (item);
}