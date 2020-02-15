/* a05exemplo06 - Este programa calcula a soma de n números inteiros */

#include <stdio.h>

int main() {

	int n; /* quantidade de números a serem somados */
	int soma; /* acumula a soma dos n números */
	int num; /* armazena os números de entrada */
	int i; /* variável de controle do laço */

	printf("\n***** Este programa soma n números inteiros *****\n");
	printf("\nEntre com a quantidade n de números: ");
	scanf("%d",&n);
	
	/* Laço de cálculo dos n números */
	soma = 0; /* zera a variável que acumula o resultado da soma */
	for(i=0; i<n; i++) { /* i varia de 0 a n-1, totalizando n iterações */
		printf("Entre com o número %d: ", i+1); /* o argumento é i+1 porque o i começa em 0 */
		scanf("%d",&num);
		soma = soma + num; /* a variável soma acumula a soma dos números */
	}

	/* Impressão do resultado */
	printf("\nResultado da soma dos %d números: %d", n,soma);

	printf("\n\n");

	return 0;

}
