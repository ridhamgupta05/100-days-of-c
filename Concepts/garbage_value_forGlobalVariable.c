#include <stdio.h>
int var; //any variable which is outside of main function is global variable.
int main ()
{
    printf("%d", var); //without initilization of global variable, default garbage value is 0.
    return 0;
}
