#include "stdio.h"

int main() {
	
	int horas, velocidade;
	scanf("%d",&horas);
	scanf("%d",&velocidade);

	float litros = (horas * velocidade) / 12.0;
	printf("%.3f\n",litros);
	
	return 0;
}
