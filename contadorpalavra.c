#include "stdio.h"
#include "stdlib.h"

FILE *arch = fopen("arquivs", "r");

int beforeRepeticoes(char *palavra) {
	int lastPosition = ftell(file);
	int i, j;
	int qntReplicas = 0;
	fseek(file, 0, SEEK_SET);
	for (i = 0; i < lastPosition; i++) {
		if (fgetc(file) == *palavra) {
			for (j = 1, i++; fgetc(file) == *(palavra + j); i++) {       0   caracol cara
				j++;
			}
			if (*(palavra + j) == '\0') {
				qntReplicas++;
			}
		}
	}
	return qntReplicas;
}

void getNextWord(int tamPalavras, char *palavra) {
  	char caractere = fgetc(file);
	char *palavra = calloc(tamPalavras + 1, 1);
	int i = 0;
	while (!isAlphaNum(caractere) && caractere != EOF) {
		caractere = fgetc(file);
	}
	for (i = 0; isAlphaNum(caractere); i++) {
		*(palavra + i) = caractere;
		caractere = fgetc(file);
	}
	*(palavra + i) = '\0';
	return palavra;
}

void pegarNextPalavraWithoutRepetição (char *palavra) {
	do {
		getNextWord(tamPalavras, palavra);
	} while(beforeRepeticoes(palavra) != 1 && palavra != '\0');
}

int contarPalavras () {
	int i;
	char *palavra = malloc(maiorPalavra);
	char caractere = '\0';
	for (i = 0; *palavra != '\0'; i++) {
		pegarNextPalavraWithoutRepetição(arch, palavra);
	}
	return i;
}

int main() {
	
}
