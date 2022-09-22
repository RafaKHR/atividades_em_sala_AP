#include<stdio.h>
#include<math.h>
int main(){
	float numeroDigitado, quadrado, raiz;
	printf("Digite o numero desejado: ");
	scanf("%f", &numeroDigitado);
	if (numeroDigitado > 0)
	{
	quadrado = pow(numeroDigitado, 2);
	raiz = sqrt(numeroDigitado);
	printf("Numero Digitado %.0f\nQuadrado %.0f\nRaiz %f\n", numeroDigitado, quadrado, raiz);
	}
	 
}
