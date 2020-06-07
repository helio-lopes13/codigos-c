#include "stdio.h"

int main() {
	int i; char c; float f; double d;
	printf("%p %p %p %p\n",&i,&c,&f,&d);
	printf("%lu\n",sizeof(i));
	printf("%lu\n",sizeof(c));
	printf("%lu\n",sizeof(f));
	printf("%lu\n",sizeof(d));
}
