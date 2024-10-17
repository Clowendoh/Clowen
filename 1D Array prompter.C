//Program for 1D array that prompts user to enter values

/*
Program Aim:Prompt user to enter values required for the 1D array
Author:Clowen Wendoh
Date:Tuesday, 15th October 2024
*/

#include <stdio.h>

int main()
{
	int x,v,e;
	
	//user enters array size
	printf("Enter Number of Array Elements: ");
	scanf("%d", &x);
	
	int Array[x];//for declaring the array size
	
	//user enters array elements
	printf("\nEnter Your %d Elements: \n", x);
	for(v=0;v<x;v++)
	{
		//prompts user to enter elements for each array as per its index
		printf("Element %d: ",v+1);
		scanf("%d", &Array[v]);
	}
	
	printf("\nArray Elements Are: ");//output of the array elements
	for(e=0;e<x;e++)
	{
		 printf("%d, ", Array[e]);
	}
	
	return 0;
}