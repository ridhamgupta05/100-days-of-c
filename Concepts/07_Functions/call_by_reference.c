/*Here both actual and formal parameters refers to same memory location.
Therefore, any changes made to the formal parameters will get reflected to
actual parameters
Here instead of passing values, we pass addresses*/

#include <stdio.h>
void func (int *ptr1, int *ptr2)
{
    *ptr1=100;
    *ptr2=200;
}
int main ()
{
    int a = 10;
    int b = 20;
    func(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}