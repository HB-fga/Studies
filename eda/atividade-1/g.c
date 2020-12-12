#include <stdio.h>

char converte( char a )
{
    if( a <= 'R')
    {
        int x;

        x = a - 'A' + 1;

        if( x % 3 == 0 )
            x = (x / 3) + 1;
        else
            x = (x / 3) + 2;

        a = x + '0';
    }
    else
    {
        switch( a )
        {
            case 'S':
                a = '7';
                break;
            case 'T':
                a = '8';
                break;
            case 'U':
                a = '8';
                break;
            case 'V':
                a = '8';
                break;
            case 'W':
                a = '9';
                break;
            case 'X':
                a = '9';
                break;
            case 'Y':
                a = '9';
                break;
            case 'Z':
                a = '9';
                break;
        }
    }
    
    return a;
}

int main() 
{

    char string[20];

    int x;

    scanf( "%s", string );

    for(int i = 0; string[i] != '\0'; i++)
    {
        if( string[i] >= 'A' && string[i] <= 'Z' )
            string[i] = converte( string[i] );
    }

    printf( "%s\n", string );


    return 0;
}