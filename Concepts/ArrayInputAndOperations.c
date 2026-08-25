#include <stdio.h>
 int main()
{
    //taking array input
    int max;
    printf("max array element: ");
    scanf("%d", &max);
    int arr[max];
    printf("Enter %d numbers: \n", max);
    for(int i = 0; i<=max-1; i++){
        scanf("%d", &arr[i]);
    }
    
    //printing back stored array.
    printf("\nStored Array: \n [");
    for(int i=0; i<=max-1; i++){
        printf("%d ", arr[i]);
    }
    printf("]\n");

    //sum of all array elements.
    int sum = 0;
    for(int i=0; i<=max-1; i++){
        sum=arr[i]+sum;
    }
    printf("Sum of array: %d\n", sum);

    //mean of array elememnts.
    int mean = sum/max;
    printf("Mean: %d\n",mean);
    return 0;
}