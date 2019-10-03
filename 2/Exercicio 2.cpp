# include <stdio.h>
# include <stdlib.h>

// Escreva um programa que gere e mostre os números múltiplos de 5 entre 1 e 50

int main(int argc, char *argv[]){
	// primeiro declarar variaveis
	int numero;
	int i;
	
	
	for	(i=0; i<50; i++){
		// % serve para obter o resto , entao todo 
		// numero que dividido por 5 sobrar zero vai ser mostrado.
		if(i % 5 == 0 ){
			
			printf("%d\n",i);
			
		}
	}
	
}

