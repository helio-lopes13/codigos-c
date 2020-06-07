#include "stdio.h"

int main() {
	
	int i;
	double dinheiro;
	double celulas[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
	double monedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
	int celulas100[6] = {10000, 5000, 2000, 1000, 500, 200};
	int monedas100[6] = {100, 50, 25, 10, 5, 1};
	int notas[6] = {0, 0, 0, 0, 0, 0};
	int moedas[6] = {0, 0, 0, 0, 0, 0};
	scanf("%lf",&dinheiro);
	
	double tempDinheiro = dinheiro;
	tempDinheiro *= 100;
	
	for(i = 0; i < 6; i++) {
		while(tempDinheiro >= celulas100[i]) {
			tempDinheiro -= celulas100[i];
			notas[i]++;
		}
	}
	
	for(i = 0; i < 6; i++) {
		while(tempDinheiro >= monedas100[i]) {
			tempDinheiro -= monedas100[i];
			moedas[i]++;
		}
	}
	
	printf("NOTAS:\n");
	for(i = 0; i < 6; i++) {
		printf("%d nota(s) de R$ %.2f\n",notas[i],celulas[i]);
	}
	printf("MOEDAS:\n");
	for(i = 0; i < 6; i++) {
		printf("%d moeda(s) de R$ %.2f\n",moedas[i],monedas[i]);
	}
		
	return 0;
}
