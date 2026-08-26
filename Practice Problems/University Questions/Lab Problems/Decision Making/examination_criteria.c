/*A student can begin an online examination only if all of the following conditions are 
satisfied: 
The student has logged in successfully.  
The attendance percentage is at least 75%.  
The examination fee has been paid.  
Write a C program that determines whether the student is allowed to start the 
examination. */

#include <stdio.h>
int main()
{
    int login, attendance, feesPaid;

    printf("Login successful? (1 = Yes, 0 = No): ");
    scanf("%d", &login);
    if (login!=0 && login!=1)
    {
        printf("Invalid Input!");
        return 0;
    }

    printf("Attendance (in %%): ");
    scanf("%d", &attendance);
    if (attendance<0 || attendance>100)
    {
        printf("Invalid attendance!");
        return 0;
    }

    printf("Examination fees? (1= Paid, 0= NOT Paid): ");
    scanf("%d", &feesPaid);
    if (feesPaid!=0 && feesPaid!=1)
    {
        printf("Invalid input!");
        return 0;
    }
    

    if (login==1 && attendance>=75 && feesPaid==1)
    {
        printf("\nYou are allowed to start the examination!");
    }
    

    else
    {
        printf("\nYou are NOT allowed to start the examination!");
    }
    return 0;
}