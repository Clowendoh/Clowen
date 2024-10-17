//program for the 2D Array that prompts the user to enter values
/*
Program Aim:Prompt user to enter required values for the 2D Array
Author:Clowen Wendoh
Date:Tuesday, 15th October 2024
*/

#include <stdio.h>

int main()
{
	int Rows, Columns;
	
	//prompts the user to enter rows values
	printf("Enter Rows: ");
	scanf("%d", &Rows);
	
	//prompts the user to enter columns values
	printf("Enter Columns: ");
	scanf("%d", &Columns);
	
	int Array[Rows][Columns];//for declaring the 2D Array
	
	//prompts the user to enter element values
	printf("\nEnter Your Elements: \n");
	int x;
	for(x=0; x<Rows; x++)
	{
		int y;
		for(y=0; y<Columns; y++)
		{
			printf("Enter values for Array[%d][%d]: ",x,y);
			scanf("%d", &Array[x][y]);
		}
	}
	
	//outputs array elements
	printf("\n2D Array Values are: \n");
	int m;
	for(m=0; m<Rows; m++)
	{
		int n;
		for(n=0; n<Columns; n++)
		{
			printf("%d ", Array[m][n]);
		}
		printf("\n");
	}
	
	
	return 0;
}