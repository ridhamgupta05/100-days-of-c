#include <stdio.h>
int main ()
{
	int age,Indian;
	printf("Enter  your age (in years): \t");
	scanf("%d", &age);
	
	printf("Are you Indian? (1=Yes, 0=No): \t");
	scanf("%d", &Indian);
	
	
	
	if (age>=18 & Indian==1)
	{
		printf("\nYou are eligible to vote!");
	}
	
	else
	{
		printf("\nYou are NOT eligible to vote!");
	}
	return 0;
}
