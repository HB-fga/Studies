#include <stdio.h>

int main() {
	
	int poke[1100];
	int swap, n1, n2, x, y;
	
	scanf("%d", &n1);
	
	for(int i=0;i<n1;i++)
	{
		scanf("%d", &poke[i]);
	}
	
	scanf("%d", &n2);
	
	for(int i=0;i<n2;i++)
	{
		scanf("%d %d", &x, &y);
		
		if(x>y)
		{
			swap=x;
			x=y;
			y=swap;
		}
		
		if(x<0){x=0;}
		if(y>n1-1){y=n1-1;}
		
		for(int j=x;j<=y;j++)
		{
			if(j!=y)
			{
				printf("%d ", poke[j]);
			}
			else
			{
				printf("%d\n", poke[j]);
			}
		}
		
	}
	
	return 0;
}
