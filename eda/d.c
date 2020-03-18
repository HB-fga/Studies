#include <stdio.h>

int main() {
	int num, i, max;
	
	for(i = 0;i < 4;i++)
	{
		scanf("%d", &num);
		if(i == 0)
			max = num;
		if(num > max)
			max = num;
	}
	printf("%d\n", max);
	return 0;
}
