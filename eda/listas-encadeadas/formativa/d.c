#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int remove_depois (celula *p);
void remove_elemento (celula *le, int x);
void remove_todos_elementos (celula *le, int x);

int remove_depois (celula *p)
{
    if(p->prox == NULL)
        return -1;

    celula *lixo = p->prox;
    int dado = lixo->dado;
    p->prox = lixo->prox;
    free (lixo);
    return dado;
}

void remove_elemento (celula *le, int x)
{
    if(le->prox == NULL)
        return;

    if(le->prox->dado == x)
    {
        remove_depois(le);
        return;
    }
        
    celula *ptr = le->prox;

    while(ptr->prox != NULL)
    {
        if(ptr->prox->dado == x)
        {
            remove_depois(ptr);
            return;
        }

        ptr = ptr->prox; 
    }

    return;
}

void remove_todos_elementos (celula *le, int x)
{
    if(le->prox == NULL)
        return;

    while(le->prox->dado == x)
    {
        remove_depois(le);
        // printf("le foi %d\n", remove_depois(le));
        if(le->prox == NULL)
            return;
    }
        
    celula *ptr = le->prox;

    while(ptr->prox != NULL)
    {
        while(ptr->prox->dado == x)
        {
            remove_depois(ptr);
            // printf("ptr foi %d\n", remove_depois(ptr));
            if(ptr->prox == NULL)
                return;
        }

        ptr = ptr->prox; 
    }

    return;
}

// void insere_inicio(celula *le, int x)
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
//     celula *p = cria_lista();

//     int x, y;

//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);
//     // insere_inicio(p, rand()%500);

//     insere_inicio(p, rand()%500);
//     insere_inicio(p, 5);
//     insere_inicio(p, 5);
//     insere_inicio(p, 5);
//     insere_inicio(p, 5);
//     insere_inicio(p, rand()%500);
//     insere_inicio(p, 5);
//     insere_inicio(p, 5);
//     insere_inicio(p, 5);
//     insere_inicio(p, 5);
//     insere_inicio(p, rand()%500);

//     while( input != 's' && input != 'S' )
//     {
//         printf("[I]nsere X no inicio | Insere [a]ntes de X | Im[p]rime | [B]usca X | [R]emove X | Remove [t]odos X | [S]air\n: ");
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
//                 insere_antes(p, x, y);
//                 break;
//             case 'p':
//             case 'P':
//                 imprime(p);
//                 break;
//             case 'b':
//             case 'B':
//                 scanf("%d", &x);
//                 busca(p, x);
//                 break;
//             case 'r':
//             case 'R':
//                 scanf("%d", &x);
//                 remove_elemento(p, x);
//                 break;
//             case 't':
//             case 'T':
//                 scanf("%d", &x);
//                 remove_todos_elementos(p, x);
//                 break;
//         }

//     }

//     return 0;
// }