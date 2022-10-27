// Solicite do usuário um valor e imprima a tabuada deste número
#include<stdio.h>
int main(){
	int numeroDesejado, i;
	printf("Digite o numero desejado: ");
	scanf("%d", &numeroDesejado);
	for(i=1;i<11;i++){
		printf("%d X %d = %d\n", numeroDesejado, i, numeroDesejado * i);
	}
}

// i++ == i = i + 1
// i-- == i = i - 1
