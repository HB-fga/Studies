#include <stdlib.h>
#include <stdio.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime (celula *le)
{
    celula *ptr = le->prox;

    while(ptr != NULL)
    {
        printf("%d -> ", ptr->dado);
        ptr = ptr->prox; 
    }

    printf("NULL\n");
}

void imprime_rec (celula *le)
{
    celula *ptr = le->prox;

    if(ptr != NULL)
    {
        printf("%d -> ", ptr->dado);
        return imprime_rec(ptr);
    }

    printf("NULL\n");
}

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
//     int x='a';
//     char input;
//     celula *p = cria_lista();

//     while( input != 's' && input != 'S' )
//     {
//         printf("[I]nsere | Im[p]rime | Imprime [R]ecursivamente | [S]air\n: ");
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
//             case 'r':
//             case 'R':
//                 imprime_rec(p);
//                 break;
//         }

//     }

//     return 0;
// }