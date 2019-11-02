#include <stdio.h>

int main() {
	
	int n, l, lf, lr=0;
	
	scanf("%d", &n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", &l, &lf);
		
		while(l!=0)
		{
			l--;
			lr+=l;
		}
		
		if(lr>lf)
		{
			lr-=lf;
			
			printf("%d\n", lr);
		}
		else
		{
			printf("0\n");
		}
		lr=0;
	}
	
	return 0;
}
