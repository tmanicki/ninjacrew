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
void oden(void)
{
	int local = 0;
	printf("ODEN");
	//while(1)
	for (;;)
	{
		printf("Thread Oden:  Global Value: %d   Local Value: %d\n", global, local);
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
	printf("THOR");
	for (;;)
	{
		printf("Thread Thor:  Global Value: %d   Local Value: %d\n", global, local);
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
	printf("LOKI");
	for (;;)
	{
		printf("Thread Loki:  Global Value: %d   Local Value: %d\n", global, local);
		global++;
		local++;
		sleep(1);
		yeild;
	}
}

//main
int main()
{
	
	InitQueue(RunQ);
	
	start_thread(oden);
	
	start_thread(thor);
	
	start_thread(loki);

	run();
	
	return 0;
}
