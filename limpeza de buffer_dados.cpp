#include<stdio.h>
int main(){
	int a;
	char b;
	double c;
	
	printf("Inteiro\n");
	scanf("%d", &a);
		fflush(stdin); // LIMPEZA DE BUFFER
	
	printf("Char\n");
	scanf("%c", &b);
	
	printf("Float\n");
	scanf("%lf", &c);
}
