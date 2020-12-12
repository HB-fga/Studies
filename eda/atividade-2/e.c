#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int soma( char st[], int p, int *grau );
int check_soma( int x, int *grau );

int soma( char st[], int p, int *grau )
{
    int sum = 0;

    if( st[p + 1] == '\0' )

        sum += st[p] - '0';
    else
        sum += (st[p] - '0') + soma( st, p + 1, grau );
        
    if( p == 0 )
        return check_soma( sum, grau );
    
    return sum;
}

int check_soma( int x, int *grau )
{
    char str[10];
    *grau += 1;

    sprintf( str, "%d", x );

    if( strlen( str ) > 1 )
        return soma( str, 0, grau );

    return x;
}

int main() 
{
    char st[1010];
    int ans;
    int degree;

    while( st[0] != '0' || st[1] != '\0' )
    {
        scanf( "%s", st );
        if( st[0] == '0' && st[1] == '\0' ) break;

        degree = 0;
        ans = soma( st, 0, &degree );

        if( ans == 9 )
            printf( "%s is a multiple of 9 and has 9-degree %d.\n", st, degree );
        else
            printf( "%s is not a multiple of 9.\n", st );
    }

    return 0;
}