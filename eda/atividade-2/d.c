#include <stdio.h>

int conta( char st[], int p )
{
    int soma;

    if( st[p] == '\0' )
        return 0;
    else
    {
        soma = st[p] == '7' ? 1 : 0;
        soma += conta( st, p + 1 );
        return soma;
    }
}

int main() 
{
    char st[20];

    scanf( "%s", st );    
    printf( "%d\n", conta( st, 0 ) );

    return 0;
}