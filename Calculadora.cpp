#include<stdio.h>
#include<math.h>
int main(){
	char operador;
	float n1, n2, resultado;
	
	
	printf("Qual operecao vc quer realizar?: ");
	scanf("%c", &operador);
	printf("Digite os numeros: ");
	scanf("%f%f", &n1, &n2);
	
	switch (operador){
		case '+':
			resultado = n1 + n2;
			printf("Soma: %f", resultado);
		break;
		case '-' :
			resultado = n1 - n2;
			printf("Subtracao: %f", resultado);
		break;
		case '*' :
			resultado = n1 * n2;
			printf("Multiplicacao: %f", resultado);
		break;
		case '/' :
			resultado = n1 / n2;
			printf("Divisao: %f", resultado);
		break;
		case '^' :
			resultado = pow (n1, n2);
			printf("Potencia %f", resultado);
		break;
		case 'r' :
			resultado = sqrt(n1);
			printf("Raiz: %f", resultado);
		break;
		default : printf("Invalido!");
	}
}

