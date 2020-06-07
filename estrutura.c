#include "stdio.h"
#include "stdlib.h"

struct {
	char name[30];
	char street[40];
	char city[20];
	char state[3];
	int zip;
}addr_info;

int main() {
	addr_info.zip = 12345;
	printf("%d\n",addr_info.zip);
	return 0;
}
