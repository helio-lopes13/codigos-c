#include "stdio.h"

int main() {
	
	int km;
	scanf("%d",&km);
	int tempo = (60 * km) / 30;
	printf("%d minutos\n",tempo);
	
	return 0;
}
