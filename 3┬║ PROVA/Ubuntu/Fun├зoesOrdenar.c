#include <stdio.h>
void ordenar(int a, int b, int c, int d);

int main(){

	int a,b,c,d,ordem;
	
	printf("\nentre com o 1º valor: ");
	scanf("%d",&a);
	printf("\nentre com o 1º valor: ");
	scanf("%d",&b);
	printf("\nentre com o 1º valor: ");
	scanf("%d",&c);
	printf("\nentre com o 1º valor: ");
	scanf("%d",&d);
	
	ordenar(a,b,c,d);
	
	
	return 0;
	
}
void ordenar(int a, int b, int c, int d){
	int aux=0;

	if(a>b){
		aux=a;
		a=b;
		b=aux;
	}
	if(a>c){
		aux=a;
		a=c;
		c=aux;
	}
	if(a>d){
		aux=a;
		a=d;
		d=aux;
	}
	if(b>c){
		aux=b;
		b=c;
		c=aux;
	}
	if(b>d){
		aux=b;
		b=d;
		d=aux;
	}
	if(c>d){
		aux=c;
		c=d;
		d=aux;
	}
	printf("\n%d - %d - %d - %d\n\n",a,b,c,d);
}
	
