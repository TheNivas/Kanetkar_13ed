#include <stdio.h>

int main()
{
    char spy = 'a', password = 'z';
    if (spy == 'a' or password == 'z')                  // or is || in C
        printf("All the birds are safe in the nest\n");
    return 0;
    //Error: F_c.c:5:50: error: expected ')' before 'or'
}