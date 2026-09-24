#include <stdio.h>

int main()
{
    int a=10;
    int *ptr=&a;
    printf("value of variable a = %d\n", *ptr);
    printf("Address of variable a = %d\n", ptr);

    //size of int
    printf("size of 'int' data type: %d\n", sizeof(int));

    //Pointer arithmetic
    printf("Increasing address of variable a by one: %d", ptr+1);

    /*Pointer arithmetic moves according to the
    size of the data type being pointed to.*/
}