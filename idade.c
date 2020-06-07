#include "stdio.h"

int main() {
	
	int dias;
	scanf("%d",&dias);
	
	int anos = dias / 365;
	int meses = (dias % 365) / 30;
	int diasFinais = (dias % 365) % 30;
	
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,diasFinais);
	
	return 0;
}
