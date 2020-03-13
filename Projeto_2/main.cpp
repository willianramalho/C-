#include <iostream>


int main(void) {
	
	float c, f;
	
	printf("Digite o Valor em Fahrenheit: ");
	scanf("%f", &f);
	fflush(stdin);
	c=5*(f-32)/9;
	printf("O Valor em Celsius e %.1f\xF8", c);
	return 0;
}
