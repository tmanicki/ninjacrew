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
#include <tcb.h>

//START HEADER GUARD
#ifndef Q_H
#define Q_H

//DATA STRUCTURES


TCB_t *first= null; //header pointer

//FUNCTION DECLARATIONS
struct TCB_t*  DelQueue(struct TCB_t  *head)
{
	struct TCB_t  *item = first;
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

void RotateQ(struct TCB_t  *head)
{
	AddQueue(head, delQueue(head));	//Moves the head pointer to the next element in the queue
	return;
}

//print for testing
void PrintQueue(struct TCB_t  *head)
{
	struct TCB_t  *item = first; //get the 1st element
	
	//see if the queue is empty
	if (first != NULL)
	{
		//check to see if mutiple elements
		if (first->next != NULL)
		{
			struct TCB_t  *last = first->prev; //get the last item
			
			//loop through the elements
			while (item !NULL && (item->payload != last->payload))
			{
				printf("This it the payload: %d \n", item ->payload); //print the payload
				item = item->next; //go to the next item
				sleep(1);
			}
		}
		if (item != NULL)
		{
			printf("The payload is: %d \n", item->payload);
		}
	}
	else
	{
			priftf("The queue is empty.")
	}
	return
}

struct TCB_t * NewItem () // cretes a new queue
{
	TCB_t  *head;
	head = (TCB_t *) malloc (sizeof (TCB_t ));
	TCB_t ->next= NULL;
	TCB_t ->prev = NULL;
	
	return head;
	
}
//creates a new queue
void InitQueue (struct TCB_t *head)
{
	//set head to null
	head = NULL;
}

void AddQueue(struct TCB_t *head,struct TCB_t *item) //adds to queue
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


void FreeItem (struct TCB_t item) { free (item);}

//END HEADER GUARD
#endif