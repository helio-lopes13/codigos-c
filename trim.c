#include "stdio.h"
#include "string.h"

int main() {
	char str[20] = "  teste de string  ";
	puts(str);
	puts(RTrim(str));
	puts(str);
	LTrim(str);
	puts(str);
	puts(Trim(str));
	puts(str);
	return 0;
}
