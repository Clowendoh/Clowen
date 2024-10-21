//C structure program that prompts the user to enter required details
#include <stdio.h>//for printf() and scanf()

//user defined data type (structure)
struct book
{
	char title[30], author[30], ISBN[13];//%s
	/*
	"[]"-values inside these brackets represent the character limit
	Do NOT use SPACE instead you can use underscores "_"
	You won't be able to enter values required for the next field 
	*/
	int publication_year;//%i or %d
	float price;//%f or %F
}info;//"info"-for linking the variables in the structure to the main

int main()
{
	//prompt the user to enter required values
	printf("Enter Title: ");
	scanf("%s", &info.title);
	
	printf("Enter Author's Name: ");
	scanf("%s", &info.author);
	
	printf("Enter Publication Year: ");
	scanf("%d", &info.publication_year);
	
	printf("Enter ISBN: ");
	scanf("%s", &info.ISBN);
	
	printf("Enter Price:Ksh. ");
	scanf("%F", &info.price);
	
	//outputs the details entered by the user after the prompts
	printf("\nTitle: %s", info.title);
	printf("\nAuthor: %s", info.author);
	printf("\nPublication Year: %i", info.publication_year);
	printf("\nISBN: %s", info.ISBN);
	printf("\nPrice:Ksh. %.2f", info.price);//".2"-for the number of decimal places to be outputted
	
	return 0;
}