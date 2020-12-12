#include <stdio.h>

int main() 
{

    char a;
    int c = 0;

    while(1)
    {
        scanf( "%c", &a );

        if( a == '\n' )
            break;

        c++;
    }

    printf( "%d\n", c );

    return 0;
}