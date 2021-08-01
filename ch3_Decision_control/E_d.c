#include <stdio.h>

int main()
{
    int a = 40;
    if(a > 40 && a < 45)   // first expression is false and second is true, but we have AND operator that required both expression needs to be true for true return
        printf("a is greaterthan 40 and less than 45");
    else
        printf("%d", a);
    return 0;
    //Output: 40
}