#include <stdio.h>

int main() {
	
	int x, b, p=1, r=0;
	
	scanf("%d %d", &x, &b);
	
	while (x!=0)
	{
		r+=p*(x%10);
		x/=10;
		p*=b;
	}
	
	printf("%d\n", r);
	
	return 0;
}