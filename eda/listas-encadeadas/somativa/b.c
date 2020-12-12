#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3)
{
    celula *ptr1 = l1->prox;
    celula *ptr2 = l2->prox;
    celula *ptr3 = l3;

    while(1)
    {
        if( ptr1 == NULL && ptr2 == NULL )
        {
            // printf("break\n");
            break;
        }
        else if( ptr1 != NULL && ptr2 == NULL )
        {
            // printf("2 esgotado\n");
            ptr3->prox = ptr1;
            ptr1 = ptr1->prox;
        }
        else if( ptr1 == NULL && ptr2 != NULL )
        {
            // printf("1 esgotado\n");
            ptr3->prox = ptr2;
            ptr2 = ptr2->prox;
        }
        else if( ptr1->dado < ptr2->dado )
        {
            // printf("1 - %d menor que %d\n", ptr1->dado, ptr2->dado);
            ptr3->prox = ptr1;
            ptr1 = ptr1->prox;
        }
        else if( ptr1->dado >= ptr2->dado )
        {
            // printf("2 - %d menor ou igual a %d\n", ptr2->dado, ptr1->dado);
            ptr3->prox = ptr2;
            ptr2 = ptr2->prox;
        }

        // scanf("%*c");
        ptr3 = ptr3->prox;
    }
    
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
//     celula *l1 = cria_lista();
//     celula *l2 = cria_lista();
//     celula *l3 = cria_lista();

//     insere_inicio(l1, 10);
//     insere_inicio(l1, 9);
//     insere_inicio(l1, 7);
//     insere_inicio(l1, 1);
//     insere_inicio(l1, 0);
//     insere_inicio(l1, -1);


//     insere_inicio(l2, 8);
//     insere_inicio(l2, 3);
//     insere_inicio(l2, 2);
//     insere_inicio(l2, -2);
//     insere_inicio(l2, -40);
//     insere_inicio(l2, -50);


//     // Print antes

//     printf("L1\n");
//     imprime(l1);
//     printf("\n");

//     printf("L2\n");
//     imprime(l2);
//     printf("\n");

//     // Print depois

//     printf("Mescla listas\nL3\n");
//     mescla_listas(l1, l2, l3);
//     imprime(l3);

    // while( input != 's' && input != 'S' )
    // {
    //     printf("[I]nsere X no inicio | Insere [a]ntes de X | Im[p]rime | [B]usca X | [R]emove X | Remove [t]odos X | [S]air\n: ");
    //     scanf(" %c", &input);

    //     switch (input)
    //     {
    //         case 'i':
    //         case 'I':
    //             scanf("%d", &x);
    //             insere_inicio(p, x);
    //             break;
    //         case 'a':
    //         case 'A':
    //             scanf("%d %d", &x, &y);
    //             insere_antes(p, x, y);
    //             break;
    //         case 'p':
    //         case 'P':
    //             imprime(p);
    //             break;
    //         case 'b':
    //         case 'B':
    //             scanf("%d", &x);
    //             busca(p, x);
    //             break;
    //         case 'r':
    //         case 'R':
    //             scanf("%d", &x);
    //             remove_elemento(p, x);
    //             break;
    //         case 't':
    //         case 'T':
    //             scanf("%d", &x);
    //             remove_todos_elementos(p, x);
    //             break;
    //     }

    // }

//     return 0;
// }