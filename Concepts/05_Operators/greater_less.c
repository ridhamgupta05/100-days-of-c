#include <stdio.h>
int main ()
{
	int a,b;
	printf("Enter number 1: ");
	scanf("%d", &a);
	
	printf("Enter number 2: ");
	scanf("%d", &b);
	printf("\n%d>%d is %d\n",a,b,a>b);
	printf("%d<%d is %d\n",a,b,a<b);
	printf("%d>=%d is %d\n",a,b,a>=b);
	printf("%d<=%d is %d\n",a,b,a<=b);
	printf("%d==%d is %d\n",a,b,a==b);
	printf("%d!=%d is %d\n",a,b,a!=b);
	printf("\nWhere, 1=True and 0=False\n");
	return 0;


}
