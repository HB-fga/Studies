#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

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

int desenfileira (celula *fila)
{
    if(fila->prox != fila)
    {
        int item;

        celula *lixo;
        lixo = fila->prox;
        item = lixo->dado;
        fila->prox = lixo->prox;
        free(lixo);

        return item;
    }
    else
    {
        return -1;
    }
}

int main()
{
    celula *cartas = cria_fila();    
    int n, flag = 1;
    int carta;

    scanf("%d", &n);

    // clock_t begin = clock();

    for(int i = 1; i<=n; i++)
    {
        enfileira(&cartas, i);
    } 

    printf("Cartas descartadas:");

    while( cartas->prox->prox != cartas )
    {
        carta = desenfileira(cartas);

        if(flag == 1)
        {
            flag = 0;
            printf(" %d", carta);
        }
        else
        {
            printf(", %d", carta);
        }

        carta = desenfileira(cartas);
        enfileira(&cartas, carta);            
    }

    printf("\nCarta restante: %d\n", cartas->prox->dado);

    // clock_t end = clock();
    // double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    // printf("%lf\n", time_spent);

    return 0;
}