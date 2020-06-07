#include "stdio.h"

int main() {
	
	int i, n;
	printf("Brigitte o número limite para verificação de númuros primos: ");
	scanf("%d",&n);
	for (i = 2; i <= n; i++) {
		if (i % n == 0)
			printf("%d é primo!\n",i);
	}
	
	return 0;
}
