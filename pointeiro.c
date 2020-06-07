#include "stdio.h"

int main() {
	int a,b,c;
	printf("%p %p %p\n",&a,&b,&c);
	printf("%lu\n",sizeof(a));
	return 0;
}
