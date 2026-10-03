#include <stdio.h>

int main()
{
    int arr[]={10, 20, 30, 40, 50};
    int *p=arr;

    printf("%d\n", p); //here &p means, address of pointer variable 'p'.
    printf("%d\n", &p);
    printf("%d\n", *&p);
    printf("%d\n", **&p);
    printf("%d\n", *&*p);
    printf("%d\n", *p++); //means first print *p, then do p+1.
    printf("%d\n", *--p); //means first do p-1 which is p+1-1 which is p only, then *p

}