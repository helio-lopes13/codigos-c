#include "stdio.h"

int main() {
	
	int i, contagem;
	float numeros[6];
	
	for (i = 0; i < 6; i++) {
		scanf("%f",&numeros[i]);
	}
	
	for (i = 0; i < 6; i++) {
		if (numeros[i] >= 0)
			contagem++;
	}
	
	printf("%d valores positivos\n",contagem);
		
	return 0;
}
