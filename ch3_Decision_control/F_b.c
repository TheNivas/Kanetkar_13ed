#include <stdio.h>

int main()
{
    int code, flag;                      //No initialization of variables so they hold garbage value or 0
    if (code == 1 & flag == 0)           // & is for address we need '&&' instead
        printf("The eagle has landed\n");
    return 0;
    //if block will not be executed
}