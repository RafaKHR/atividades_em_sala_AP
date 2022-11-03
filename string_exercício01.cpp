#include<stdio.h>
#include<string.h>
int main(){
	char nome[100];
	printf("Digite seu nome completo: ");
	fgets(nome, 100, stdin);
	printf("O numero de caracteres no nome eh: %d", (strlen(nome) - 1));
}
