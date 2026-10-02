#include <stdio.h>
int SumOfArray(int *A, int size);
int main()
{
    int A[]={1,2,3,4,5};
    int size=(sizeof(A)/sizeof(A[0]));
    int total=SumOfArray(A, size); //here A means address of A[0] by default rule in C.
    printf("Sum of array: %d", total);
    return 0;
}

int SumOfArray(int *A, int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum=sum+A[i];
    }
    return sum;
}