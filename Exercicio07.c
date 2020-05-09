/*
7. Faça um programa que gere a tabuada de 1 a 10 de qualquer número. 
O usuário deve informar de qual número deseja ver a tabuada.
*/
#include <stdio.h>

int main (void){
	//variáveis?
	int tabuada, indice;
	char opcao;
	
	do{
		system("cls");
		//entrada de dados?
		printf("Qual tabuada desejada? ");
		scanf("%i",&tabuada);
		fflush(stdin);
		
		//processamento + saída de dados?
		for(indice=1;indice<=10;indice++){
			printf("%i x %i = %i\n",indice,tabuada,indice*tabuada);
		}

		printf("\nDeseja outra tabuada? (s/n): ");
		scanf("%c",&opcao);
		fflush(stdin);
	}while(opcao=='s');
	return 0;
}

