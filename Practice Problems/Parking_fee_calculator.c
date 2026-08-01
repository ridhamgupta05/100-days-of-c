/*A shopping mall charges parking fees based on the number of hours a vehicle remains 
inside the parking area. The first two hours are free. Every additional hour costs ₹30. If 
the vehicle stays for more than eight hours, an extra maintenance charge of ₹100 is 
added to the total bill. Write a C program to calculate the parking fee. 
*/

#include <stdio.h>
int main()
{
    int hour, Pfee;
    Pfee=0;
    printf("Number of hours vehicle parked: ");
    scanf("%d", &hour);
    if (hour<0)
    {
        printf("Invalid Input!");
        return 0;
    }

    if (hour<=2)
    {
        printf("Parking fees: %d", Pfee);
    }

    else if (2<hour && hour<=8)
    {
        printf("Parking fees: %d", Pfee=(hour-2)*30);
    }

    else if (hour>8)
    {
        printf("Parking fees: %d", Pfee=(hour-2)*30+100);
    }
    return 0;   
}