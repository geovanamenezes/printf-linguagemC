#include <stdio.h>

/*Fa�a um programa em C com tr�s vari�veis do tipo int. Coloque o valor em cada uma dessas
vari�veis e presente esse valores na tela utilizando:
a) tr�s chamadas da fun��o printf
b) uma �nica chamada da fun��o prntf
*/

 int main(){
 	
 	int valor1;
 	int valor2;
 	int valor3;
 	valor1 = 1;
 	valor2 = 2;
 	valor3 = 3;
 	
 	// em tr�s chamadas
 	printf("EXIBINDO OS VALORES NA TELA UTILIZANDO 3 CHAMADAS COM O PRINTF\n");
 	printf("Primeiro valor: %d", valor1);
 	printf("\nSegundo valor: %d", valor2);
 	printf("\nTerceiro valor: %d\n", valor3);
 	
 	
 	// em uma �nica chamada
 	printf("_________________________________________________________\n");
 	printf("EXIBINDO OS VALORES NA TELA UTILIZANDO 1 CHAMADA PRINTF");
 	printf("\nOs valores inseridos foram: %d %d %d", valor1 , valor2, valor3);
 	
 	return 0;
 }
