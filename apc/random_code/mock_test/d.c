#include <stdio.h>

int main() {
	
	int sac[1010];
	int n, m, soma, soma0, menora, menorb;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &m);
		
		for(int j=0;j<m;j++)
		{
			scanf("%d", &sac[j]);
		}
		
		soma=0;
		soma0=sac[0];
		menora=0;
		menorb=0;
		for(int j=0;j<m-1;j++)
		{
			for(int h=j;h<m;h++)
			{
				soma+=sac[h];
				if(soma>soma0)
				{
					soma0=soma;
					menora=j;
					menorb=h;
				}
			}
			soma=0;
		}
		
		printf("Ele deve escolher as sacolas %d e %d, que vao render %d\n", menora, menorb, soma0);
	}
	
	return 0;
}
