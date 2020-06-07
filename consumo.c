#include "stdio.h"

int main() {
	
	int x;
	float y;
	scanf("%d",&x);
	scanf("%f",&y);
	float consumo = x / y;
	printf("%.3f km/l\n",consumo);
	
	return 0;
}
