#include "stdio.h"

int multiplo(int, int);

int main() {
	int a,b;
	printf("Digite um número: ");
	scanf("%d",&a);
	printf("Digite um outro número: ");
	scanf("%d",&b);
	if(multiplo(a,b))
		printf("%d é múltiplo de %d.\n",b,a);
	else
		printf("%d não é múltiplo de %d.\n",b,a);
	return 0;
}

int multiplo(int a, int b) {
	if(b % a == 0)
		return 1;
	else
		return 0;
}
