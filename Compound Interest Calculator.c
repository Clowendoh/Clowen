#include <stdio.h>
#include <math.h>

float CompoundInterest(float principal, float rate, float time, int n)
{
	return principal*pow((1+rate/(n*100)), n*time) - principal;
}

int main()
{
	float principal;
	float rate;
	int n;
	float time;
	
	printf("Enter principal amount: ");
	scanf("%f", &principal);
	
	printf("Enter rate (percentage): ");
	scanf("%f", &rate);
	
	printf("Enter n (number of times interest will be compounded): ");
	scanf("%d", &n);
	
	printf("Enter time (years): ");
	scanf("%f", &time);
	
	float calculateCompoundInterest=CompoundInterest(principal, rate, n, time);
	
	printf("\nCompound Interest=%.2f\n", CompoundInterest);
	
	return 0;
}