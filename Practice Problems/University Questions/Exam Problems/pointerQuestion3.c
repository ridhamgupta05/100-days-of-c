#include <stdio.h>

int main()
{   int n;
    printf("Enter max array elements: ");
    scanf("%d", &n);
    char arr[n];

    for(int i=0; i<n; i++)
    {
        scanf(" %c", &arr[i]);
    }

    char *ptr=arr;
    for(int j=0; j<n; j++)
    {
        printf("%d ", *(ptr+j));
    }
}