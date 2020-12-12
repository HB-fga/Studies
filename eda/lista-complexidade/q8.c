#include <stdio.h>

int ordenado( int *v, int n )
{
	if(n == 1) return 0;

	for(int i = 1; i < n; i++)
	{
		if( v[i-1] < v[i] ) return 1;
	}

	return 0;
}

int main()
{
	int vt[100] = {};
	int n;

	for(int i = 0; i < 50; i++)
	{
		vt[i] = rand() % 500;
	}

	// vt[0] = 1;

	printf("%d\n", ordenado( vt, 100 ) );
	
   return 0;
}
