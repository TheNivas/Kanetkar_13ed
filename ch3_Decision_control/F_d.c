#include <stdio.h>

int main()
{
    int i = 10, j = 20;
    if(i = 5 && if(j = 10))           //2nd if was not required and (i = 5) is assignment operator, need '==' instead
        printf("Have a nice day\n");
    return 0;
    // output: F_d.c:6:17: error: expected expression before 'if'
}