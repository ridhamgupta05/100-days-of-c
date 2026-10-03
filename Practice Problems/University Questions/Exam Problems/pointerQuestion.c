#include <stdio.h>

int main()
{
    int A[]={10, 20, 30, 40, 50};
    int *ptr=A; //or *ptr=&A[0]; 
    
    printf("\nReading list of values:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\n", *(ptr+i));
    }

    printf("\nIncreasing each value by 20:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d\n", *(ptr+i)+20);
    }
}