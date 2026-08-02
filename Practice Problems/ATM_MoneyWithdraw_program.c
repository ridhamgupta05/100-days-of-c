#include <stdio.h>

int main()
{
    int amt, Balance;
    Balance = 100000;

    printf("Amount to be withdrawn: ");
    scanf("%d", &amt);

    if (amt < 0)
    {
        printf("Invalid Input!");
        return 0;
    }

    if (amt % 100 != 0)
    {
        printf("Transaction Unsuccessful!!!\n");
        printf("Reason: Withdrawal amount should be in multiples of Rs 100.\n");
        printf("Balance: %d", Balance);
        return 0;
    }

    if (amt > Balance)
    {
        printf("Transaction Unsuccessful!!!\n");
        printf("Reason: Withdrawal amount exceeds available balance.\n");
        printf("Balance: %d", Balance);
        return 0;
    }

    if (Balance - amt < 1000)
    {
        printf("Transaction Unsuccessful!!!\n");
        printf("Reason: Minimum balance of Rs 1000 must be maintained.\n");
        printf("Balance: %d", Balance);
        return 0;
    }

    Balance = Balance - amt;

    printf("Transaction Successful!!!\n");
    printf("Remaining Balance: %d", Balance);

    return 0;
}