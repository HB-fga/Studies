#include <stdio.h>

int busca( int *v, int n, int x )
{
	for(int i = 0; i < n; i++)
	{
		if( v[i] == x ) return i;
	}

	return -1;
}

int main()
{
	int vt[100] = {};
	int n, x;

	for(int i = 0; i < 50; i++)
	{
		vt[i] = i+1;
	}

	scanf( "%d", &x );

	printf("%d\n", busca( vt, 100, x ) );
	
   return 0;
}
