#include <stdio.h>

int main (void)
{
    int a=10;       //this is how we declare and assign value to a variable.
    a=20;           //this is how we assign a new value to an existing variable.
    int b, c, d;    //this is how we declare so many variables with same data type in a single line.
    b=10, c=d=30;   //this is how we assign values to so many variables in a single line.


    printf("%d", a);
    printf("%d", b);
    printf("%d", c);
    printf("%d", d);

    return 0;
}