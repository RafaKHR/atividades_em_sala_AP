#include<stdio.h>
int main(){
	float n1, n2;
	printf("Digite o primeiro numero e o segundo: ");
	scanf("%f%f", &n1,&n2);
	if (n1 > n2)
	printf("Maior eh: %.0f", n1);
	else printf("Maior eh: %.0f", n2);
}
