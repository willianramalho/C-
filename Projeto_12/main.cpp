#include <stdio.h>


int main(void) {
	
	float s;
	
	printf("Digite o salario:\t\n");
	scanf("%f", &s);
	fflush(stdin);
	printf("Salario Bruto      :R$ %.2f\n",s);
	printf("(-) IR (15%)       :R$ %.2f\n",s*0.15);
	printf("(-) INSS (11%)     :R$ %.2f\n",s*0.11);
	printf("(-) Sindicado (3%) :R$ %.2f\n",s*0.3);
	printf("Salario liquido    :R$ %.2f\n",s*0.71);
	return 0;
}
