#include <stdio.h>

int main() {
	
	int g1, g2, g3, g4;
	scanf("%d%d%d%d", &g1, &g2, &g3, &g4);
	
	int gx = g1 + g2 + g3 + g4;
	
	if (gx == 0)
	{
		printf("1\n");
	}
	else if (gx < 0)
	{
		int x = ((gx + 40) % 4) + 1;
		printf("%d\n", x);
	}
	else
	{
		int x = (gx % 4) + 1;
		printf("%d\n", x);
	}
	
	return 0;
}
