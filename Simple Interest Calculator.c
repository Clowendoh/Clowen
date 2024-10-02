#include <stdio.h>

int main()
{
	float principal;
	float time;
	float rate;
	float SimpleInterest;
	
	printf("Enter principal amount: ");
	scanf("%f", &principal);
	
	printf("Enter time: ");
	scanf("%f", &time);
	
	printf("Enter rate: ");
	scanf("%f", &rate);
	
	SimpleInterest=(principal*time*rate)/100;
	
	printf("SimpleInterest is %.2f", SimpleInterest);
	
	return 0;
}