#include <stdio.h>
int main()
{
    printf("%60s\n", "Hey, World is so beautiful.");
    /*Prints the string in a field with a minimum width of 60 characters.
    Since the string is shorter than 60 characters, printf adds leading
    spaces to right-align the string within the 60-character field.*/
    
    printf("%10s\n", "Hello");

    return 0;
}