#include "stdio.h"

void soma(int x) {
	x++;
}

int main() {
	int x = 30;
	soma(x);
	printf("x = %d\n",x);
	return 0;
}
