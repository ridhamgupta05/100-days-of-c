#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;
    printf("Size of 'int' variable is: %d bytes\n", sizeof(int));
    printf("Address of a = %p, Value of a = %d\n", (void*)p, *p);

    char *p0;
    p0=(char*)p; // means: Take the same address stored in p, but now treat that address as pointing to a char.
    printf("Size of 'char' variable is: %d bytes\n", sizeof(char));
    printf("Address of a = %p, Value of a = %d\n", (void*)p0, *p0);

    /*1025 = 00000000 00000000 00000100 00000001
        p reads all 4 bytes because it treats the address as pointing to an int.
        But,
        p0 reads only 1 byte because it treats the address as pointing to a char.
        Hence, 00000001 = 1.
        Also, p0 and p have the same address.
    */
}