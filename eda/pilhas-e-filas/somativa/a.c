#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    char dado;
    struct celula *prox;
} celula;

celula *cria_pilha()
{
    celula *topo = malloc(sizeof(celula));
    topo->prox = NULL;
    return topo;
}

// void destroi_pilha(celula **topo)
// {
//     char *x;
//     while(desempilha(*topo, x));
//     free(*topo);
// }

void empilha(celula *topo, char x)
{
    celula*novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = topo->prox;
    topo->prox = novo;
}

char desempilha(celula *topo)
{
    celula *lixo = topo->prox;

    if(lixo != NULL)
    {
        topo->prox = lixo->prox;
        free(lixo);
        return 1;
    }
    else
    {
        return 0;
    }    
}

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
    celula *pilha = cria_pilha();
    char letra;
    int success = 1;
    char *lixo;

    while(success)
    {
        scanf( "%c", &letra );   
        if( letra == '\n' ) break;

        // printf( "hey %c\n", letra );

        switch( letra )
        {
            case '(':
            case '{':
            case '[':

                empilha( pilha, letra );

                // printf( "empilhou %c\n", letra );

                break;
            case ')':
            case '}':
            case ']':

                if(pilha->prox != NULL)
                {
                    if( verifica( pilha->prox->dado, letra ) )
                    {
                        desempilha( pilha );
                    }
                    else
                    {
                        success = 0;
                        // printf( "fechamento incompativel\n" );
                    }
                }
                else
                {
                    success = 0;
                    // printf( "fechamento com pilha vazia\n" );
                }

                break;
        }
    }

    if( success == 1 && pilha->prox == NULL )
        printf( "sim\n" );
    else
        printf( "nao\n" );

    // destroi_pilha(&pilha);

    return 0;
}