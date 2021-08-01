#include <stdio.h>

int main()
{
    int i = 4, j = -1, k = 0, w, x, y, z;
    w = i || j || k;  //1
    x = i && j && k;  //0
    y = i || j && k;  //1 cuz logical AND (&&) have precedence over logical OR(||) operator
    z = i && j || k;  //1
    printf(" w = %d, x = %d, y = %d, z = %d\n",w,x,y,z);
    return 0;
    //output:  w = 1, x = 0, y = 1, z = 1
}