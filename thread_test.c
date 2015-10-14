/******************************************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 2
**File Name: thread_test.c
******************************************************************************************************/
#include "threads.h"

//global variable
int global = 0;

//funtion 1
void odin(void)
{
	int local = 0;
	
	while(1)
	{
		print("Thread 1:  Global Value: %d   Local Value: %d\n", global, local);
		global++;
		local++;
		sleep(1);
		yeild;
	}
}

//funtion 2
void thor(void)
{
	int local = 0;
	
	while(1)
	{
		print("Thread 2:  Global Value: %d   Local Value: %d\n", global, local);
		global++;
		local++;
		sleep(1);
		yeild;
	}
}

//funtion 3
void loki(void)
{
	int local = 0;
	
	while(1)
	{
		print("Thread 1:  Global Value: %d   Local Value: %d\n", global, local);
		global++;
		local++;
		sleep(1);
		yeild;
	}
}

//main
int main()
{
	initQueue(RunQ);
	
	startThread(odin);
	startThread(thor);
	startThread(loki);
	run();
	
	return 0;
}
