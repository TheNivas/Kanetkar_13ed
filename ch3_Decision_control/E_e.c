#include <stdio.h>

int main()
{
    int x =20, y = 40, z = 45;
    if(x>y && x>z)
        printf("biggest = %d\n", x);
    else if(y>x && y>z)
        printf("biggest = %d\n", y);
    if(z>x && z>y)                         //this block will run
        printf("biggest = %d\n", z);
    return 0;
    //output: biggest = 45
}