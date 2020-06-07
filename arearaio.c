#include "stdio.h"

int main() {
	
	double pi, raio;
	pi = 3.14159;
	scanf("%lf",&raio);
	double area = pi * (raio * raio);
	printf("A=%.4f\n",area);
	
	return 0;
}
