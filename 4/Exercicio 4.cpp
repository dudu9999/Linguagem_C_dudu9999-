#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que gere e mostre os números múltiplos de 5 entre 1 e 50

int main(int argc, char *argv[]){

	int fatorial;
	int resultado = 1;
	
	printf("-- Calculo de Fatorial --\n");
	printf("Digite um numero: ");
	scanf("%d",&fatorial);
	
	for	(; fatorial>=1; fatorial--){
		resultado *= fatorial;	
	}
	
	printf("O resultado do Fatorial e %d",resultado);
	
	return 0;
}

