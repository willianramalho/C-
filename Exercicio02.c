/*
2. Fa�a um programa que pe�a dois n�meros inteiros e gere os n�meros pares
 que est�o no intervalo entre eles.
*/
#include <stdio.h>

int main(void){
	//Quais s�o as vari�veis?
	int numero1, numero2, indice, auxiliar;
	
	//Quais s�o as entradas de dados?
	printf("Digite o valor do numero 1: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite o valor do numero 2: ");
	scanf("%i",&numero2);
	fflush(stdin);
	
	//Qual � o processamento dos dados?
	if(numero1>numero2){
		auxiliar=numero1;
		numero1=numero2;
		numero2=auxiliar;
	}
	
	//Quais s�o as sa�da de dados?
	for(indice=numero1+1;indice<numero2;indice++){
		if(indice%2 == 0){
			printf("%i, ",indice);
		}
	}
	return 0;
}
