#include "stdio.h"

int main() {
	int a;
	int *p;
	a = 5;
	p = &a;
	
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%p\n",&a);
	printf("%p\n",p);
	printf("%p\n",&p);
	
}
