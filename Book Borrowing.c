#include <stdio.h>

int main ()
{
	int BookID;
	int DueDate;
	int ReturnDate;
	int DaysOverdue;
	int FineRate;
	int FineAmount;
	
	printf("Enter Book ID: ");
	scanf("%d", &BookID);
	
	printf("Enter Due Date: ");
	scanf("%d", &DueDate);
	
	printf("Enter Return Date: ");
	scanf("%d", &ReturnDate);
	
	DaysOverdue=ReturnDate-DueDate;
	printf("\nDays Overdue is %d\n", DaysOverdue);
	
	
	
	if(DaysOverdue<8)
	{
		FineRate=20;
		FineAmount=DaysOverdue*FineRate;
	}
	else if(DaysOverdue<15)	
	{
		FineRate=50;
		FineAmount=DaysOverdue*FineRate;
	}
	else
	{
		FineRate=100;
		FineAmount=DaysOverdue*FineRate;
	}

	   printf("\nBook ID is %d\n", BookID);
	   printf("Due Date is %d\n", DueDate);
	   printf("Return Date is %d\n", ReturnDate);
	   printf("Days Overdue is %d\n", DaysOverdue);
	   printf("Fine Amount is %d\n", FineAmount);
	
	return 0;
}