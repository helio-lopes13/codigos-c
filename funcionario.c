#include "stdio.h"
#include "string.h"

struct func{
	int id;
	char nome[40];
	double salario;
}func[5];

void scanFunc(struct func func[]);
void printFunc(struct func func[],int);
void printAllFunc(struct func func[]);

int main() {
	int i,n;
	scanFunc(func);
	printf("1-Ver um funcionário.\n2-Ver todos os funcionários.\n");
	scanf("%d",&i);
	switch (i) {
		case 1:
			printf("Digite o número do funcionário: ");
			scanf("%d",&n);
			printFunc(func,n-1);
			break;
		case 2:
			printAllFunc(func);
			break;
	}
	return 0;
}

void scanFunc(struct func func[]) {
	int i;
	for(i = 0; i < 5; i++) {
		scanf("%d",&func[i].id);
		gets(func[i].nome);
		scanf("%lf",&func[i].salario);
	}
}

void printAllFunc(struct func func[]) {
	int i;
	for(i = 0; i < 5; i++) {
		printf("ID DO FUNCIONÁRIO %d: %d\nNOME DO FUNCIONÁRIO %d: %s\nSALÁRIO DO FUNCIONÁRIO %d:%1.2lf\n",i+1,func[i].id,i+1,func[i].nome,i+1,func[i].salario);
	}
}

void printFunc(struct func func[],int i) {
	printf("ID DO FUNCIONÁRIO %d: %d\nNOME DO FUNCIONÁRIO %d: %s\nSALÁRIO DO FUNCIONÁRIO %d:%1.2lf\n",i+1,func[i].id,i+1,func[i].nome,i+1,func[i].salario);
}
