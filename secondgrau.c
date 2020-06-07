#include "stdio.h"
#include "math.h"

double delta(double a, double b, double c) {
	return (b * b) - (4 * a * c);
}

void segGrauResolver(double a, double b, double c, double *x1, double *x2) {
	*x1 = (-b + sqrt(delta(a,b,c))) / (2 * a);
	*x2 = (-b - sqrt(delta(a,b,c))) / (2 * a);
}

int main() {
	double a,b,c,x1,x2;
	printf("Digite os valores de A, B e C:");
	scanf("%lf %lf %lf",&a,&b,&c);
	segGrauResolver(a,b,c,&x1,&x2);
	printf("x1 = %1.4f\tx2 = %1.4f\n",x1,x2);
	return 0;
}
