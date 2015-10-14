/******************************************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 2
**File Name: threads.h
******************************************************************************************************/
#define TheSizeOfTheStack 8192; 

void start_thread(void (*function)(void))
{ // begin pseudo code
  //   allocate a stack (via malloc) of a certain size (choose 8192)
  //   allocate a TCB (via malloc)
  //   call init_TCB with appropriate arguments
  //   call addQ to add this TCB into the “RunQ” which is a global header pointer
  //end pseudo code
	
	TCB_T *tcb = newItem();
	void *StackofStacks = (void* ) malloc (TheSizeOfTheStack);
	init_TCB(tcb,function,StackofStacks,TheSizeOfTheStacks);
	AddQueue(&RunQ,tcb);
	
}