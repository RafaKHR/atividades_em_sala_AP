#include<stdio.h>
int main(){
	int i;
	double a, r, r2;
	
	for(i=0;i<3;i++){
		printf("Digite o numero do raio: ");
		scanf("%lf", &r);
		r2=r*r;
		a=3.14*r2;
		printf("A area eh: %lf\n", a);
	}
}
