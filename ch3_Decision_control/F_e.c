#include <stdio.h>

int main()
{
    int x =10, y = 20;
    if (x >= 2 and y <= 50)         // and is '&&' in c
        printf("%d\n", x);
    return 0;
    // Error: F_e.c:6:15: error: expected ')' before 'and'
}