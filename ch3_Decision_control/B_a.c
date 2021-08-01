#include <stdio.h>

int main()
{
    float a = 12.25, b = 12.52;
    if (a = b)                         // here operator is assignment instead of comparison so it will always run
        printf("a and b are equal \n");
    return 0;
    //output:  a and b are equal
}