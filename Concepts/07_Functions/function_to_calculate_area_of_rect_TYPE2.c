#include <stdio.h>

int areaOfRect(int, int);

int main()
{
    int l=10;
    int b=20;
    int area=areaOfRect(l,b);
    printf("%d\n", area);
    return 0;
}

int areaOfRect(int length, int breadth)
{
    int area=length*breadth;
    return area;
}