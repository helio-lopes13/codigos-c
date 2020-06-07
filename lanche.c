#include "stdio.h"

int main() {
	
	int code, quant;
	float value;
	scanf("%d %d",&code,&quant);
	
	if (code == 1) {
		value = quant * 4.00;
	} else if (code == 2) {
		value = quant * 4.50;
	} else if (code == 3) {
		value = quant * 5.00;
	} else if (code == 4) {
		value = quant * 2.00;
	} else if (code == 5) {
		value = quant * 1.50;
	} else {
		printf("Deu erro, meu anjo...\n");
	}
	printf("Total: R$ %.2f\n", value);
	
	return 0;
}
