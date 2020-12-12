#include <stdio.h>

void draw(int b, int e)
{
    if( b == 0 )
    {
        printf( "." );
        return draw( b+1, e );
    }
    else if( b != e )
    {
        printf("-");
        return draw( b+1, e );
    }
    else
    {
        printf("-\n");
        return;
    } 
}

void draw_manager( int x )
{
    if( x > 0 )
    {
        draw_manager( x - 1 );
        draw( 0, x );
        draw_manager( x - 1 );
    }

    return;
}

int main() 
{
    int n;

    scanf("%d", &n);

    draw_manager(n);

    return 0;
}