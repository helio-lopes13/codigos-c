#include "stdio.h"

float calculoTarifa(float taxaFixa, float valorKm, float valorMin, float distancia, float tempo) {
	return taxaFixa + (valorKm * distancia) + (valorMin * tempo);
}

int main() {
	float valorTotal, distancia, tempo;
	
	printf("Digite a distância percorrida: ");
	scanf("%f",&distancia);
	printf("Digite o tempo da corrida: ");
	scanf("%f",&tempo);
	printf("Digite o valor pago: ");
	scanf("%f",&valorTotal);
	
	if (valorTotal == calculoTarifa(2.5,1.2,0.2,distancia,tempo))
		printf("O aplicativo usado foi o Uber X.\n");
	else if (valorTotal == calculoTarifa(2.38,1.14,0.19,distancia,tempo)) 
		printf("O aplicativo usado foi o 99Pop.\n");
	else
		printf("Nenhum dos aplicativos foi usado, procure a polícia.\n");
}
