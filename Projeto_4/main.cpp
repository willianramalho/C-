#include <iostream>
#include <math.h>

int main(void) {
	
	float a, r;
	printf("Digite o raio:");
	scanf("%f", &r);
	fflush(stdin);
	a=M_PI*pow(r,2);
	printf("Area eh %.2f", a);
	
	return 0;
}
