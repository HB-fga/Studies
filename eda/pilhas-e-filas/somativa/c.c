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

void empilha(celula *topo, char x)
{
    celula*novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = topo->prox;
    topo->prox = novo;
}

int desempilha(celula *topo)
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

int main()
{
    celula *botas[35];
    int tam, ans = 0;
    char lado;

    for(int i = 0; i < 35; i++)
    {
        botas[i] = cria_pilha();
    }

    while( scanf("%d %c", &tam, &lado) != EOF )
    {
        tam = tam-30;
        if( botas[tam]->prox != NULL )
        {
            if(botas[tam]->prox->dado != lado )
            {
                ans += desempilha(botas[tam]);
            }
            else
            {
                empilha(botas[tam], lado);
            }
        }
        else
        {
            empilha(botas[tam], lado);
        }
    }

    printf("%d\n", ans);

    return 0;
}