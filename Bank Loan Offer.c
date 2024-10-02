#include <stdio.h>

int main()
{
	int age;
	float income;
	
	printf("Enter age: ");
	scanf("%d", &age);
	
	printf("Enter Annual Income: ");
	scanf("%f", &income);
	
	if(age>=21 && income>=21000)
	{
		printf("\nCongratulations you qualify for a loan\n");
	}	
	else{
		printf("\nUnfortunately, we are unable to offer you a loan at this time\n");
	}
	
	return 0;
}