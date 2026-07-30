#include <stdio.h>
int main ()
{
	int number;
	
	printf("Checking if the number lies between 50 to 100 or not.\n");
	printf("Enter number: \t");
	scanf("%d", &number);
	
	if (50<=number & number<=100)
	{
		printf("\n%d lies between 50 to 100.", number);
	}
	
	else
	{
		printf("\n%d does NOT lies between 50 to 100.", number);
	}
	return 0;
}
