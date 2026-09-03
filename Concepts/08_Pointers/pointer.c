#include <stdio.h>

int main ()
{
    int x = 5;
    int*ptr;
    ptr=&x;

    //or we can write the same in sinle line.
    //int x=5, *ptr=&x;

    printf("%d", *ptr);
}