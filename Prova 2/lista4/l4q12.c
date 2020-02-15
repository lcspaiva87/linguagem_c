#include <stdio.h>
int main(){
	int a,b,aux;
	printf("\nDigite um numero:\n");
	scanf("%d",&a);
	printf("\nDigite outro numero:\n");
	scanf("%d",&b);
	if (a>b){
  	aux=a;
  	a=b;
  	b=aux;
	} 
  	 printf("\nOs numeros em ordem crescente:\n%d,%d\n",a,b);
return 0;
}
