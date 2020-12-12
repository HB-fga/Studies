#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

// int desempilha (celula *topo, int *y);

// celula *cria_pilha()
// {
//     celula *topo = malloc(sizeof(celula));
//     topo->prox = NULL;
//     return topo;
// }

// void destroi_pilha(celula **topo)
// {
//     int *x;
//     while(desempilha(*topo, x));
//     free(*topo);
// }

void empilha (celula *topo, int x)
{
    celula*novo = malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = topo->prox;
    topo->prox = novo;
}

int desempilha (celula *topo, int *y)
{
    celula *lixo = topo->prox;
    if(lixo == NULL)
        return 0;

    *y = lixo->dado;
    topo->prox = lixo->prox;
    free(lixo);
    return 1;
    
}

// int main()
// {

//     celula *p = cria_pilha();
//     celula *view;
//     char op;
//     int x;
//     int *y;

//     while(1)
//     {
//         printf("(V)er pilha | (E)mpilha | (D)esempilha | (S)air\n");
        
//         scanf( "%c", &op);
//         if(op == 's' || op == 'S') break;

//         switch(op)
//         {
//             case 'v':
//             case 'V':

//                 view = p;

//                 while(view->prox != NULL)
//                 {
//                     printf("%d\n", view->dado);
//                     view = view->prox;
//                 }

//                 view = p;

//                 break;

//             case 'e':
//             case 'E':

//                 scanf("%d", &x);

//                 empilha(p, x);

//                 break;

//             case 'd':
//             case 'D':

//                 desempilha(p, y);

//                 printf("%d\n", *y);

//                 break;
//         }

//     }

//     return 0;
// }