#include <stdio.h>
int main ()
{
	int a;
	printf("Enter number: ");
	scanf("%d", &a);
	
	printf("\nPre-Increment: %d\n", ++a); //first number is Increment by 1 and then stored. Here, a=a+1 is stored.
	printf("Post-Increment: %d\n", a++); //now first number will show output as 'a' then store a+1. Here, a=a+1 will be output but stored a=a+1+1.
	printf("Pre-Decrement: %d\n", --a); //first decrease number by 1 then store it. Here, a=a+1+1-1=a+1 will be stored.
	printf("Post-Decrement: %d\n", a--); //now first number will show output as 'a' then store a-1. Here, a=a+1 will be output but stored a=a+1-1=a.
	
	return 0;

}
