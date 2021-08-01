#include <stdio.h>

int main()
{
    int i = -3, j = 3;
    if (!i + !j * 1)        //Always False ( 0 + 0 * 1 = 0)
        printf("Massoro\n");
    else
        printf("Bennarivo\n");   
    return 0;
    //Output: Bennarivo
}