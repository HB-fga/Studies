#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *v; // Vetor que representa a fila
    int N; // Tamanho da fila
    int inicio, fim; // Indicadores de inicio e final da fila
} fila;

// fila *cria_fila(int tam)
// {
//     fila *f = malloc(sizeof(fila));
//     f->inicio = f->fim = 0;
//     f->N = tam;
//     f->v = malloc(f->N * sizeof(int));

//     return f;
// }

// void destroi_fila(fila **f)
// {
//     free(*f);
// }

int enfileira (fila *f, int x)
{
    if( (f->fim+1) % f->N != f->inicio)
    {
        f->v[f->fim] = x;
        f->fim++;
        f->fim = f->fim % f->N;
        return 1;
    }
    else return 0;
}

int desenfileira (fila *f, int *y)
{
    if(f->inicio==f->fim)
        return 0;
    else
    {
        *y = f->v[f->inicio];
        f->inicio++;
        f->inicio = f->inicio % f->N;
        return 1;
    }
    
}

// int main()
// {
//     fila *f = cria_fila(5);
//     fila *view;

//     char op;
//     int x;
//     int *y;

//     while(1)
//     {
//         printf("(V)er fila | (E)nfileira | (D)esenfileira | (S)air\n");
        
//         scanf( "%c", &op);
//         if(op == 's' || op == 'S') break;

//         switch(op)
//         {
//             case 'v':
//             case 'V':

//                     for(int i = f->inicio;  ; i++)
//                     {
//                         i = i % f->N;
//                         if(i == f->fim) break;

//                         printf("%d\n", f->v[i]);
//                     }

//                 break;

//                 break;

//             case 'e':
//             case 'E':

//                 scanf("%d", &x);

//                 enfileira(f, x);

//                 break;

//             case 'd':
//             case 'D':

//                 desenfileira(f, y);

//                 printf("%d\n", *y);

//                 break;
//         }

//     }

//     return 0;
// }