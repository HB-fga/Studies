#include <stdio.h>

int verifica(char x, char y)
{
    if( x == '(' && y == ')' )
        return 1;
    if( x == '{' && y == '}' )
        return 1;
    if( x == '[' && y == ']' )
        return 1;

    return 0;
}

int main()
{
    char letra;
    int success = 1;
    char *lixo;

    int index = 0;
    char pilha[900];

    while(success)
    {
        scanf( "%c", &letra );   
        if( letra == '\n' ) break;

        switch( letra )
        {
            case '(':
            case '{':
            case '[':

                pilha[index] = letra;
                index++;

                // printf( "Empilhou %c :) \n", pilha[index-1] );

                break;
            case ')':
            case '}':
            case ']':

                if(index == 0)
                {
                    // printf( "pilha vazia :(\n" );
                    success = 0;
                }
                else
                {
                    if(verifica(pilha[index-1], letra) == 1)
                    {
                        index--;
                    }
                    else
                    {

                        // printf( "fechamento incorreto :(\n" );
                        // printf( "pilha = %c\nletra = %c\n", pilha[index-1], letra );

                        success = 0;
                    }
                }
                
                break;
        }
    }

    if( success == 1 )
        printf( "sim\n" );
    else
        printf( "nao\n" );

    return 0;
}