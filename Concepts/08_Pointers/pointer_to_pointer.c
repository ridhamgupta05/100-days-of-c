#include <stdio.h>

int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    int ***r=&q;

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", *(*q));
    printf("%d\n", *(*(*r)));

    ***r=10;
    printf("%d\n", a);
    

}