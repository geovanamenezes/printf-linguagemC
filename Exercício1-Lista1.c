#include <stdio.h>

/*Faça um programa em C com três variáveis do tipo int. Coloque o valor em cada uma dessas
variáveis e presente esse valores na tela utilizando:
a) três chamadas da função printf
b) uma única chamada da função prntf
*/

 int main(){
 	
 	int valor1;
 	int valor2;
 	int valor3;
 	valor1 = 1;
 	valor2 = 2;
 	valor3 = 3;
 	
 	// em três chamadas
 	printf("EXIBINDO OS VALORES NA TELA UTILIZANDO 3 CHAMADAS COM O PRINTF\n");
 	printf("Primeiro valor: %d", valor1);
 	printf("\nSegundo valor: %d", valor2);
 	printf("\nTerceiro valor: %d\n", valor3);
 	
 	
 	// em uma única chamada
 	printf("_________________________________________________________\n");
 	printf("EXIBINDO OS VALORES NA TELA UTILIZANDO 1 CHAMADA PRINTF");
 	printf("\nOs valores inseridos foram: %d %d %d", valor1 , valor2, valor3);
 	
 	return 0;
 }
