#include <stdio.h>


int main(void) {
	
	float n1, n2, media;
	printf("Digite a nota 1:\t");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Digite a nota 2:\t");
	scanf("%f", &n2);
	media=(n1+n2)/2;
	if(media >=6){
		printf("APROVADO");
	}else if(media<6){
		printf("REPROVADO");
	}
	printf("A media eh %f", media);
	scanf("%f", &media);
	fflush(stdin);
	return 0;
}
