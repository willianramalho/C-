/*
9. Fa�a um programa que calcule e mostre a soma dos n�meros pares entre 
100 e 200 (inclusive). O usu�rio deve ter a op��o de repetir quantas 
vezes quiser esta opera��o.
*/
#include <stdio.h>

int main(void){
	//vari�veis?
	int indice, soma;
	char opcao;
	
	//processamento?
	do{
		system("cls");
		soma=0;
		for(indice=100;indice<=200;indice+=2/*indice=indice+2*/){
			soma+=indice /*soma=soma+indece*/;
		}
		printf("A soma e %i\n\n",soma);
		printf("Deseja repetir a operacao? (s/n) ");
		scanf("%c",&opcao);
		fflush(stdin);
	}while(opcao=='s');
	return 0;
}
