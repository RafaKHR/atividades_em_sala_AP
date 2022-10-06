#include<stdio.h>
int main(){
	int a;
	char b, endereco[100];
	double c;
	
	printf("Inteiro\n");
	scanf("%d", &a);
		fflush(stdin); // LIMPEZA DE BUFFER
	
	printf("Char\n");
	scanf("%c", &b);
	
	printf("Float\n");
	scanf("%lf", &c);
	
	printf("Endereço\n");
	fgets(endereco, 100, stdin); // SUBSTITUI O SCANF NOS CASOS DE STRING, SE EU PRECISAR DE ESPAÇO
}
