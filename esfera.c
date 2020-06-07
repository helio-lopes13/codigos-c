#include "stdio.h"

int main() {
	
	double pi, raio;
	pi = 3.14159;
	scanf("%lf",&raio);
	double volume = 4.0/3 * pi * (raio * raio * raio);
	printf("VOLUME = %.3f\n",volume);
	
	return 0;
}
