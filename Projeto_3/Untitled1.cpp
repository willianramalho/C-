#include <iostream>
#include <math.h>

int main(void) {
	
	int n1, n2;
	float n3;
	printf("Digite n1: ");
	scanf("%i", &n1);
	
	printf("Digite n2: ");
	scanf("%i", &n2);
	
	printf("Digite n3: ");
	scanf("%f", &n3);
	
	printf("a R. %.2f \n", (float)(n1*2+(float)n2/2));
	
	printf("b R. %.2f \n", (float)(n1*3+n3));
	
	printf("c. R.: %.2f \n", pow(n3,3));
	return 0;
}
