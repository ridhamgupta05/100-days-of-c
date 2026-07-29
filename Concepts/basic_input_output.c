#include <stdio.h>

int main()
{
    int a, b, res;

    printf("Enter your 1st number: ");
    scanf("%d", &a);

    printf("Enter your 2nd number: ");
    scanf("%d", &b);

    res = a + b;

    printf("Sum is: %d\n", res);

    return 0;
}