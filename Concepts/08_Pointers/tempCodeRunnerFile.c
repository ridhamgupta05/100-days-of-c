#include <stdio.h>

int main()
{
    int A[]={2,4,5,8,1}; //we have created an array.
    int *p;

    for(int i=0; i<5; i=i+1)
    {
        p=&A[i];
        printf("Memory Location of A[%d] is: %d\n", i, p);
        printf("And, value at A[%d] is: %d\n\n", i, *p);
    }
return 0;
}