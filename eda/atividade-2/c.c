#include <stdio.h>

void imp( char st[], int p )
{
    if( st[p + 1] == '\0' )
    {
        printf( "%c", st[p] );
        return;
    }
    else
    {
        imp( st, p + 1 );
        printf( "%c", st[p] );
        return;
    }
}

int main() 
{
    char st[520];

    scanf( "%s", st );

    imp( st, 0 );
    printf("\n");

    return 0;
}