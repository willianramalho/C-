/*
8. Supondo que a popula��o de um pa�s A seja da ordem de 80.000 habitantes 
com uma taxa anual de crescimento de 3% e que a popula��o do pa�s B seja, 
aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual 
de 1,5%. Fazer um programa que calcule e escreva o n�mero de anos necess�rios 
para que a popula��o do pa�s A ultrapasse ou iguale a popula��o do pa�s B,
mantidas essas taxas de crescimento.
*/
#include <stdio.h>

int main(void){
	//vari�veis?
	int anos=0;
	float a=80000, b=200000;
	
	//processamento?
	while(a<=b){
		anos++; // anos = anos + 1;
		a=a*1.03;
		b=b*1.015;
		printf("%i\t-\t%.f\t%.f\n",anos,a,b);
	}
	
	//sa�da de dados?
	printf("Anos e %i",anos);
	
	return 0;
}
