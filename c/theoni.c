#include <stdio.h>

int main() {
	
	int n, i=1, x, x0, p=1;
	
	scanf("%d", &n);
	scanf("%d", &x);
	x0=x;
	p++;
	
	while (p<=n)
	{
		scanf("%d", &x);
		if (x>x0)
		{
			x0=x;
			i=p;
		}
		p++;
	}
	
	printf("%d\n", i);
	
	return 0;
}
