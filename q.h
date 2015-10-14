/******************************************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 1
**File Name: q.h
******************************************************************************************************/
//HEADER FILES
#include <stdlib.h>
#include <stdio.h>


//START HEADER GUARD
#ifndef Q_H
#define Q_H

//DATA STRUCTURES
typedef struct q //Create a struct of type qele
{
	int payload;
	qele *prev;
	qele *next;
}qele;


//FUNCTION DECLARATIONS
struct qele* NewItem(); //returns a pointer to a new q-element
void InitQueue(struct qele* head);//creates an empty queue, pointed to by the variable head
void AddQueue(struct qele* head, struct qele* item);//adds a queue item, pointed to by "item", to the queue pointed to by head
struct qele*  DelQueue(struct qele *head)
{
	struct qele *item = first;
	//check if queue is empty
	if(first != NULL)
	{
		if(first ->next != NULL) //check to see if there are elements in the queue
		{
			first->prev->next = first->next; //change the prev and next to the right allocations
			first->next->prev = first->prev;
			first = first->next;
		}
		else // if only one item
		{
		first = NULL;
			}
	}
	
	return item;
	
	
}

void RotateQ(struct qele *head)
{
	AddQueue(head, delQueue(head));	//Moves the head pointer to the next element in the queue
	return;
}

//END HEADER GUARD
#endif