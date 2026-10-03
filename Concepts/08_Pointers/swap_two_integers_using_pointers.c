#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, b;
    a=907;
    b=709;
    printf("Before Swap\na=%d, b=%d\n", a, b);
    swap(&a, &b);
    printf("After Swap\na=%d, b=%d\n", a, b);


}

void swap(int *a, int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}