//Escreva um programa em C que peça ao usuário dois inteiros e apresente o resultado das operações de soma, subtração, multiplicação, divisão e módulo com esses números.
#include <stdio.h>
int main(){
	int a,b;
	printf("\nENtre com um número inteiro: ");
	scanf("%d",&a);
	printf("\nEntre com segundo número inteiro: ");
	scanf("%d",&b);
	printf("\n=========SOMA===============");
	printf("\nSoma de %d e %d = %d",a,b,a+b);
	printf("\n=========SUbtração==========");
	printf("\nSubtração de %d e %d = %d",a,b,a-b);
	printf("\n=========Multiplicação=======");
	printf("\nMultiplicação de %d e %d = %d",a,b,a*b);
	printf("\n=========divisão=============");
	printf("\nDivisão de %d e %d = %d ",a,b,a/b);
	printf("\n=========Modulo===============");
	printf("\nModulo de %d e %d = %d",a,b,a%b);	
printf("\n\n");
return 0;
}
