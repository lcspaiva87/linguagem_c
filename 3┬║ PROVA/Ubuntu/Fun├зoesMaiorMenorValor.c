#include <stdio.h>
int maiorV(int a, int b, int c, int d);
int menorV(int a, int b, int c, int d);

int main(){

	int a,b,c,d,maior,menor;
	
	printf("\nentre com o 1º valor: ");
	scanf("%d",&a);
	printf("\nentre com o 1º valor: ");
	scanf("%d",&b);
	printf("\nentre com o 1º valor: ");
	scanf("%d",&c);
	printf("\nentre com o 1º valor: ");
	scanf("%d",&d);
	
	maior = maiorV(a,b,c,d);
	menor = menorV(a,b,c,d);
	
	printf("\nMaior valor: %d\n",maior);
	printf("\nMenor valor: %d\n\n",menor);
	
	return 0;
	
}
int maiorV(int a, int b, int c, int d){
	int aux;
	
	aux=a;
	if(b>aux)
		aux=b;
		
	
	if(c>aux)
		aux=c;
		
		
	if(d>aux)
		aux=d;
		
	return aux;	
}

int menorV(int a, int b, int c, int d){

	int aux;
	
	aux=a;
	if(b<aux)
		aux=b;
		
	
	if(c<aux)
		aux=c;
		
		
	if(d<aux)
		aux=d;
		
	return aux;	
}

