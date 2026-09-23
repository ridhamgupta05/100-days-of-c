#include <stdio.h>

int main()
{
    int x=5; //declearing a normal int variable 'x' in which 5 is stored.
    int *ptr; //declearing a pointer variable 'ptr' (in which no valid address is stored yet).
    ptr=&x; //initilization of pointer 'ptr'. It now stores the adress of 'x'.

    printf("%d\n", x); //prints value of x.
    printf("%p\n", ptr); //prints address of ptr variable.
    printf("%d\n", *ptr); //prints value at the address stored in ptr.
    //            here * tells go the the address ptr have stored and take what is stored in address.

    
    //Modifying Values via Pointers 
    *ptr=10; //Navigates to address stored in pointer'ptr' and changes the stored value from 5 to 10.
    printf("%d\n", x); //prints the modified value of x.

}