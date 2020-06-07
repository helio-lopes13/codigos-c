#include <stdio.h>
#include <ctype.h>

void str2upper(char *strPtr);

int main(){
	char string[] = "hoje tem aula no ifce";
	str2upper(string);
	printf("%s\n", string);
	return 0;
}

/*
	modificamos o endereço do ponteiro
	modificamos o conteúdo que ele aponta
*/
void str2upper(char *strPtr){
	while (*strPtr != '\0'){
		*strPtr = toupper(*strPtr);
		strPtr++;
	}
}
