/*
2. Faça um programa que peça dois números inteiros e gere os números pares
 que estão no intervalo entre eles.
*/
#include <stdio.h>

int main(void){
	//Quais são as variáveis?
	int numero1, numero2, indice, auxiliar;
	
	//Quais são as entradas de dados?
	printf("Digite o valor do numero 1: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite o valor do numero 2: ");
	scanf("%i",&numero2);
	fflush(stdin);
	
	//Qual é o processamento dos dados?
	if(numero1>numero2){
		auxiliar=numero1;
		numero1=numero2;
		numero2=auxiliar;
	}
	
	//Quais são as saída de dados?
	for(indice=numero1+1;indice<numero2;indice++){
		if(indice%2 == 0){
			printf("%i, ",indice);
		}
	}
	return 0;
}
