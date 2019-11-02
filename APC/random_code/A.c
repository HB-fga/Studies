#include <stdio.h>

int main() {
	
	int n, m;
	
	scanf("%d", &n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &m);
		
		printf("Caso %d:\n", i);
		for(int j=1;j<=m;j++)
		{
			if((j%5==0) && (j%3==0))
			{
				printf("FizzBuzz\n");
			}
			else if(j%5==0)
			{
				printf("Buzz\n");
			}
			else if(j%3==0)
			{
				printf("Fizz\n");
			}
			else
			{
				printf("%d\n", j);
			}
		}
	}
	
	return 0;
}
