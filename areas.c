#include "stdio.h"

int main() {
	
	float a, b, c;
	scanf("%f %f %f",&a,&b,&c);
	
	float areaTriangulo = a * c / 2;
	float areaCirculo = 3.14159 * c * c;
	float areaTrapezio = (a + b) * c / 2;
	float areaQuadrado = b * b;
	float areaRetangulo = a * b;
	
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",areaTriangulo,areaCirculo,areaTrapezio,areaQuadrado,areaRetangulo);
	
	return 0;
}
