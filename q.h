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
typedef struct qele //Create a struct of type qele
{
	int payload;
	qele *prev;
	qele *next;
};

//FUNCTION DECLARATIONS
qele *NewItem(); //returns a pointer to a new q-element
void InitQueue(qele *head);//creates an empty queue, pointed to by the variable head
void AddQueue(qele *head, qele *item);//adds a queue item, pointed to by "item", to the queue pointed to by head
qele *DelQueue(qele *head); //deletes an item from head and returns a pointer to the deleted item
void RotateQ(qele *head);//moves the head pointer to the next element in the queue
//void FreeItem(q-ele *item);//frees an item from memory