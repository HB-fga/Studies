#include <stdio.h>

int main() 
{

    int n, res, nota;
    int min, max;
    int dia = 0;

    while( scanf( "%d", &n ) != EOF )
    {
        dia++;

        scanf( "%d %d", &min, &max );

        for( int i = 1; i < n; i++ )
        {
            scanf( "%d %d", &res, &nota );
            
            if( nota > max )
            {
                max = nota;
                min = res;
            }
            else if( nota == max )
                min = min < res ? min : res;
        }

        printf( "Dia %d\n%d\n\n", dia, min );
    }

    return 0;
}