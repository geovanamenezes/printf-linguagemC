#include <stdio.h>
/*
Repita o exercício anterios, porém utilize variáveis float. 
Apresente os valores com duas e três casas decimais
*/

int main(){
	 float valor1;
	 float valor2;
	 float valor3;
	 valor1 = 1.2345;
	 valor2 = 23.45678;
	 valor3 = 345.67890;
	 
	 printf("DUAS CASAS DECIMAIS - USANDO UM PRINTF\n");
	 printf("Os 3 valores: %.2f %.2f %.2f", valor1, valor2, valor3);
	 printf("\n");
	 printf("\nDUAS CASAS DECIMAIS - USANDO 3 PRINTF\n");
	 printf("Valor 1: %.2f", valor1);
	 printf("\nValor 2: %.2f", valor2);
	 printf("\nValor 3: %.2f", valor3);
	 printf("\n");
	 printf("\n3 CASAS DECIMAIS - USANDO UM PRINTF\n");
	 printf("Os 3 valores: %.3f %.3f %.3f", valor1, valor2, valor3);
	 printf("\n");
	 printf("\n3 CASAS DECIMAIS - USANDO 3 PRINTF\n");
	 printf("Valor 1: %.3f", valor1);
	 printf("\nValor 2: %.3f", valor2);
	 printf("\nValor 3: %.3f", valor3);
	
	return 0;
}
