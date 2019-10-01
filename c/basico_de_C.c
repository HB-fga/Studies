#include <stdio.h>

int main() {
	
	//inteiro = int
	int inteiro=5;
	
	//real = float ou double
	float decimal=6.37;
	double decimal_preciso=4.709846;
	
	//caracter = char
	char letra='u';
	
	//marcador de tamanho para inteiros
	//os valores sao apenas exemplos!
	int numero=1928374658;
	long long int numero_maior=1728394836482017263 ;
	
	//leia = scanf("");
	int num1;
	scanf("%d", &num1);
	
	//o "&" antes da variavel e necessario apenas no scanf
	//use a seguinte sintaxe para chamar os valores:
	//%d para int
	//%lld para long long int
	//%f para float
	//%lf para double
	//%.2lf para double com duas casas decimais (o mesmo vale para outras quantidades de casas decimais)
	//%c para char
	
	//escreva = printf("");
	// quebra de linha = \n
	printf("Eu gosto do numero: %d\n", num1);
	
	//operadores
	// + - * / %
	
	// % = resto da divisão inteira
	// 5%2=1;
		
	int n = 2376;
	//n%10=6
	//(n/10)%10=7
	////(n/100)%10=3
	// e assim por diante
	
	//x = x + 1 ou x = x - 1;
	num1++;
	num1--;
	
	//LOOPS

	return 0;
}
