#include <stdio.h>

int main()
{
    int a = 300, b,c;
    if(a>=400)
    {
        b = 300;
    }
    c = 200;
    printf("%d %d \n", b,c);
    return 0;
    //Output: 0 200
    //here if block won't execute so b var hold none or garbage value
}