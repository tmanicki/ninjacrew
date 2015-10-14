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

NewItem ()
{
	
//	return current->next;
	return current->item;
	
}

InitQueue (&Head)
{
	qele *temp, *temp2;
	temp = (qele*) malloc (sizeof (qele));
	temp2 = (qele*) malloc (sizeof (qele))
	
	if (first==NULL)
	{
		head=temp;
		head->next = NULL;
		head->prev = NULL; 
	}
	
	else
	{
		temp2=head->next;
		
		head->next=temp;
		temp->prev = head;
		temp->next = temp2;
	}
	
}

AddQueue(&head, item) 
{
	head->payload = item;
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
	free item;
}