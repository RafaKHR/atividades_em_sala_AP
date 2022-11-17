#include<stdio.h>
int main(){
	int idade;
	
	do{
		printf("Digite a idade: ");
		scanf("%d", &idade);
	}while (idade < 18);
	
	printf("Maior idade!");
	
	
}
