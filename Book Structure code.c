//C structure program 

/*
Program Aim:Use the data type 'structures'
Author:Clowen Wendoh
Date:Monday, 21st October 2024
*/

#include <stdio.h>//for printf()
#include <string.h>//for strcpy()

//user defined data type(structure)
struct book
{
	char title[30], author[30], ISBN[13];//"[]"-max. number of characters allowed
	int publication_year;
	float price;
}info;//"info"-for linking the variables in structure with the main 

int main()
{
	//"strcpy()"-for copying strings
	strcpy(info.title, "Introduction to C Programming");
	strcpy(info.author, "John Smith");
	info.publication_year=2022;
	strcpy(info.ISBN, "9780131103627");
	info.price=49.99;
	
	//for outputting the values of the field
	printf("\nTitle: %s", info.title);
	printf("\nAuthor: %s", info.author);
	printf("\nPublication Year: %d", info.publication_year);
	printf("\nISBN: %s", info.ISBN);
	printf("\nPrice: %.2f\n", info.price);
	
	return 0;
}