/*
1. Fa�a um programa que pe�a dois n�meros inteiros e gere os n�meros 
inteiros que est�o no intervalo entre eles.
*/
#include <stdio.h>

int main (void){
	//Quais s�o as vari�veis?
	int n1, n2, indice, auxiliar;
	
	//Quais s�o as entrada de dados?
	printf("Digite n1: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite n2: ");
	scanf("%i",&n2);
	fflush(stdin);
		
	//Qual � o processo dos dados? 
	if(n1>n2){
		auxiliar=n1;
		n1=n2;
		n2=auxiliar;
	}
	
	//Qual � a saida dos dados?
	for(indice=n1+1;indice<n2;indice++){
		printf("%i, ", indice);
	}
	
	return 0;
}
