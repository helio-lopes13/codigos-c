#include <stdio.h>

void print(const int * const vetor, const int tamanho);
void ordBolha(int * const vetor, const int tamanho);

int main(){
	int x[10] = {1,7,0,5,9,3,4,8,2,6};
	ordBolha(x, 10);
	print(x, 10);
	return 0;
}

void print(const int * const vetor, const int tamanho){
	int i;
	for(i = 0; i < tamanho; i++){
		printf("%d\t", vetor[i]);
	}
	printf("\n");
}

void ordBolha(int * const vetor, const int tamanho){
	void troca(int *el1, int *el2);
	int i,j;
	for(i = 0; i < tamanho-1; i++){
		for(j = 0; j < tamanho-1; j++){
			if (vetor[j] > vetor[j+1]){
				troca(&vetor[j], &vetor[j+1]);
			}
		}
	}
}

void troca(int *el1, int *el2){
	int tmp = *el1;
	*el1 = *el2;
	*el2 = tmp;
}
