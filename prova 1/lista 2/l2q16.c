//Faça um programa em C que leia do teclado dois números inteiros e apresente o resultado das operações relacionais( >, <, >=, <=, == e !=) com esses números.
#include <stdio.h>
	int main(){
	int a,b;
	printf("\nEntre com 1 numero: ");
	scanf("%d",&a);
	printf("\nEntre com 2 numero: ");
	scanf("%d",&b);
	(a>b) ? printf("\nO %d e maior que %d",a,b) : printf("\n%d e menor %d",a,b);
	(a>=b)? printf("\n%d e maior ou igual a %d",a,b):printf("\n %d não e maior ou iqual %d",a,b);
	(a==b)? printf("\n%d e iqual a %d",a,b) : printf("\n%d não e iqual a %d",a,b);
	(a!=b)? printf("\n%d e diferente de %d",a,b): printf("\n%d não e diferente de %d",a,b);
	
printf("\n\n");
return 0;
}

