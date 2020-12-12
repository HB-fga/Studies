#include <stdio.h>

int main() 
{

    int n;
    int aux;

    scanf( "%d", &n );

    for(int i = 0; i < n; i++)
    {
        aux = n - i - 1;
        while(aux--)
        {
            printf( " " );
        }

        aux = i;
        while(aux--)
        {
            printf( "*" );
        }

        printf( "*" );

        aux = i;
        while(aux--)
        {
            printf( "*" );
        }

        printf( "\n" );

    }

    return 0;
}