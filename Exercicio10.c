/*
10. Fa�a um programa que pe�a dois n�meros inteiros (base e expoente), 
calcule e mostre o primeiro n�mero elevado ao segundo n�mero.
*/
#include <stdio.h>

int main(void){
	//vari�veis?
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
	
	//sa�da de dados:
	printf("O valor e %i",resultado);
	
	return 0;
}
