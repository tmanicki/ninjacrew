/******************************************************************************************************
**Authors: Emily Falkner, Tim Manicki
**Class: CSE 430: Operating Systems
**Professor: Partha Dasgupta
**Assignment: Project 2
**File Name: thread_test.c
******************************************************************************************************/
#include "threads.h"

//GLOBAL VARIABLE
int global = 0;

//FORWARD DECLERATION
void ODEN(void);
void THOR(void);
void LOKI(void);

//MAIN
int main()
{
	
	InitQueue(RunQ);
	
	start_thread(ODEN);
	
	start_thread(THOR);
	
	start_thread(LOKI);

	run();
	
	return 0;
}

/******************************************************************************************************
** Below are all test functions
******************************************************************************************************/

//FUNCTION 1, NICKNAME ODEN
void ODEN(void)
{
	int StaffofOden = 0;
	printf("Begin ODEN\n");
	
	while(1)
	{
		printf("Thread ODEN:  Global Value: %d", global);
		global++;
		
		printf ("   Local Value: %d\n", StaffofOden);
		StaffofOden++;
		
		sleep(1);
		yeild();
	}
	
	
}

//FUNCTION 2, NICKNAME THOR
void THOR(void)
{
	int HammerofThor = 0;
	printf("Begin THOR\n");
	for (;;)
	{
		printf("Thread THOR:  Global Value: %d", global);
		global++;
		
		printf ("   Local Value: %d\n", HammerofThor);
		HammerofThor++;
		
		
		sleep(1);
		yeild();
	}
}

//FUNCTION 3, NICKNAME LOKI
void LOKI(void)
{
	int TricksterLoki = 0;
	printf("Begin LOKI\n");
	for (;;)
	{
		printf("Thread LOKI:  Global Value: %d", global);
		global++;
		
		printf ("   Local Value: %d\n", TricksterLoki);
		TricksterLoki++;
		
		
		sleep(1);
		yeild();
	}
}

