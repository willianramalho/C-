#include <stdio.h>


int main(void) {
	
	float dias;
	printf("Digite a quantidade de dias");
	scanf("%f", &dias);
	fflush(stdin);
	printf("Valor liquido %.2f", dias*25*0.92);

	return 0;
}
