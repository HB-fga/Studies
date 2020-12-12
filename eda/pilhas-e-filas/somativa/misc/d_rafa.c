#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

celula *criaLista()
{
    celula *p = malloc(sizeof(celula));
    if(p == NULL) exit(1);
    p->prox = NULL;
    return p;
}

void empilha (celula *p, int x)
{
    celula *novo = malloc(sizeof(celula));
    if(novo == NULL) exit(1);
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
}

int desempilha (celula *p)
{
    int y;
    if((p == NULL)||(p->prox==NULL)) return 0;
    celula *lixo = malloc(sizeof(celula));
    lixo = p->prox;
    y = lixo->dado;
    p->prox = lixo->prox;
    free(lixo);
    return y;
}

int main()
{
    int numOperacoes, imprime, diversao, menor = 2147483647;
    celula *presentes = criaLista();
    celula *menorDiversao = criaLista();
    char comando[6];

    scanf("%d", &numOperacoes);

    for(int i = 0; i < numOperacoes && numOperacoes > 0; i ++)
    {
        //printf("DIGITE UM COMANDO: \n");
        scanf("%s", comando);

        if(0 == strcmp(comando, "PUSH"))
        {
            scanf("%d", &diversao);
            empilha(presentes, diversao);
            if(menor > diversao)
            {
                menor = diversao;
                empilha(menorDiversao, menor);
            }
            else if(menor < diversao) empilha(menorDiversao, menor);

        }
        else if(0 == strcmp(comando, "POP"))
        {
            if((menorDiversao == NULL)||(menorDiversao->prox==NULL)) printf("EMPTY\n");
            else
            {
                desempilha(presentes);
                desempilha(menorDiversao);   
            }
        }
        else if(0 == strcmp(comando, "MIN"))
        {
            if((menorDiversao == NULL)||(menorDiversao->prox==NULL)) printf("EMPTY\n");
            else
            {
                imprime = desempilha(menorDiversao);
                printf("%d\n", imprime);
                empilha(menorDiversao, imprime);
            }  
        }
        else i--;
    }

    free(presentes);

    return 0;
}