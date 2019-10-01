#include <stdio.h>

int main() {
	
	char n = 'p';
	int x, y, z;
	
	while (n == 'p') //caso leia "n" menor que "0" para a repeti
	{
		scanf("%d %d", &x, &y);
		z = x;
		while (y > 1)
		{
			x *= z;
			y--;
		}
		printf("%d\n", x);
		scanf(" %c", &n);
	}
	
	return 0;
}
