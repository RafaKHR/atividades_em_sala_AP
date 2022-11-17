#include<stdio.h>
int main(){
	int i, numero, soma;
	char opcao;
	
	scanf("%c", &opcao);
	
	while(opcao == 's'){
		scanf("%d", &numero);
		soma = soma + numero;
		printf("Deseja digitar mais um numero? ");
		scanf("%c", &opcao);
		fflush(stdin);
	}
	
	printf("Soma %d", soma);
	
}
