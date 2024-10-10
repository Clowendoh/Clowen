//"WHILE LOOP" program that prompts the user to enter values

/*
Program Aim:prompt the user to enter values
Author:Clowen Wendoh
Date:Monday, 7th October 2024
*/

#include <stdio.h>

int main ()
{
	int start;
	int stop;
	int sum;
	
	printf("Enter Start Value: ");//prompts the user to enter value
	scanf("%d", &start);//allows the user to enter value
	
	printf("Enter Stop Value: ");
	scanf("%d", &stop);
	
	//outputs all numbers between the starting and stopping values
	printf("\nNumbers between %d and %d\n", start, stop);
	
	while (start < stop)
	{
	printf("%d, ", start);	
	start++;
	
	sum=sum+start;
	sum+=start;
	
	}
	
	printf("\nSum is %d\n", sum);
	
	return 0;
}