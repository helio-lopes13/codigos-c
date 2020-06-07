#include "stdio.h"

int main() {
	
	int l, d, k, p;
	scanf("%d %d",&l,&d);
	scanf("%d %d",&k,&p);
	int custo = l * k + (l / d) * p;
	printf("%d\n",custo);
	
	return 0;
}
