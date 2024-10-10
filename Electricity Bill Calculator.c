//program to calculate electricity bill
/*
Program Aim:Calculate Electricity Bill
Author:Clowen Wendoh
Date:Sunday, 6th Oct 2024
*/

#include <stdio.h>

int main()
{
	int CustomerID;
	char CustomerName[49];
	float UnitConsumed;
	float ChargePerUnit;
	float Bill;
	float Surcharge;
	float TotalBill;
	
	printf("Enter Customer ID: ");//prompts user to enter Customer ID
	scanf("%d", &CustomerID);//Reads and Stores the user's input
	
	printf("Enter Customer Name: ");
	scanf("%s", &CustomerName);
	
	printf("Enter Unit Consumed: ");
	scanf("%.2f", &UnitConsumed);
	
	if (UnitConsumed<=199)
	{
		ChargePerUnit=1.20;
		Bill=UnitConsumed*1.20;
	}
	else if (UnitConsumed>=200 && UnitConsumed<400)
	{
		ChargePerUnit=1.50;
		Bill=UnitConsumed*1.50;
	}
	else if (UnitConsumed>=400 && UnitConsumed<600)
	{
		ChargePerUnit=1.80;
		Bill=UnitConsumed*1.80;
	}
	else
	{
		ChargePerUnit=2.00;
		Bill=UnitConsumed*2.00;
	}
	
	printf("\nBill=Ksh. %d\n", Bill);//outputs the bill
	
	if(Bill>400)
	{
		Surcharge=Bill*(15/100);
	}
	else if(Bill >= 100)
	{
		printf("Your Bill is Above Minimum");
	}
	
	printf("\nSurcharge Bill=Ksh. %.2f\n", Surcharge);//outputs amount to be surcharged
	
	TotalBill=Bill+Surcharge;//calculates the total bill
	printf("\nTotal Bill=Ksh. %.2f\n", TotalBill);
	
	//outputs all details entered by the user 
	printf("\nCustomer ID: %d", CustomerID);
	printf("\nCustomer Name: %s",CustomerName);
	printf("\nUnits Consumed: %.2f", UnitConsumed);
	printf("\nCharges Per Unit:Ksh %.2f", ChargePerUnit);
	printf("\nTotal Amount To Pay:Ksh %.2f", TotalBill);
	
	return 0;
}