#include "stdio.h"

/* n1, n2 n3
n3 n2 n1
n1 n3 n2
n2 n1 n3
n2 n3 n1
n3 n1 n2
*/

int main() {
	
	int n1, n2, n3, temp1, temp2, temp3, aux;
	scanf("%d %d %d",&n1,&n2,&n3);
	
	temp1 = n1;
	temp2 = n2;
	temp3 = n3;
	
	if (n1 < n2 && n1 < n3) {
		aux = temp1;
		temp1 = temp2;
		temp2 = aux;
	} else if (n2 < n3 && n2 < n1) {
		aux = temp1;
		temp1 = temp2;
		temp2 = aux;
	} else if (n3 < n1 && n3 < n2) {
		aux = temp2;
		temp2 = temp3;
		temp3 = aux;
	}
	
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", temp1, temp2, temp3, n1, n2, n3);
	
	return 0;
}
