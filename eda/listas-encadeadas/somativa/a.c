#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void divide_lista (celula *l, celula *l1, celula *l2)
{
    celula *ptr = l->prox;
    celula *ptr1 = l1;
    celula *ptr2 = l2;

    while(ptr != NULL)
    {
        if(ptr->dado%2!=0)
        {
            ptr1->prox = ptr;
            ptr1 = ptr;
        }
        else
        {
            ptr2->prox = ptr;
            ptr2 = ptr;
        }
        ptr = ptr->prox;       
    }

    ptr1->prox = NULL;
    ptr2->prox = NULL;
}

// int remove_depois (celula *p)
// {
//     if(p->prox == NULL)
//         return -1;

//     celula *lixo = p->prox;
//     int dado = lixo->dado;
//     p->prox = lixo->prox;
//     free (lixo);
//     return dado;
// }

// void remove_elemento (celula *le, int x)
// {
//     if(le->prox == NULL)
//         return;

//     if(le->prox->dado == x)
//     {
//         remove_depois(le);
//         return;
//     }
        
//     celula *ptr = le->prox;

//     while(ptr->prox != NULL)
//     {
//         if(ptr->prox->dado == x)
//         {
//             remove_depois(ptr);
//             return;
//         }

//         ptr = ptr->prox; 
//     }

//     return;
// }

// void remove_todos_elementos (celula *le, int x)
// {
//     if(le->prox == NULL)
//         return;

//     while(le->prox->dado == x)
//     {
//         remove_depois(le);
//         if(le->prox == NULL)
//             return;
//     }
        
//     celula *ptr = le->prox;

//     while(ptr->prox != NULL)
//     {
//         while(ptr->prox->dado == x)
//         {
//             remove_depois(ptr);
//             if(ptr->prox == NULL)
//                 return;
//         }

//         ptr = ptr->prox; 
//     }

//     return;
// }

// void insere_inicio (celula *le, int x)
// {
//     celula *novo = malloc( sizeof(novo) );
//     novo->dado = x;
//     novo->prox = le->prox;
//     le->prox = novo;
// }

// void insere_antes (celula *le, int x, int y)
// {
//     if(le->prox->dado == y)
//     {
//         insere_inicio(le, x);
//         return;
//     }
        
//     celula *ptr = le->prox;

//     while(ptr->prox != NULL)
//     {
//         if(ptr->prox->dado == y)
//         {
//             insere_inicio(ptr, x);
//             return;
//         }
//         ptr = ptr->prox; 
//     }

//     insere_inicio(ptr, x);
//     return;
// }

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
//     celula *l = cria_lista();
//     celula *l1 = cria_lista();
//     celula *l2 = cria_lista();

//     int x, y;

//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);

//     // insere_inicio(l, 1);
//     // insere_inicio(l, 2);
//     // insere_inicio(l, 3);
//     // insere_inicio(l, 4);
//     insere_inicio(l, 10);
//     insere_inicio(l, 7);
//     insere_inicio(l, 2);
//     insere_inicio(l, -9);
//     insere_inicio(l, 4);
//     insere_inicio(l, 10);

//     imprime(l);
//     printf("\n");

//     divide_lista(l, l1, l2);

//     imprime(l);
//     printf("\n");

//     imprime(l1);
//     printf("\n");

//     imprime(l2);
//     printf("\n");

//     // while( input != 's' && input != 'S' )
//     // {
//     //     printf("[I]nsere X no inicio | Insere [a]ntes de X | Im[p]rime | [B]usca X | [R]emove X | Remove [t]odos X | [S]air\n: ");
//     //     scanf(" %c", &input);

//     //     switch (input)
//     //     {
//     //         case 'i':
//     //         case 'I':
//     //             scanf("%d", &x);
//     //             insere_inicio(p, x);
//     //             break;
//     //         case 'a':
//     //         case 'A':
//     //             scanf("%d %d", &x, &y);
//     //             insere_antes(p, x, y);
//     //             break;
//     //         case 'p':
//     //         case 'P':
//     //             imprime(p);
//     //             break;
//     //         case 'b':
//     //         case 'B':
//     //             scanf("%d", &x);
//     //             busca(p, x);
//     //             break;
//     //         case 'r':
//     //         case 'R':
//     //             scanf("%d", &x);
//     //             remove_elemento(p, x);
//     //             break;
//     //         case 't':
//     //         case 'T':
//     //             scanf("%d", &x);
//     //             remove_todos_elementos(p, x);
//     //             break;
//     //     }

//     // }

//     return 0;
// }