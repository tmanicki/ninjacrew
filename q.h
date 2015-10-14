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
	//checks if the queue is empty
	
}

void RotateQ(struct qele *head)
{
	*head = (*head)-> next; //Moves the head pointer to the next element in the queue
}

//END HEADER GUARD
#endif