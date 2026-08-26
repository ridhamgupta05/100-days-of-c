#include <stdio.h>
int main ()
{
	int a,b;
	printf("Enter number 1: ");
	scanf("%d", &a);
	
	printf("Enter number 2: ");
	scanf("%d", &b);
	
	printf("\nAddition is \t\t\t %d\n", a+b);
	printf("Subtraction is \t\t\t %d\n", a-b);
	printf("Product is \t\t\t %d\n", a*b);
	printf("Division is \t\t\t %d\n", a/b);
	printf("Modulus is \t\t\t %d\n", a%b);
	return 0;


}
