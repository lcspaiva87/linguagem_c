#include <stdio.h>
//a) Em ordem crescente.
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
	

		if(c>d){
		aux=c;
		c=d;
		d=aux;
		
	}
	
	
	
	


	
	printf("\nOrdem decrescente %d, %d, %d, %d",a,b,c,d);
	printf("\n\n");
	return 0;
}



