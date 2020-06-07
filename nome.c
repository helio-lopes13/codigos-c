#include "stdio.h"

int main() {
	char nome[120];
	printf("Digite o seu nome: ");
	fgets(nome, 120, stdin);
	printf("Olô %s!\n",nome);
	return 0;
}
