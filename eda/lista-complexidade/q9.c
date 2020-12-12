#include <stdio.h>

// Supondo que o vetor esteja ordenado em ordem crescente:

int ULTIMO_ELEMENTO_DO_VETOR = 49;

void insere( int *v, int x )
{
	for(int i = ULTIMO_ELEMENTO_DO_VETOR+1; i > 0; i--)
	{
		if( x >= v[i-1] )
		{
			v[i] = x;
			return;
		}
		else
		{
			int swap = v[i];
			v[i] = v[i-1];
			v[i-1] = swap;

			if( i-1 == 0 )
			{
				v[i-1] = x;
				return;
			}
		}
	}
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

	insere(vt, x);

	for(int i = 0; i < 70; i++)
	{
		printf("vt[%d] = %d\n", i, vt[i] );
	}
	
   return 0;
}
