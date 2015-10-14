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
typedef struct q //Create a struct of type qele
{
	int payload;
	qele *prev;
	qele *next;
}qele;

qele *first= null; //header pointer

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

//print for testing
void PrintQueue(struct qele *head)
{
	struct qele *item = first; //get the 1st element
	
	//see if the queue is empty
	if (first != NULL)
	{
		//check to see if mutiple elements
		if (first->next != NULL)
		{
			struct qele *last = first->prev; //get the last item
			
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

struct qele* NewItem () // cretes a new queue
{
	qele *head;
	head = (qele*) malloc (sizeof (qele));
	qele->next= NULL;
	qele->prev = NULL;
	
	return head;
	
}
//creates a new queue
void InitQueue (*head)
{
	//set head to null
	head = NULL;
}

void AddQueue(*head, *item) //adds to queue
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


void FreeItem (item) { free (item);}

//END HEADER GUARD
#endif