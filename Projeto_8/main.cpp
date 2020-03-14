#include <iostream>


int main(void) {
	
	float valor_hora, horas_trab;
	printf("Digite o valor da hora ");
	scanf("%f", &valor_hora);
	fflush(stdin);
	printf("Horas trabalhadas? ");
	scanf("%f", &horas_trab);
	fflush(stdin);
	printf(" Total a receber eh %.2f", valor_hora*horas_trab);
	return 0;
}
