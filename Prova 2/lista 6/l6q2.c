#include <stdio.h>
	int main(){
	int a,b,c,aux;
	printf("\nEntre com valor de a: ");
	scanf("%d",&a);
	printf("\nEntre com valor de b: ");
	scanf("%d",&b);
	printf("\nEntre com valor de c: ");
	scanf("%d",&c);
	aux=a;
	if(b>aux){
		aux=b;
	}
	if(c>aux){
		aux=c;
	}
	printf("\nMaior valor e: %d ",aux);
	printf("\n\n");
	return 0;
}
