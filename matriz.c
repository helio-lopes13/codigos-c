#include "stdio.h"

int main() {
	int tam;
	printf("Digite o tamanho da turma: ");
	scanf("%d",&tam);
	float notas[tam];
	int i;
	for(i = 0; i < tam; ++i) {
		scanf("%f",&notas[i]);
	}
	return 0;
}
