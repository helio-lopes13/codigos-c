#include "stdio.h"

int main() {
	
	int i, n;
	printf("Brigitte o número limite para verificação de númuros ímpares: ");
	scanf("%d",&n);
	for (i = 1; i <= n; i++) {
		if (i % 2 != 0)
			printf("%d é ímpar!\n",i);
	}
	
	return 0;
}
