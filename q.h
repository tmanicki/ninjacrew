/******************************************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 1
**File Name: q.h
******************************************************************************************************/
//HEADER FILES
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

//DATA STRUCTURES
typedef struct q-ele //Create a struct of type q-ele
{
	int payload;
	q-ele *prev;
	q-ele *next;
};

//FUNCTION DECLARATIONS
NewItem(); //returns a pointer to a new q-element
InitQueue(&head);//creates an empty queue, pointed to by the variable head
AddQueue(&head, item);//adds a queue item, pointed to by "item", to the queue pointed to by head
DelQueue(&head); //deletes an item from head and returns a pointer to the deleted item
RotateQ(&head);//moves the head pointer to the next element in the queue
FreeItem(item);//frees an item from memory