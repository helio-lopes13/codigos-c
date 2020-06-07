#include "stdio.h"

int main() {
	
	int i;
	for (i = 3; i <= 100; i++) {
		if (i % 3 == 0)
			printf("%d é divisível por 3.\n",i);
	}
	
	return 0;
}
