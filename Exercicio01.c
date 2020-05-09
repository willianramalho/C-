/*
1. Faça um programa que peça dois números inteiros e gere os números 
inteiros que estão no intervalo entre eles.
*/
#include <stdio.h>

int main (void){
	//Quais são as variáveis?
	int n1, n2, indice, auxiliar;
	
	//Quais são as entrada de dados?
	printf("Digite n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite n2: ");
	scanf("%i",&n2);
	fflush(stdin);
		
	//Qual é o processo dos dados? 
	if(n1>n2){
		auxiliar=n1;
		n1=n2;
		n2=auxiliar;
	}
	
	//Qual é a saida dos dados?
	for(indice=n1+1;indice<n2;indice++){
		printf("%i, ", indice);
	}
	
	return 0;
}
