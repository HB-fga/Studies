#include <stdio.h>

int main() {
	
	int fig[1010];
	int k=0, n, p, menor, swap;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &fig[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		menor=fig[i];
		p=i;
		for (int j=i+1;j<n;j++)
		{
			if(fig[j]<menor)
			{
				menor=fig[j];
				p=j;
			}
		}
		swap=fig[i];
		fig[i]=fig[p];
		fig[p]=swap;
	}
	
	for(int i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			if(fig[i+1]-fig[i]!=1){k=1;}
			printf("%d ", fig[i]);
		}
		else
		{
			printf("%d\n", fig[i]);
		}
	}
	
	if(k==0)
	{
		printf("Tudo certo!\n");
	}
	else
	{
		printf("Ta faltando T-T\n");
	}
	
	return 0;
}
