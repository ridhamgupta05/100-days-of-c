#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);

int main()
{
    int a, b, op, result;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Choose:\n'1' for addition\n'2' for multiplication: ");
    scanf("%d", &op);

    int (*operation)(int, int);

    if(op==1)
    {
        operation=add;
    }
    if(op==2)
    {
        operation=multiply;
    }
    else
    {
        printf("Invalid operation");
    }
    result=operation(a,b);
}

int add(int a, int b)
{
    int sum=a+b;
    return sum;
}

int multiply(int a, int b)
{
    int product=(a)*(b);
    return product;
}
