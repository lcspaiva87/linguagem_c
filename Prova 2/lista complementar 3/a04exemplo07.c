/* a05exemplo07 - Este programa calcula a média aritmética de n números */

#include <stdio.h>

int main() {

	/* Declaração de variáveis */
	int n; /* quantidade de números a serem lidos */
	int i; /* variável de controle do laço */
	float media; /* acumula a soma dos n números para em seguida ser feita a média */
	float num; /* armazena os números de entrada */

	printf("\n***** Este programa faz a média aritmética de n números reais *****\n");
	printf("\nEntre com a quantidade n de números: ");
	scanf("%d",&n);
	
	/* Laço de cálculo dos n números */
	media = 0.0; /* zera a variável que acumula o resultado da soma */
	for(i=0; i<n; i++) { /* i varia de 0 a n-1, totalizando n iterações */
		printf("Entre com o número %d: ", i+1); /* o argumento é i+1 porque o i começa em 0 */
		scanf("%f",&num);
		media = media + num; /* a variável media dentro do laço acumula a soma dos números, para quando o laço acabar ser feita a média aritmética propriamente dita */
	}

	/* Cálculo da média aritmética */
	media = media/n; /* quando a variável media sai do laço ela tem o resultado do acumulado da soma dos n números. Mas a média aritmética de n números é o resultado da soma dos n números dividido por n */

	/* Impressão do resultado */
	printf("\nResultado da média aritmética dos %d números: %.1f", n,media);
	printf("\n\n");

	return 0;

}
