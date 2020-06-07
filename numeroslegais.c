#include "stdio.h"

int main() {
	
	int i;
	int contPar = 0;
	int contImpar = 0;
	int contPosi = 0;
	int contNeg = 0;
	int numeros[5];
	
	for (i = 0; i < 5; i++) {
		scanf("%d",&numeros[i]);
	}
	
	for (i = 0; i < 5; i++) {
		if (numeros[i] % 2 == 0) {
			contPar++;
		} else { 
			contImpar++;
		}
		if (numeros[i] > 0) {
			contPosi++;
		} else if (numeros[i] < 0) {
			contNeg++;
		}
	}
	
	printf("%d valor(es) par(es)\n",contPar);
	printf("%d valor(es) impar(es)\n",contImpar);
	printf("%d valor(es) positivo(s)\n",contPosi);
	printf("%d valor(es) negativo(s)\n",contNeg);
		
	return 0;
}
