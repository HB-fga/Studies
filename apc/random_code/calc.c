#include <stdio.h>

int main() {
	
	printf("Digite, respectivamente, um numero, um operador (+, -, *, /) e outro numero\n");
	int x, y, z;
	char op;
	scanf("%d %c %d", &x, &op, &y);
	
	if (op == '+')
	{
	z = x + y;
	}
	else if (op == '-')
	{
	z = x - y;
	}
	else if (op == '*')
	{
	z = x * y;
	}
	else if (op == '/')
	{
	z = x / y;
	}
	printf("%d\n", z);
	
	return 0;
}
