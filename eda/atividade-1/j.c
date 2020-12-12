#include <stdio.h>

int main() 
{

    int n, x;

    int hist[1000010] = {};

    scanf("%d", &n );
    
    while(n--)
    {
        scanf("%d", &x );
        hist[x]++;
    }

    scanf("%d", &x );

    if( hist[x] > 0 )
        printf("pertence\n");
    else
        printf("nao pertence\n");

    return 0;
}