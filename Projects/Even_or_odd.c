#include <stdio.h>
int main ()
{
    int a, check;
    printf("Enter your number: ");
    scanf("%d", &a);

    check = a%2;
    if (check==0) {
        printf("%d is an even number.", a);
    } else {
        printf("%d is an odd number.", a);
    }
    return 0;
}