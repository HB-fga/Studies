#include <stdio.h>

int main() 
{

    char frase[10010];
    char p1[50];
    char p2[50];

    int a, b, last = 0;

    scanf( "%[^\n]", frase );
    scanf( "%s", p1 );
    scanf( "%s", p2 );

    for( int i = 0; frase[i] != '\0'; i++ )
    {
        // printf( "1 : %d\n", i );
        if( frase[i] == p1[0] )
        {
            for( int j = 1; frase[i + j] == p1[j] && p1[j] != '\0'; j++ )
            {
                // printf( "2 : %d\n", i );
                if( p1[j + 1] == '\0' )
                {
                    for( int k = last; k < i; k++ )
                    {
                        // printf( "3 : %d\n", i );
                        printf( "%c", frase[k] );
                    }

                    printf( "%s", p2 );
                    
                    i += j;
                    last = i + 1;
                }
            }
        }
    }

    for( int i = last; frase[i] != '\0'; i++ )
    {
        // printf( "3 : %d\n", i );
        printf( "%c", frase[i] );
    }

    printf( "\n" );

    return 0;
}