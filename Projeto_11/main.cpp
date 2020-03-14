#include <stdio.h>


int main(void) {
	
	float x, h, l, m, lt;
	printf("Digite o valor da largura\n\n");
	scanf("%f", &x);
	fflush(stdin);
	printf("digite o valor da altura\n\n");
	scanf("%f", &h);
	fflush(stdin);
	m=x*h;
	l=m*3;
	lt=l/3.6;
	if(lt== (int)lt){
		printf("A quantidae de latas eh %i\n\n",(int)lt);	
	}else{
		printf("A quantidae de latas eh %i\n\n", (int)lt+1);
	}
	return 0;
}
