#include "stdio.h"

int divisor(int);

int main() {
	int n;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	if (divisor(n))
		printf("É divisível por %d!\n",divisor(n));
	else
		printf("Pŕimo!\n");
	return 0;
}

int divisor(int x){
	int i;
	for(i = 2; i < x; i++) {
		if(!(x % i)) {
			return i;
		}
	}
	
	return 0;
}
