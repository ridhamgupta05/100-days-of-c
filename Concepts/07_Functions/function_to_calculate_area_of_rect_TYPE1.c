#include <stdio.h>

int areaOfRect(int length, int breadth) //here, length and breadth are 'parameters' or 'formal parameters'
{
    int area=length*breadth;
    return area;
}

int main()
{
    int l=10;
    int b=20;
    int area=areaOfRect(l,b); //here, l and b are 'actual parameters' or 'arguments'
    printf("%d\n", area); 
    return 0;
}