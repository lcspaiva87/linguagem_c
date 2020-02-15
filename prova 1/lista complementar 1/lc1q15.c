//Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.
#include <stdio.h>
int main (){
	int x;
	printf("\nEntre com um numero inteiro: ");
	scanf("%d",&x);
 	printf("\nAntecessor de %d e %d",x,x-1);
	printf("\nO sucessor de %d e %d",x,x+1);
	printf("\n\n");
	return 0;
}
