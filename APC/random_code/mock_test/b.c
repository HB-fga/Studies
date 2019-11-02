#include <stdio.h>

int main() {
	
	int lata[1010];
	int n, l, peso=0, teste=0;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &l);
		for(int j=0;j<l;j++)
		{
			scanf("%d", &lata[j]);
			peso+=lata[j];
		}
		
		for(int j=0;j<l;j++)
		{
			teste+=lata[j];
			if(teste==((peso-lata[j+1])/2))
			{
				printf("Ponto de equilibrio encontrado: %d\n", j+1);
				break;
			}
			else if(teste>(peso/2))
			{
				printf("Desequilibrado\n");
				break;
			}
		}
		
		peso=0;
		teste=0;
		
	}
		
	return 0;
}
