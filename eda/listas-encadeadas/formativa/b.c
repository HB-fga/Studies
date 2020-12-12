#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *busca (celula *le, int x)
{
    celula *ptr = le->prox;

    while(ptr != NULL)
    {
        if(ptr->dado == x)
        {
            // printf("Yes :)\n");
            return ptr;
        }
        ptr = ptr->prox; 
    }

    // printf("No :(\n");
    return ptr;
}

celula *busca_rec (celula *le, int x)
{
    celula *ptr = le->prox;

    if(ptr != NULL)
    {
        if(ptr->dado == x)
        {
            // printf("Yes :)\n");
            return ptr;
        }
            
        return busca_rec(ptr, x);
    }   

    // printf("No :(\n");
    return ptr;
}

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

// void insere_inicio(celula *le, int x)
// {
//     celula *novo = malloc( sizeof(novo) );
//     novo->dado = x;
//     novo->prox = le->prox;
//     le->prox = novo;
// }

// int main()
// {
//     char input;
//     celula *p = cria_lista();

//     int x;

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
//         printf("[I]nsere | Im[p]rime | [B]usca | Busca [R]ecursivamente | [S]air\n: ");
//         scanf(" %c", &input);

//         switch (input)
//         {
//             case 'i':
//             case 'I':
//                 scanf("%d", &x);
//                 insere_inicio(p, x);
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
//             case 'r':
//             case 'R':
//                 scanf("%d", &x);
//                 // printf("%d\n", busca_rec(p, x)->dado);
//                 busca_rec(p, x);
//                 break;
//         }

//     }

//     return 0;
// }