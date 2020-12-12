#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct celula{
    int dado;
    struct celula *prox;
}celula;

typedef struct fila{
    celula *inicio;
    celula *fim;
}fila;

fila *Cria_Fila(){
    fila *primeiro = (fila*)malloc(sizeof(fila));
    primeiro->inicio = NULL;
    primeiro->fim = NULL;
    return primeiro;
}

void *enfileira(fila *p, int Carta){
    celula *novo = (celula*)malloc(sizeof(celula));
    novo->dado = Carta;
    novo->prox = NULL;
    if(p->inicio==NULL){
        p->inicio = novo;
        p->fim = novo;
    }
    else{
        p->fim->prox = novo;
        p->fim = novo;
    }
}

int desenfileira(fila *p){
    int Carta;
    celula *l;
    l = p->inicio;
    Carta = l->dado;
    p->inicio = l->prox;
    if(p->inicio==NULL)
    p->fim = NULL;
    free(l);
    return Carta;
}

int vazio(fila *p){
    return p->inicio==NULL;
}

int main(){

    int N, i, Carta, aux = 0;
    fila *fila;
    fila = Cria_Fila();
    scanf("%d", &N);
    clock_t begin = clock();

    if(N){
        aux = N;
        for(i=1;i<=N;i++){
        enfileira(fila, i);
    }

    printf("Cartas descartadas:");

    while(aux!=1){
        printf(" %d", desenfileira(fila));
        enfileira(fila, desenfileira(fila));

        if(aux!=2)
            printf(",");

        aux--;
    }

    if(!vazio(fila))
        printf("\nCarta restante: %d\n", desenfileira(fila));
    }

    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("%lf\n", time_spent);

    return 0;
}