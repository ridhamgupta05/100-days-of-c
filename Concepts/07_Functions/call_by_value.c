/*Here values of actual parameters will be copied to formal parameters and
these two different parameters store values in different locations*/



#include <stdio.h>
int func(int a, int b)
{
    a=100;
    b=200;
}
int main ()
{
    int a = 10;
    int b = 20;
    func(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

/*here we can understand that,
the value of a and b are finally not changed to
100 and 200 respectively.

It happened because the varibales we created during "func" function 
are local to the function and gets destroyed after the execution of function, 
these are not constant and gets reflect back to main directly.*/