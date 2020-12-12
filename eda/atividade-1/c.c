#include <stdio.h>

int main() 
{
    int flag = 1;
    int x;
    int max;

    while( scanf( "%d", &x ) != EOF )
    {
        if(flag)
        {
            max = x;
            flag--;
        }

        max = max > x ? max : x;

    }

    printf( "%d\n", max );

    return 0;
}