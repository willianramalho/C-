#include <iostream>


int main(void) {
	
	float n1, n2, n3, n4, m;
	printf("Digite a nota 1:");
	scanf("%f", &n1);
	fflush(stdin);
	printf("digite a nota 2:");
	scanf("%f", &n2);
	fflush(stdin);
	printf("Digite a nota 3:");
	scanf("%f", &n3);
	fflush(stdin);
	printf("digite a nota 4:");
	scanf("%f", &n4);
	fflush(stdin);
	m=(n1+n2+n3+n4/4);
	printf("A media eh %f", m);
	return 0;
}
