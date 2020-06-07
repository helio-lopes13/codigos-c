#include "stdio.h"

void quadAsterisco(int);

int main() {
	int n;
	printf("Digite o númeroi de asteriscos: ");
	scanf("%d",&n);
	quadAsterisco(n);
	return 0;
}

void quadAsterisco(int n) {
	int i,j;
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= n; j++) {
			if(j == n) {
				printf("*");
				break;
			}
			printf("* ");
		}
		printf("\n");
	}
}
