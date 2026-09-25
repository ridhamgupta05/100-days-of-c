#include <stdio.h>

int func(int a, int b)
{
    a=100;
    b=200;
}
int main ()
{
    int a = 10;
    int b = 20;
    func(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}