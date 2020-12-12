#include <stdio.h>

int main() 
{

    int m, a, b, c;
    int ans;

    scanf( "%d %d %d", &m, &a, &b );

    ans = a > b ? a : b;
    ans = ans > ( m - ( a + b ) ) ? ans : ( m - ( a + b ) );

    printf( "%d\n", ans );

    return 0;
}