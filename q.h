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
}

//FUNCTION DECLARATIONS
NewItem(); //returns a pointer to a new q-element
InitQueue(&head); //creates an empty queue,
AddQueue(&head);
DelQueue(&head);
RotateQ(&head);
FreeItem(item);