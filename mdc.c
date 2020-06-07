#include "stdio.h"

int mdc(int, int);

int main() {
	int a,b;
	printf("Número a: ");
	scanf("%d",&a);
	printf("Número b:");
	scanf("%d",&b);
	printf("MDC = %d\n",mdc(a,b));
	return 0;
}

int mdc(int a, int b) {
	if(b == 0) {
		return a;
	}
	return mdc(b,b%a);
}
