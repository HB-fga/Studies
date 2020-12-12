#include <stdio.h>

int main()
{
	int a, x, y, z;
	
	printf("Choose a number and a number to raise to the power of it respectively:\nExample: 2 3\n");
	
	scanf("%d %d", &x, &y);
	
	z = y-1;
	a = x;
	
	while (z--)
	{
		x *= y;
	}
	
	printf("%d raised to the power of %d equals %d\n", a, y, x);
	
	return 0;
}
