#include <stdio.h>

void main() {
	float x, y, z;
	printf("\nDigite um número legal: ");
	scanf("%f",&x);
	printf("\nDigite outro número legal: ");
	scanf("%f",&y);
	z = x + y;
	printf("\nA soma de %.0f e %.0f é %.0f.\n\n",x,y,z);
}
