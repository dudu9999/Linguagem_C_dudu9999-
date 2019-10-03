// Faça um programa que leia um número inteiro e determine se ele é par ou ímpar. Ao final, o
// programa deve perguntar se o usuário deseja continuar (digitar outro número) ou sair. Se o
// usuário quiser continuar, o programa deve repetir tudo de novo, caso contrário o programa
// deve ser encerrado.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int numero;
	bool sair;
	sair = true;
	char resposta;
	
	while(sair == true){
		printf("-- Par ou Imparl --\n");
		printf("Digite um numero: ");
		scanf("%d",&numero);
		
		if(numero % 2 == 0){
			printf("\n-- Numero digitado e Par --\n\n");			
		}
		if(numero % 2 != 0){
			printf("\n-- Numero digitado e Imparl --\n\n");
		};
		
	printf("Deseja Ver se outro numero e par ou impar?");
	printf("\n     [ s -SIM / n - NAO ]\n   ");
	scanf("%s",&resposta);
	printf("\n");
		
		if(resposta == 'n'){
			sair = false;
		}
		
	}
	
	printf("-- Tchalzinho --\n");
	
}

