#include <stdio.h>

double desconto(double pagamento, char formaPag) {

	if (formaPag == 'd' || formaPag == 'D') { 
		pagamento -= pagamento*0.03;
	}
	else if (formaPag == 'v' || formaPag == 'V') {
		pagamento -= pagamento*0.05;	
	}
	
	return pagamento;
}	

int main() {
	
	double pagamento;
	char forma;
	
	double res;
	
	printf("Digite pagamento: ");
	scanf("%lf %c", &pagamento, &forma);
	
	res = desconto(pagamento, forma);
	
	printf("%.2lf\n", res);
	
	return 0;
}	
