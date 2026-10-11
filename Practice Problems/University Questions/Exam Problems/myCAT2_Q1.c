#include <stdio.h>

int main()
{
    //taking array input using pointer.
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    int arr[n];
    int *ptr=arr;

    for(int i=0; i<n; i++)
    {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &*(ptr+i));
        if(!(0<=*(ptr+i) && *(ptr+i)<=100))
        {
            printf("Marks should be positive number only not greater than 100, please start again.");
            return 0;
        }
    }

    //average calculation
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("\nAverage marks: %.2f\n\n", ((float)sum)/n);

    //reverse order marks display
    printf("Marks of students in reverse order- \n");
    for(int i=n-1; i>=0; i=i-1)
    {
        printf("Mark of student %d: %d\n", i+1, *(ptr+i));
    }

    //highest and lowest marks
    int highest = *ptr;
    int lowest = *ptr;
    for(int i=0; i<n; i++)
    {
        if(*(ptr+i)>highest)
        {
            highest=*(ptr+i);
        }
        if(*(ptr+i)<lowest)
        {
            lowest=*(ptr+i);
        }
    }

    printf("\nHighest marks: %d\n", highest);
    printf("Lowest marks: %d\n", lowest);
    return 0;
}