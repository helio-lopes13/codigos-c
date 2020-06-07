#include "stdio.h"

void soma1(int);

int main() {
	int x = 4;
	soma1(x);
	printf("x = %d\n",x);
	return 0;
}
void soma1(int x) {
	x = x + 1;
}
