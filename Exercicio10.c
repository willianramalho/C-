/*
10. Faça um programa que peça dois números inteiros (base e expoente), 
calcule e mostre o primeiro número elevado ao segundo número.
*/
#include <stdio.h>

int main(void){
	//variáveis?
	int base, expoente, resultado=1;
	
	//entrada de dados?
	printf("Digite a base: ");
	scanf("%i",&base);
	fflush(stdin);
	printf("Digite o expoente: ");
	scanf("%i",&expoente);
	fflush(stdin);
	
	//processamento?
	while(expoente>0){
		resultado=resultado*base;
		expoente--;
	}
	
	//saída de dados:
	printf("O valor e %i",resultado);
	
	return 0;
}
