#include <stdio.h>

void printStr(char *strPtr);

int main(){
	char str[] = "fake news é anti-democrático!";
	printStr(str);
	return 0;
}

/*
	modificamos o endereço do ponteiro
	NÃO modificamos o conteúdo que ele aponta
*/
void printStr(char *strPtr){
	while (*strPtr != '\0'){
		printf("%c", *strPtr);
		strPtr++;
	}
	printf("\n");
}
