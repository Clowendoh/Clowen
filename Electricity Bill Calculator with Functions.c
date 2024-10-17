//program for the Electricity Bill Calculator that uses FUNCTION PROTOTYPES

/*
Program Aim:Use function prototypes to perform calculations
Author:Clowen Wendoh
Date:Thursday, 17th October 2024
*/

#include <stdio.h>

//function prototype
void InputValues(char CustomerID[], char CustomerName[], float*UnitsConsumed);
float Bill(float units);
void OutputBill(char CustomerID[], char CustomerName[], float UnitsConsumed, float ChargePerUnit, float TotalBill);

//main function
int main()
{
	char CustomerID[7], CustomerName[22];//[7] and [22]-used to limit amount of characters to be entered
	float UnitsConsumed, ChargePerUnit, TotalBill;
	
	//for obtaining the values entered by the user
	InputValues(CustomerID, CustomerName, &UnitsConsumed);
	
	//calculate total bill
	TotalBill=Bill(UnitsConsumed);
	
	//determine the charge per unit based on units consumed
	if(UnitsConsumed<=199)
		ChargePerUnit=1.20;
	else if(UnitsConsumed<400)
		ChargePerUnit=1.50;
	else if(UnitsConsumed<600)
		ChargePerUnit=1.80;
	else
		ChargePerUnit=2.00;
	
	//outputs the bill
	OutputBill(CustomerID, CustomerName, UnitsConsumed, ChargePerUnit, TotalBill);
	
	return 0;
}

//this function is used to obtain required data, which is entered the user
void InputValues(char CustomerID[], char CustomerName[], float *UnitsConsumed)
{
	printf("Enter Customer ID: ");
	scanf("%s", CustomerID);
	
	printf("Enter Customer Name: ");
	scanf("%s", CustomerName);
	
	printf("Enter Units Consumed: ");
	scanf("%f", UnitsConsumed);
}

//function for calculating the total bill
float Bill(float units)
{
	float TotalBill=0;
	
	if(units<=199)
	{
		TotalBill=units*1.20;
	}
	else if(units<400)
	{
		TotalBill=units*1.50;
	}
	else if(units<600)
	{
		TotalBill=units*1.80;
	}
	else
	{
		TotalBill=units*2.00;
	}
	
	//for calculating the amount to be surcharged if total bill exceeds Ksh. 400
	if(TotalBill>400)
	{
		TotalBill+=TotalBill*0.15;
	}
	
	//for ensuring the minimum bill is Ksh. 100
	if(TotalBill<100)
	{
		TotalBill=100;
	}
	return TotalBill;
}
	
//function for outputting the Electricity Bill and all details entered by the user
void OutputBill(char CustomerID[], char CustomerName[], float UnitsConsumed, float ChargePerUnit, float TotalBill)
{
	printf("\nElectricity Bill: ");
	printf("\nCustomer ID: %s", CustomerID);
	printf("\nCustomer Name: %s", CustomerName);
	printf("\nUnits Consumed: %.2f", UnitsConsumed);
	printf("\nCharge Per Unit: %.2f", ChargePerUnit);
	printf("\nTotal Amount To Pay: %.2f", TotalBill);
}	