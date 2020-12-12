#include <stdio.h>

int main() 
{

    int a, b, c, s;

    scanf( "%d %d %d %d", &a, &b, &c, &s );

    if( (a + b + c) == s )
        printf( "Acertou\n" );
    else
        printf( "Errou\n" );

    return 0;
}