//Escreva um programa em C que solicite um determinado número real e mostre qual é a sua parte inteira e qual é a sua parte fracionária.
#include <stdio.h>

int main() {
int x;
	printf("\nDigite um nÂº inteiro:");
	scanf("%d",& x);

(x>=0)? printf("\nValor absoluto: %d",x): printf("\nValor absoluto: %d",-x);
	printf("\n\n");

return 0;
}
