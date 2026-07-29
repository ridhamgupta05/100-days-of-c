#include <stdio.h>
int main ()
{
    int a, b, sum, diff, product, modulus, division;
    
    printf("Enter first number:\t\t");
    scanf("%d", &a);
    printf("Enter second number:\t\t");
    scanf("%d", &b);

    sum = a+b;
    printf("Sum is:\t\t\t\t%d\n", sum);
    
    diff = a-b;
    printf("Difference is:\t\t\t%d\n", diff);
    
    product = a*b;
    printf("Product is:\t\t\t%d\n", product);

    division = a/b;
    printf("Division is:\t\t\t%d\n", division);
    return 0;


}