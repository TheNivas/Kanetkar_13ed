#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", a, b);      //&a, &b
    if (a>b)
        printf("This is a game\n");
    else
        printf("You have to play it\n");
    return 0;
    // Error :we need address of variable when taking input i.e.  &a, &b 
}