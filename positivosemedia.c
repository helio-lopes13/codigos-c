#include "stdio.h"

int main() {
	
	int i, contagem;
	float media, numeros[6];
	
	for (i = 0; i < 6; i++) {
		scanf("%f",&numeros[i]);
	}
	
	for (i = 0; i < 6; i++) {
		if (numeros[i] >= 0) {
			contagem++;
			media += numeros[i];
		}
	}
	
	media /= contagem;
	
	printf("%d valores positivos\n%.1f\n",contagem,media);
		
	return 0;
}
