//program for the "DO WHILE LOOP" that prompts the user to enter values. 

/*
Program Aim:prompt user to enter values
Author:Clowen Wendoh
Date:Monday, 7th October 2024
*/

#include <stdio.h>

int main()
{
	int start;
	int stop;
	
	do
	{
	printf("Enter Start Value: ");
	scanf("%d", &start);
	
	printf("Enter Stop Value: ");
	scanf("%d", &stop);
	
	if(start > stop)
		{
		printf("\nValues between stop and start\n");	
		}
	}	while (start > stop);
	
	//outputs numbers between the starting and stopping values
	printf("\nNumbers between %d and %d\n", start, stop);

	do
	{
		printf("%d, ", start);
		start++;
	}
	while (start <= stop);
	
	
	return 0;
}