/* An online food delivery company collects the ratings (1–5) given by customers for a 
particular restaurant over a day. The ratings of N customers are stored in an array. 
Develop a program using separate functions to read the ratings, calculate the average 
rating, determine the number of customers who gave ratings greater than or equal to 4, 
and identify the highest and lowest ratings received. */

#include <stdio.h>

int main()
{
    int N;
    printf("Enter Number of Customers: ");
    scanf("%d", &N);
    int rating[N];

    for(int i = 0; i<=N-1; i++)
    {
        printf("Rating of custumer %d: ", i+1);
        int check;
        scanf("%d", &check);
        if((check>=1)&&(check<=5))
        {
            rating[i]=check;
        }
        else
        {
            printf("\nError: Rating should be from 1 to 5 only.");
            return 0;

        }
    
    }

    int sum = 0;
    for(int i=0;i<=N-1;i++)
    {
        sum=sum+rating[i];
    }

    float avg;
    avg=((float)sum/N);
    printf("Average Rating: %.2f", avg);
    

    int filter=0;
    for(int i=0;i<=N-1;i++)
    {
        if(rating[i]>=4)
        {
            filter=filter+1;
        }
    }
    printf("\nNumber of customers with rating 4 and above: %d", filter);
    return 0;

}