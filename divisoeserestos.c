#include "stdio.h"

int verifAlg(int);
int divisao(int, int);
int resto(int, int);
int separador(int);
int separadorS(int);

int main() {
	int n;
	printf("Digite um inteiro a: ");
	scanf("%d",&n);
	separador(n);
	return 0;
}

int divisao(int a, int b) {
	return a / b;
}

int resto(int a, int b) {
	return a % b;
}

int separador(int n) {
	if(n == resto(n,10)) {
		printf("%d",n);
		return n;
	}
	separador(divisao(n,10));
	printf(" %d",resto(n,10));
}

int separadorS(int n) {
	int newN = resto(n,10);
	if(n < 10) {
		printf("%d",n);
		return 0;
	}
	separadorS(divisao(n,10));
	printf(" %d",newN);
}

int verifAlg(int n) {

	int cont = 1;

	while (1) {

		n /= 10;

		cont++;

		if(n < 10)

			return cont;

	}
}