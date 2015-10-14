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
		printf("Thread 1:  Global Value: %d   Local Value: %d\n", global, local);
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
		printf("Thread 2:  Global Value: %d   Local Value: %d\n", global, local);
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
		printf("Thread 1:  Global Value: %d   Local Value: %d\n", global, local);
		global++;
		local++;
		sleep(1);
		yeild;
	}
}

//main
int main()
{
	printf ("test1\n");
	InitQueue(RunQ);
	printf ("test2\n");
	start_thread(odin);
	printf ("test3\n");
	start_thread(thor);
	printf ("test4\n");
	start_thread(loki);
	printf ("test5\n");
	run();
	
	return 0;
}
