#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *cria_fila(){
    celula *novo = malloc(sizeof(celula));
    novo->prox = novo;
    return novo;
}

void enfileira (celula **fila, int x){
    celula *novo = malloc(sizeof(celula));
    novo->prox = (*fila)->prox;
    (*fila)->prox = novo;
    (*fila)->dado = x;
    (*fila) = novo;
}

int desenfileira (celula *fila, int *y)
{
    if(fila->prox == fila)
    {
        return 0;
    }

    celula *lixo;
    lixo = fila->prox;
    *y = lixo->dado;
    fila->prox = lixo->prox;
    free(lixo);

    return 1;
}

int main()
{
    celula *f = cria_fila();
    celula *view;

    char op;
    int x;
    int *y;

    while(1)
    {
        printf("(V)er fila | (E)nfileira | (D)esenfileira | (S)air\n");
        
        scanf( "%c", &op);
        if(op == 's' || op == 'S') break;

        switch(op)
        {
            case 'v':
            case 'V':

                    view = f->prox;

                    while (view != f)
                    {
                        printf("%d\n", view->dado);
                        view = view->prox;
                    }
                        
                    view = f->prox;

                break;

            case 'e':
            case 'E':

                scanf("%d", &x);

                enfileira(&f, x);

                break;

            case 'd':
            case 'D':

                desenfileira(f, y);

                printf("%d\n", *y);

                break;
        }

    }
}