#include "stdio.h"

int fat(int);
int fatRec(int);
int fib(int);
int doisElevadoAN(int);
int mdc(int,int);

int main(){
	int x, a, b;
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	printf("Digite dois valores para a e b: ");
	scanf("%d %d",&a,&b);
	printf("fat(%d) = %d\n",x,fatRec(x));
	printf("fib(%d) = %d\n",x,fib(x));
	printf("doisElevadoAN(%d) = %d\n",x,doisElevadoAN(x));
	printf("mdc(%d,%d) = %d\n%d\n",a,b,mdc(a,b),b%a);
	return 0;
}

int fat(int n){
	int i, f = 1;
	for(i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}

int fatRec(int n){
	if (n == 0)
		return 1;
	else
		return n * fat(n-1);
}

int fib(int n) {
	if(n == 1 || n == 2)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}

int doisElevadoAN(int n) {
	if (n == 1)
		return 2;
	else
		return 2 * doisElevadoAN(n-1);
}

int mdc(int a, int b) {
	if (b == 0)
		return a;
	else
		return mdc(b,b%a);
}

int hanoi(int n) {

}
