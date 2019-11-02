#include <stdio.h>

int main() {
	
	int a[100];
	
	for (int i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i=0;i<5;i++)
	{
		if (a[i]<=10)
		{
			printf("A[%d] = %d\n", i, a[i]);
		}
	}
	
	return 0;
}
