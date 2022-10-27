#include<stdio.h>
int main(){
	int n1, n2, i; 
	double resto, quociente;
	
	for(i=0;i<3;i++){
		printf("Digite o primeiro numero: ");
		scanf("%d", &n1);
		printf("Digite o segundo numero: ");
		scanf("%d", &n2);
		resto=n1%n2;
		printf("O resto da divisao eh: %lf", resto);
		quociente=n1/n2;
		printf("\nO quociente da divisao eh: %lf\n", quociente);
	}
}
