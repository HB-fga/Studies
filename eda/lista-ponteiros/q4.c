#include <stdio.h>

void altera( int *ptr ) {	*ptr = 10; }
	
void troca( int *x, int *y )
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
	
int main()
{
	int *ptr;

	printf("%ld\n", sizeof(ptr));

	int x = 5;
	
	printf("%d\n", x);
	
	altera(&x);
	
	printf("%d\n", x);
	//printf("%p\n", y);
	
	////////////////////////////////////////////////////

	int a = 2, b = 3;
	
	troca( &a, &b );
	
	printf("%d %d\n", a, b);

	return 0;
}

// malloc
// calloc
// realloc

// ponteiro pra funcao?

// int* ptr = int *ptr = int * ptr
// int x = 5;
// ptr = &x; &x = endereco de x
// *ptr = conteudo de ptr = 5
