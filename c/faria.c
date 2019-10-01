#include <stdio.h>

int dc(int x){
	
	int c=0;
	
	while (x!=0)
	{
		c++;
		x/=10;
	}
	
	return c;
}

int main() {
	
	int m[100][100];
	int N, M;
	
	scanf("%d %d", &N, &M);
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			scanf("%d", &m[j][i]);
		}
	}
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(j==M-1)
			{
				printf("%d", m[i][j]);
			}
			else
			{
				printf("%d ", m[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
