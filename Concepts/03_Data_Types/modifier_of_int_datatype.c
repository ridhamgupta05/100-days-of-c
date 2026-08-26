#include <stdio.h>

int main()
{
    printf("size of 'int' datatype-           %d bytes\n", sizeof (int));
    printf("size of 'short int' datatype-     %d bytes\n", sizeof (short int));
    printf("size of 'long int' datatype-      %d bytes\n", sizeof (long int));
    printf("size of 'unsigned int' datatype-  %d bytes\n", sizeof (unsigned int));
    printf("size of 'signed int' datatype-    %d bytes\n", sizeof (signed int));
    printf("size of 'long long int' datatype- %d bytes\n", sizeof (long long int));
    printf("\nNOTE: size of different datatypes deepends on machine's architecture, it can be different for other computers. ");
    return 0;

}