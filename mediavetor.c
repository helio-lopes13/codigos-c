#include "stdio.h"

float media(float notas[], int alunos) {
	float media = 0;
	int i;
	for (i = 0; i < alunos; i++)
		media += notas[i];
	media /= alunos;
	return media;
}

int main() {
	float notas[5] = {10.0, 6.0, 4.5, 9.5, 9.9};
	printf("Média da turma = %.2f\n",media(notas,5));
	return 0;
}
