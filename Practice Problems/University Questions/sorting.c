#include <stdio.h>

int main()
{
    int max;
    printf("max array element: ");
    scanf("%d", &max);
    int arr[max];
    printf("Enter %d numbers to sort: \n", max);
    for(int i = 0; i<=max-1; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nStored Array: \n [");
    for(int i=0; i<=max-1; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");

    
}