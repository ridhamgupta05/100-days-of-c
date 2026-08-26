#include <stdio.h>
int main ()
{
    unsigned short int a = 3;
    printf("%d is size of variable 'a' stored in bytes.\n", sizeof(a));
    printf("which means, 1 byte = 8 bits, 2 bytes = 16 bits \n");
    printf("so, minimum int in 'a' could be 0 and max int would be 2^16-1 = 65535\n");
    a = 65535;
    printf("%d\n", a);
    a = 65536;
    printf("%d, because it exceeds in maximum by 1, hence it is cycling again.\n", a);

    return 0;
}