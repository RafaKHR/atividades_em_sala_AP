#include<stdio.h>
int main(){
	int i, numero, soma = 0, opcao;
	
	do{ // o que será repitido
		scanf("%d", &numero);
		soma = soma + numero;
		printf("Deseja digitar mais um numero? ");
		scanf("%d", &opcao);
		fflush(stdin);
	} while (opcao == 1); // por que vai ser repetido, condição
	
	printf("Soma %d", soma);
}
