#include <stdio.h>

int main()
{
    int i = -1, j = 1, k, l;
    k = !i && j;            // 0 
    l = !i || j;            // 1    
    printf("%d %d", i, j);
    return 0;
    //output: -1 1
}