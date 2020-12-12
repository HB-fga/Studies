// WRONG ANSWER

#include <stdio.h>

void troca2( char str[], int p, int flag )
{
    if( str[p + 1] == '\0' )
    {
        if( flag == 0 ) return;
        flag = 0;
        return troca2( str, 0, flag );
    }
    else if( str[p] == 'x' && str[p + 1] != 'x' )
    {
        char swap;
        swap = str[p];
        str[p] = str[p+1];
        str[p+1] = swap;

        flag = 1;
    }

    return troca2( str, p+1, flag );
}

int main() 
{
    char st[110];

    scanf( "%s", st );

    troca2( st, 0, 0 );

    printf( "%s\n", st );

    return 0;
}