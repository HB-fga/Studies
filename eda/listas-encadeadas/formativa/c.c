#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x);
void insere_antes (celula *le, int x, int y);

void insere_inicio(celula *le, int x)
{
    celula *novo = malloc( sizeof(novo) );
    novo->dado = x;
    novo->prox = le->prox;
    le->prox = novo;
}

void insere_antes (celula *le, int x, int y)
{
    if(le->prox->dado == y)
    {
        insere_inicio(le, x);
        return;
    }
        
    celula *ptr = le->prox;

    while(ptr->prox != NULL)
    {
        if(ptr->prox->dado == y)
        {
            insere_inicio(ptr, x);
            return;
        }
        ptr = ptr->prox; 
    }

    insere_inicio(ptr, x);
    return;
}

// celula *busca (celula *le, int x)
// {
//     celula *ptr = le->prox;

//     while(ptr != NULL)
//     {
//         if(ptr->dado == x)
//         {
//             printf("Yes :)\n");
//             return ptr;
//         }
//         ptr = ptr->prox; 
//     }

//     printf("No :(\n");
//     return ptr;
// }

// void imprime (celula *le)
// {
//     celula *ptr = le->prox;

//     while(ptr != NULL)
//     {
//         printf("%d -> ", ptr->dado);
//         ptr = ptr->prox; 
//     }

//     printf("NULL\n");
// }

// celula *cria_lista()
// {
//     celula *p = malloc( sizeof(p) );
//     if(p == NULL) exit(1);
//     p->prox = NULL;
//     return p;
// }

// int main()
// {
//     char input;
//     celula *p = cria_lista();

//     int x, y;

//     insere_inicio(p, rand()%500);
//     insere_inicio(p, rand()%500);
//     insere_inicio(p, rand()%500);
//     insere_inicio(p, rand()%500);
//     insere_inicio(p, rand()%500);
//     insere_inicio(p, rand()%500);
//     insere_inicio(p, rand()%500);
//     insere_inicio(p, rand()%500);

//     while( input != 's' && input != 'S' )
//     {
//         printf("[I]nsere inicio | Insere [a]ntes | Im[p]rime | [B]usca | [S]air\n: ");
//         scanf(" %c", &input);

//         switch (input)
//         {
//             case 'i':
//             case 'I':
//                 scanf("%d", &x);
//                 insere_inicio(p, x);
//                 break;
//             case 'a':
//             case 'A':
//                 scanf("%d %d", &x, &y);
//                 // printf("%d\n", busca_rec(p, x)->dado);
//                 insere_antes(p, x, y);
//                 break;
//             case 'p':
//             case 'P':
//                 imprime(p);
//                 break;
//             case 'b':
//             case 'B':
//                 scanf("%d", &x);
//                 // printf("%d\n", busca(p, x)->dado);
//                 busca(p, x);
//                 break;
            
//         }

//     }

//     return 0;
// }