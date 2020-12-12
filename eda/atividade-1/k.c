#include <stdio.h>

int main() 
{

    int a, v;
    int x, y;
    int max;
    int c = 0;
    int t[102] = {};

    while(1)
    {
        c++;

        scanf( "%d %d", &a, &v );
        if( a == 0 && v == 0 )
            break;
        
        max = 0;
        v *= 2;

        while(v--)
        {
            scanf( "%d", &x );
            
            t[x]++;
            max = max > t[x] ? max : t[x];
        }

        printf( "Teste %d\n", c );

        for( int i = 1; i <= a; i++ )
        {
            if( t[i] == max )
            {
                printf( "%d ", i );  
            }
        }     

        printf( "\n\n" ); 

        max = 102;
        while(max--)
            t[max] = 0;

    }
    

    return 0;
}