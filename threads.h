/******************************************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 2
**File Name: threads.h
******************************************************************************************************/

#ifndef THREADS_H
#define THREADS_H

//include files
#include "q.h"

#define TheSizeOfTheStack 8192; 
void start_thread(void (*function)(void));
void run();
void yeild();

void run()
{
	ucontext_t parent;
	getcontext(&parent);
	swapcontext(&parent, &(RunQ->context));	
}

 // begin pseudo code
  //   allocate a stack (via malloc) of a certain size (choose 8192)
  //   allocate a TCB (via malloc)
  //   call init_TCB with appropriate arguments
  //   call addQ to add this TCB into the “RunQ” which is a global header pointer
  //end pseudo code

void start_thread(void (*function)(void))
{
	TCB_t *tcb = NewItem ();
	void *StackofStacks = (void *) malloc (8192);
	init_TCB (tcb, function, StackofStacks,8192);
	AddQueue(RunQ,tcb);
	
}

void yeild()
{
	ucontext_t parent;
	getcontext(&parent);
	RunQ->context = parent;
	RotateQ(RunQ); //rotates Q
	swapcontext(&parent, &(RunQ->context));
}
#endif
