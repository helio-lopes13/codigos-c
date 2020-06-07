#include "stdio.h"

void matPor2(int[], int, int);
void matPrint(int[], int, int);

int main() {
	int mat[2][3] = {{1,2,3},{4,5,6}};
	matPor2(mat, 2, 3);
	matPrint(mat, 2, 3);
	return 0;
}

void matPor2(int mat[], int l, int c) {
	int i,j;
	for (i = 0; i < l; ++i) {
		for (j = 0; j < c; ++j)
			mat[i * c + j] *= 2;
	}
}

void matPrint(int mat[], int l, int c) {
	int i,j;
	for (i = 0; i < l; ++i) {
		for (j = 0; j < c; ++j)
			printf("%d\t",mat[i * c + j]);
		printf("\n");
	}
}
