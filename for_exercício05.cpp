// Escreva um algoritmo que imprima a soma de 5 números
#include<stdio.h>
int main(){
	int i, numero, soma; 
	soma = 0;
	
	for(i=0;i<5;i++){
		scanf("%d", &numero);
		soma = soma + numero;
		}
	printf("Soma: %d", soma);		
}
