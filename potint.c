#include "stdio.h"

int potInt(int, int);
int potIntRecN(int, int);

int main() {
	int base, expoente;
	printf("Digite a base da potência: ");
	scanf("%d",&base);
	printf("Digite o expoente da potência: ");
	scanf("%d",&expoente);
	printf("%d elevado a %d = %d.\n",base,expoente,potInt(base,expoente));
	printf("%d elevado a %d = %d.\n",base,expoente,potIntRecN(base,expoente));
	return 0;
}

int potInt(int base, int expoente) {
	int i, pot = 1;
	for(i = 1; i <= expoente; i++) {
		pot *= base;
	}
	return pot;
}

int potIntRecN(int b, int n) {
	if (n == 1)
		return b;
	else
		return b * potIntRecN(b, n-1);
}
