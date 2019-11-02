#include <stdio.h>

int main() {
	
	int n, x, y, z;
	
	scanf("%d", &n);
	
	while (n > 0)
	{
		scanf("%d %d", &x, &y);
		z = x;
		while (y > 1)
		{
			x *= z;
			y--;
		}
		printf("%d\n", x);
		n--;
	}
	
	return 0;
}
