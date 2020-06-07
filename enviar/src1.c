#include <stdio.h>

int main(){
	char str[10] = "Olá!";
	
	char *strPtr = str;
	while (*strPtr != '\0'){
		printf("%c", *strPtr);
		strPtr++;
	}
	printf("\n");


	int i, *valPtr, val[3] = {5,9,18};
	//valPtr = val;
	valPtr = &val[0];
	for(i = 0; i < 3; i++){
		printf("%d\n", *valPtr);
		valPtr++;
	}

	return 0;
}
