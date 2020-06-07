#include "stdio.h"

int main() {
	int n, fib0 = 0, fib1 = 1, i;
	scanf("%d",&n);
	if (n == 0) {
		printf("0\n");
	} else if (n == 1) {
		printf("1\n");
	} else {
		i = 1;
		while (i <= n) {
			int tmp = fib0 + fib1;
			fib0 = fib1;
			fib1 = tmp;
			i++;
		}
	}
	
	printf("%d\n",fib1);
	
	return 0;
}
