#include <stdio.h>

int main()
{
    int array0[10] = {1,2,3,4,5,6,7,8,9,10};  //initilization of array.
    for(int i=0; i<=9; i++)
        printf("%d\n", array0[i]);
    return 0;


//length of array can be specified by any +ve integer constant expression.
int arr[5];    //valid
int arr1[5+5]; //valid
int arr3[5*3]; //valid
int arr4[21/3];//valid
}
