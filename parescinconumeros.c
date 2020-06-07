#include "stdio.h"

int main() {
	
	int i, contagem, numeros[5];
	
	for (i = 0; i < 5; i++) {
		scanf("%d",&numeros[i]);
	}
	
	for (i = 0; i < 5; i++) {
		if (numeros[i] % 2 == 0) {
			contagem++;
		}
	}
	
	printf("%d valores pares\n",contagem);
		
	return 0;
}
