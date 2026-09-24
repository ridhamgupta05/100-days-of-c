#include <stdio.h>

int main()
{
    int a=5;
    int *p, *q;
    p=&a;
    q=p;
    printf("%d %d", *p, *q);
}