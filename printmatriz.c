#include "stdio.h"

int main() {
	int mat[5];
	int i;
	for(i = 0; i < 5; ++i) {
		mat[i] = i;
	}
	for(i = 0; i < 5; ++i) {
		printf("%d\n",mat[i]);
	}
	return 0;
}
