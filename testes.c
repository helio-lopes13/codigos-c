#include "stdio.h"

int main() {
	char palavra[] = "Laranja e muito normal!!!";
	int i, array[20] = { 1, 3 };
	for (i = 0; palavra[i] != '!'; i++) {
		printf("%c", palavra[i]);
	}
	printf("\n");
	return 0;
}
