/*
7. Fa�a um programa que gere a tabuada de 1 a 10 de qualquer n�mero. 
O usu�rio deve informar de qual n�mero deseja ver a tabuada.
*/
#include <stdio.h>

int main (void){
	//vari�veis?
	int tabuada, indice;
	char opcao;
	
	do{
		system("cls");
		//entrada de dados?
		printf("Qual tabuada desejada? ");
		scanf("%i",&tabuada);
		fflush(stdin);
		
		//processamento + sa�da de dados?
		for(indice=1;indice<=10;indice++){
			printf("%i x %i = %i\n",indice,tabuada,indice*tabuada);
		}

		printf("\nDeseja outra tabuada? (s/n): ");
		scanf("%c",&opcao);
		fflush(stdin);
	}while(opcao=='s');
	return 0;
}

