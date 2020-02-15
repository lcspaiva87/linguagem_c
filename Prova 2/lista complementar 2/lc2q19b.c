#include <stdio.h>
int main(){
	int a,b,c,d,e,aux;
	printf("\nEntre com valor de a:");
	scanf("%d",&a);
	printf("\nEntre com valor de b:");
	scanf("%d",&b);
	printf("\nEntre com valor de c:");
	scanf("%d",&c);
	printf("\nEntre com valor de d:");
	scanf("%d",&d);
	
	aux=a;
	if(b<aux){
		aux=b;
	}
	
	if(c<aux){
		aux=c;
	}
	
	if(d<aux){
		aux=d;
	}

	
	
	
	
	
	printf("\nmenor valor %d",aux);
	printf("\n\n");
	
	return 0;
}
