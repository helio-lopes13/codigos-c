#include "stdio.h"

int main() {
	
	int numFunc, numHoras;
	float valorHoras;
	scanf("%d\n%d\n%f",&numFunc,&numHoras,&valorHoras);
	float salario = numHoras * valorHoras;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n",numFunc,salario);
	
	return 0;
}
