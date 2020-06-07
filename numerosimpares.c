#include "stdio.h"

int main() {
	
	int i, numero;
	scanf("%d",&numero);
	
	for (i = 0; i <= numero; i++) {
		if (i % 2 != 0)
		printf("%d\n",i);
	}
	
	return 0;
}
