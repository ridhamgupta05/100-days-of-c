#include <stdio.h>
int main ()
{
    printf("size of 'char' datatype: %d byte\n", sizeof(char));
    //char datatype can store exactly one character at a time.
    //for char datatype, enclose the character with just single quotes (' ')
    char letter = 'B';
    printf("%c\n",letter); //if format specifiers is %c it prints charater.
    printf("%d\n",letter); //if format specifiers is %d it prints ASCII order.
    
    char variable1 = 65; 
    printf("%d\n", variable1);
    printf("%c\n", variable1);
    return 0;
}