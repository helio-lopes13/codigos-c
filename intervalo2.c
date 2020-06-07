#include "stdio.h"

int main() {
	
	int i, n;
	int in = 0;
	int out = 0;
	scanf("%d",&n);
	
	int x[n];
	
	for (i = 0; i < n; i++) {
		scanf("%d",&x[i]);
	}
	
	for (i = 0; i < n; i++) {
		if (x[i] >= 10 && x[i] <= 20) {
			in++;
		} else { 
			out++;
		}
	}
	
	printf("%d in\n%d out\n",in,out);
	
	return 0;
}
