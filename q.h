/******************************************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 2
**File Name: q.h
******************************************************************************************************/
//HEADER FILES
#include <stdlib.h>
#include <stdio.h>
#include "tcb.h"

//START HEADER GUARD
#ifndef Q_H
#define Q_H

//DATA STRUCTURES


TCB_t *first= NULL; //header pointer
TCB_t *RunQ = NULL; //runq pointer

//FORWARD FUNCTION DECLARATIONS
struct TCB_t*  DelQueue(struct TCB_t  *head);
struct TCB_t * NewItem ();
void InitQueue (struct TCB_t *head);
void AddQueue(struct TCB_t *head, struct TCB_t *item);
void RotateQ(struct TCB_t  *head);

void AddQueue(struct TCB_t *head, struct TCB_t *item) //adds to queue
{
	int JesterTester = 0; 
	
	if (head == NULL) // no queue
	{
		JesterTester = 1;
	}
	
	else if (head->next == NULL) // only 1 queue in list
	{
		JesterTester = 2;
	}
		
	else // multiple queus in list
	{
		JesterTester = 3;	
	}
	
	
	switch (JesterTester)
	{
		case 1: //NO QUEUE
		first->prev = NULL;
		first->next = NULL;
		first = item;
		break;
		
		case 2: // ONLY 1 IN QUEUE IN LIST
		first->next = item;
		first->prev = item;
		item->next= first;
		item->prev = first;
		break;
		
		case 3: //MULTIPLE QUEUES IN LIST
		item->prev = first->prev; 
		item->next = first; 
		first->prev->next = item; 
		first->prev = item;
		break;
		
		default:
		break;
		
	}
	
	RunQ = first; // makes sure RunQ is always the same as first
}

struct TCB_t*  DelQueue(struct TCB_t  *head)
{
	struct TCB_t  *temp = head;
	//check if queue is empty
	if(first != NULL)
	{
		if(first->next == NULL)// if only one item
		{
			first = NULL;
		}
		
		else  //check to see if there are elements in the queue
		{
			first->prev->next = first->next; //change the prev and next to the right allocations
			first->next->prev = first->prev;
			first = first->next;
		}
	}
	
	return temp;
	
	
}

//creates a new queue
void InitQueue (struct TCB_t *head)
{
	//set head to null
	head = NULL;
}

struct TCB_t * NewItem () // cretes a new queue
{
	TCB_t  *newItem;
	newItem = (TCB_t *) malloc (sizeof (TCB_t ));
	newItem->next = NULL;
	newItem->prev = NULL;
	
	return newItem;
	
}

void RotateQ(struct TCB_t  *head)
{
	AddQueue(head, DelQueue(head));	//Moves the head pointer to the next element in the queue
	return;
}

//void FreeItem (struct TCB_t item) { free (item);}

//END HEADER GUARD
#endif
