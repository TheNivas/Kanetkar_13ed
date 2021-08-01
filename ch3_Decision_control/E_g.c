#include <stdio.h>

int main()
{
    int j = 4, k;
    k = !5 && j;            //0
    printf("k = %d\n", k);
    return 0;
    //output: 0
    //AND operator returns boolean value 0 and 1 in this case it returns 0
}