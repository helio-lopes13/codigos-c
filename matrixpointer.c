#include "stdio.h"

int main2();

int main() {
	int m[2] = {35, 48};
	int *mPtr = &m[0];
	mPtr++;
	printf("%d\n",*mPtr);
	main2();
	return 0;
}

int main2() {
	int m[5] = {2,4,6,82,100};
	int *mPtr = m;
	while (*mPtr != 0) {
		printf("%d\t",*mPtr);
		mPtr++;
	}
	printf("\n");
	return 0;
}
