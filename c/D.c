#include <stdio.h>

int main() {
	
	int n, x;
	int f=1;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d", &x);
		
		for(int j=2;j<x;j++)
		{
			if(x%j==0)
			{
				f=0;
			}
		}
		
		if(f==1)
		{
			printf("Primo\n");
		}
		else
		{
			printf("Nao primo\n");
		}
		f=1;
	}
	
	return 0;
}
