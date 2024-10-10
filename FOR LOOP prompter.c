//"FOR LOOP" program that prompts the user to enter values
/*
Program Aim:Prompt user to enter values
Author:Clowen Wendoh
Date:Monday, 7th October 2024
*/

#include <stdio.h>

int main()
{
	int start;
	int stop;
	int i;
	int sum;
	
	printf("Enter Start Value: ");
	scanf("%d", &start);
	
	printf("Enter Stop Value: ");
	scanf("%d", &stop);
	
	printf("\nNumbers between %d and %d: \n", start, stop);
	
	for(i=start; i<=stop; i++)
	{
 	printf("%d, ", i);
 	
 	sum=sum+i;
 	sum+=i;
 	
	}
	
	printf("\nSum is %d: \n", sum);
	
	return 0;
}