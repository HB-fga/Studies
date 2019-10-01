#include <stdio.h>

int main() {
	
	int l;
	
	printf("Nicole, o quanto voce ama o Hugo?\n");
	scanf("%d", &l);
	printf("O Hugo te ama %d!\nEle te ama mais!\n", ++l);

	return 0;
}