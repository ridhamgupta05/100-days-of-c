#include <stdio.h>

int add(int *a, int *b);
int multiply(int *a, int *b);

int main()
{
    int a, b, op;
    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Choose:\n'1' for addition\n'2' for multiplication: ");
    scanf("%d", &op);

    if(op==1)
    {
        int sum=add(&a, &b);
        printf("%d", sum);
    }
    if(op==2)
    {
        int product=multiply(&a, &b);
        printf("%d", product);
    }
}

int add(int *a, int *b)
{
    int sum=*a+*b;
    return sum;
}

int multiply(int *a, int *b)
{
    int product=(*a)*(*b);
    return product;
}
