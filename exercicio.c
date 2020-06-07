#include "stdio.h"

int main() {
	
	int i, n;
	printf("Brigitte o número da tabuada que você quer saber: ");
	scanf("%d",&n);
	for (i = 0; i <= n; i++) {
		printf("%d * %d = %d\n",i,n,(i * n));
	}
	
	return 0;
}
