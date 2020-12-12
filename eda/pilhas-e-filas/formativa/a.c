#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *v; // Vetor que contem os elementos da pilha
    int N; // Tamanho de v
    int topo; // Indicador do topo
} pilha;

// pilha *cria_pilha(int tam)
// {
//     pilha *p = malloc(sizeof(pilha));
//     p->N = tam;
//     p->v = malloc(p->N*sizeof(int));
//     p->topo = 0;
//     return p;
// }

// void destroi_pilha(pilha *p)
// {
//     free(p->v);
// }

void empilha (pilha *p, int x)
{
    if(p->topo == p->N)
    {
        p->v = realloc(p->v, 2*p->N*sizeof(int));
        p->N *= 2;
    }
    p->v[p->topo]=x;
    p->topo++;
}

int desempilha (pilha *p, int *y)
{
    if(p->topo>0)
    {
        p->topo--;
        *y=p->v[p->topo];
        return 1;
    }
    else
    {
        return 0;
    }
    
}

// int main()
// {

//     pilha *p = cria_pilha(2);
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

//                 for(int i = p->topo-1; i >= 0; i--)
//                     printf("%d\n", p->v[i]);

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