#include <stdio.h>
int main () {
	
	int x, c=0;
	
	scanf("%d", &x);
	
	while (c<10)
	{
		printf("N[%d] = %d\n", c, x);
		x *= 2;
		c++;
	}
	
	return 0;
}
