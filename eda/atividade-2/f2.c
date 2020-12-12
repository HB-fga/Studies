#include <stdio.h>

void printx(int b, int e)
{
    if(b == e)
    {
        printf("\n");
        return;
    }
    else
    {
        printf("x");
        return printx( b+1, e );
    }
    
    return;
}

void read(int x)
{
    char a;
    scanf("%c", &a);

    if(a == '\n')
    {
        return printx( 0, x );
    }
    else if(a == 'x')
    {
        x++;
    }
    else
    {
        printf("%c", a);
    }
    
    return read(x);
}

int main() 
{
    read(0);

    return 0;
}