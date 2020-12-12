#include <stdio.h>

int soma( char st[], int p )
{
    if( st[p + 1] == '\0' )
        return st[p] - '0';
    else
    {
        return ( st[p] - '0' ) + soma( st, p + 1 );
    }
}

int main() 
{
    char st[20];

    scanf( "%s", st );

    printf( "%d\n", soma( st, 0 ) );

    return 0;
}