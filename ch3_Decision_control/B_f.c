#include <stdio.h>

int main()
{
    int x = 20, y = 40;
    if(x == y )
        printf("x is equal to y \n");
    elseif(x > y)                               //else if no elseif we need space after else
        printf("x is greater than y \n");
    elseif(x < y)
        printf("x is less than  y \n");
    //Error: 'elseif' is 'else if' in C

    return 0;
}