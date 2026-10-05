#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr=arr;

    for(int i=0; i<n; i++)
    {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", arr[i]);
    }

}