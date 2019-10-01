#include <stdio.h>

int main() {
	
	int nc;
	double ne, total;
	double num[100];
	char cores[100][100];
	
	printf("DIGITE '0' ANTES DE UM NOVO CALCULO PARA FECHAR O PROGRAMA\n\nInforme:\n- Quantas cores de mana voce pretende contabilizar\n- As cores seguidas de seus espacos de mana\n- Quantidade de espacos vagos no seu deck\n\nExemplo:\n2\nAzul 12\nVermelho 8\n15\n");
	printf("----------------------------------------------------------------\n\n");
	
	while(1)
	{
		scanf("%d", &nc);
		if(nc==0){break;}
		
		total=0;
		for(int i=0;i<nc;i++)
		{
			scanf("%s %lf", cores[i], &num[i]);
			total+=num[i];
		}
		scanf("%lf", &ne);
		
		for(int i=0;i<nc;i++)
		{
			num[i]=(num[i]*100)/total;
			num[i]=(num[i]*ne)/100;
		}
		
		printf("\n");
		printf("SOLUCAO:\n");
		for(int i=0;i<nc;i++)
		{
			printf("%s %.2lf\n", cores[i], num[i]);
		}
		printf("\n");
		printf("----------------------------------------------------------------\n");
	}
	
	return 0;
}
