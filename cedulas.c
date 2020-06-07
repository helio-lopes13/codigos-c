#include "stdio.h"

int main() {
	
	int dinheiro, i;
	int valores[7] = {100, 50, 20, 10, 5, 2, 1};
	int notas[7] = {0, 0, 0, 0, 0, 0, 0};
	scanf("%d",&dinheiro);
	
	int tempDinheiro = dinheiro;
	
	for(i = 0; i < 7; i++) {
		while(dinheiro >= valores[i]) {
			dinheiro -= valores[i];
			notas[i]++;
		}
	}
	
	printf("%d\n",tempDinheiro);
	
	for(i = 0; i < 7; i++) {
		printf("%d nota(s) de R$ %d,00\n",notas[i],valores[i]);
	}
	
	return 0;
}
