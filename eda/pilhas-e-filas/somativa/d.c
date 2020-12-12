#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *cria_pilha()
{
    celula *topo = malloc(sizeof(celula));
    topo->prox = NULL;
    return topo;
}

void empilha(celula *topo, int x)
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
        return -1;
    }    
}

int main()
{
    celula *brinquedos = cria_pilha();
    celula *menor = cria_pilha();
    int n, b;
    char op[10];

    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", op);

        switch(op[1])
        {
            case 'u':
            case 'U':

                scanf("%d", &b);

                empilha(brinquedos, b);

                if(menor->prox != NULL)
                    b = b < menor->prox->dado ? b : menor->prox->dado;

                empilha(menor, b);
                
                break;

            case 'o':
            case 'O':
                
                if(brinquedos->prox == NULL)
                {
                    printf("EMPTY\n");
                }
                else
                {
                    desempilha(brinquedos);
                    desempilha(menor);
                }
                
                break;

            case 'i':
            case 'I':

                if(brinquedos->prox == NULL)
                {
                    printf("EMPTY\n");
                }
                else
                {
                    printf("%d\n", menor->prox->dado);
                }

                break;
        }
    }

    return 0;
}