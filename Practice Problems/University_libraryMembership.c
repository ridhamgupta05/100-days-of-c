#include <stdio.h>

int main()
{
    int numBook, fine, studentID;

    printf("Enter Number of books taken: ");
    scanf("%d", &numBook);
    if (numBook<0)
    {
        printf("Number of books can't be negative!");
        return 0;
    }
    if(numBook!=0)
    {
        printf("Membership can't be renewed!\n");
        printf("Reason: %d number of book(s) are/is still borrowed\n", numBook);
        return 0;
    }

    printf("Enter fine amount: ");
    scanf("%d", &fine);
    if (fine<0)
    {
        printf("Fine can't be negative!");
        return 0;
    }
    if(fine!=0)
    {
        printf("Membership can't be renewed!\n");
        printf("Reason: Outstanding fine: Rs %d.\n", fine);
        return 0;
    }

    printf("Do you have valid Student ID? (1=Yes, 0=No): ");
    scanf("%d", &studentID);
    if (studentID!=0 && studentID!=1)
    {
        printf("Invalid Input!");
        return 0;
    }
    if(studentID==0)
    {
        printf("Membership can't be renewed!\n");
        printf("Reason: You don't have student ID.\n");
        return 0;
    }

    if (numBook==0 && fine==0 && studentID==1)
    {
        printf("Membership can be renewed!");
    }
    return 0;
}