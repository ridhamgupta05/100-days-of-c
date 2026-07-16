#include <stdio.h>
int main(void)
{
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));
    /*NOTE: size of different datatypes deepends on machine's 
    architecture, it can be different for other computers.*/
    return 0;
}