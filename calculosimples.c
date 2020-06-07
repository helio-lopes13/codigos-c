#include "stdio.h"

int main() {
	
	int codigo1, codigo2, numeropecas1, numeropecas2;
	float preco1, preco2;
	scanf("%d %d %f",&codigo1, &numeropecas1, &preco1);
	scanf("%d %d %f",&codigo2, &numeropecas2, &preco2);
	float valor = (numeropecas1 * preco1) + (numeropecas2 * preco2);
	printf("VALOR A PAGAR: R$ %.2f\n",valor);
	
	return 0;
}
