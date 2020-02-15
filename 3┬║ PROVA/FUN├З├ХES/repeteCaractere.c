/* Imprime um caractere N vezes */

#include <stdio.h>
#include <stdlib.h> 

void repete_caractere(char c, int N); /* protótipo da função */

int main() {

	int N;
	char ch;

	/* Limpa a tela */
	system("clear");

	/* Entrada de dados */
	printf("\n***** Imprime um caractere N vezes *****\n");
	printf("\nEntre com o caractere: ");
	ch = getchar();
	/*scanf("%c", &ch);*/
	printf("Entre com o número de vezes: ");
	scanf("%d", &N);

	/* Chama a função que imprimirá o caractere N vezes */
	repete_caractere(ch, N);

	printf("\n\n");

	return 0;
}


/* Função que imprime um caractere N vezes */
void repete_caractere(char c, int N)
{
	/* c - caractere a ser impresso */
	/* N - número de vezes que o caractere deve ser impresso */

	int i;

	/* Imprime os resultados */
	printf("\n***** Resultado *****\n");
	printf("\nO caractere \'%c\' será impresso %d vezes: \n", c, N);
	for(i=0; i < N; i++)
		printf("\n%c", c);
}
