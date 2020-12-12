#include <stdio.h>

int main() 
{

    int n, m, x, y;
    int s, d;
    int min, ans;

    scanf( "%d", &n );

    for( int i = 0; i < n; i++ )
    {
        scanf( "%d", &m );

        scanf( "%d", &y );

        s = 0;
        d = 0;

        for( int j = 1; j < m; j++ )
        {
            scanf( "%d", &x );

            
            if( y - x < 0) // subida
                s += ( y - x ) * ( -1 );
            else // descida
                d += y - x;

            y = x;
        }

        if( i == 0 )
        {
            min = s < d ? s : d;
            ans = 1 + i;
        }
        else
        {
            if( s < min )
            {
                min = s;
                ans = 1 + i;
            }

            if( d < min )
            {
                min = d;
                ans = 1 + i;
            }
        }
    }

    printf( "%d\n", ans );

    return 0;
}