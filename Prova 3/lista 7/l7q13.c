#include <stdio.h>
#include <math.h>

void equacao2(int a, int b, int c);

int main(){
	int a, b, c;
	
	do{
		printf("\nInforme o valor do coeficiente \'A\':\n");
		scanf("%d",&a);
	}while(a == 0);
	printf("\nInforme o valor do coeficiente \'B\':\n");
	scanf("%d",&b);
	printf("\nInforme o valor do coeficiente \'C\':\n");
	scanf("%d",&c);
	
	equacao2(a, b, c);	

	printf("\n\n");
	return 0;
}


void equacao2(int a, int b, int c){
	float delta, x1, x2;
	
	delta = (b*b) - 4*a*c;
	
	if(delta > 0){
		x1 = -b - sqrt(delta) / 2*a ;
		x2 = -b + sqrt(delta) / 2*a;
		printf("\nDelta = 	%8.2f",delta);
		printf("\nX\' = 	%8.2f",x1);
		printf("\nX\'' = 	%8.2f",x2);
	}else if(delta == 0){
		x1 = -b + sqrt(delta) / 2*a;
		printf("\nDelta igual a 0\n");
		printf("\nX\' ou x\'' =	%8.2f\n",x1);
	}else {
		printf("\nDelta menor que 0, nÃ£o raizes reais!\n");
	}
	
}

