/*Faça um programa em C que:
a) Leia dois números inteiros a e b (b>a). Estes números determinam um intervalo fechado.
b) Leia um número x e informe se este número está dentro ou fora do intervalo a e b.*/
#include <stdio.h>
int main(){
	int a,b,x;
	printf("\nEntre com o numero a ");
	scanf("%d",&a);
	printf("\nEntre com o  numero b ");
	scanf("%d",&b);
	printf("\nEntre com o numero x ");
	scanf("%d",&x);
	(x<=a && x<=b) ? printf("\nEsta dentro do intervalo") : printf("\nNão esta dentro do intervalo");
printf("\n\n");
return 0;
}
