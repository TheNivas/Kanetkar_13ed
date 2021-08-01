#include <stdio.h>

int main()
{
    int j = 10, k = 12;
    if(k >= j)                 // extra pair of bracket in if block
    {                        // Bracket 1 
        {                    // Bracket 2
            k = j;
            j = k;
        }
    }   
    return 0;
}