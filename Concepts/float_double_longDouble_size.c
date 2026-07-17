#include <stdio.h>
int main(void)
{
    printf("size of\n\n");
    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));
    printf("long double: %d\n", sizeof(long double));
    /*NOTE: size of different datatypes deepends on machine's 
    architecture, it can be different for other computers.*/
    return 0;
}