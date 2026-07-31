//Probelm Statement
/* The college cafeteria has introduced a smart billing system. A student purchases food 
items worth a certain amount. If the bill is more than ₹500, a 10% discount is applied. 
However, students with a valid college ID receive an additional 5% discount on the 
discounted amount. Write a C program to calculate the final bill amount after applying 
all eligible discounts. */

#include <stdio.h>
int main()
{
    //declear variables
    int bill, collegeID, finalBill;
    
    //taking valid bill input
    printf("Bill amount: ");
    scanf("%d", &bill);
    if (bill<0)
    {
        printf("Invalid Bill!");
        return 0;
    }

        
    //taking valid college id input
    printf("College ID? (1=Yes, 0=No): ");
    scanf("%d", &collegeID);
    if (collegeID != 1 && collegeID != 0)
    {
        printf("Invalid Input!");
        return 0;
    }

    if (bill>500)
    {
        finalBill = (bill*90/100);
        if (collegeID==1)
        {
            finalBill = (finalBill*95/100);
            printf("Final Bill: %d", finalBill);

        }
        else if (collegeID==0)
        printf("Final Bill: %d", finalBill);
    }
    else if (bill<=500)
    {
        printf("Final Bill: %d",bill);
    }
    return 0;

}