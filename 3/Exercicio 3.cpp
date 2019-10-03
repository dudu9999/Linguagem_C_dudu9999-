# include <stdio.h>
# include <stdlib.h>

// Escreva um programa que gere e mostre os números múltiplos de 5 entre 1 e 50

int main(int argc, char *argv[]){

	// primeiro declarar variaveis
	int N;
	int i;
	int soma;
	soma = 0;
	
	printf("Digite um numer: ");
	scanf("%d",&N);
	
	for	(i=0; i<=N; i++){
		soma = soma + i;	
	}
	
	printf("%d\n",soma);
	
	return 0;
}

