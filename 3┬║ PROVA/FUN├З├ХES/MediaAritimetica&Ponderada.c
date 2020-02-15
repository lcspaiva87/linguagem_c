/* Calcula a média individual de alunos e a média da turma */

#include <stdio.h>

float media_aritmetica(float num1, float num2); /* protótipo da função média aritmética */
float media_ponderada(float num1, float num2); /* protótipo da função média ponderada */

int main() {

	int i, N;
	float nota1, nota2, media, mediageral;
	char ch1, ch2;

	/* Limpa a tela */
	system("clear");

	ch2 = '\0';
	ch1 = '\0';
	while(ch2!='q') { /* laço de repetição */
		/* Entrada de dados */
		printf("\n***** Calcula a média individual de alunos e a média da turma *****");
		while(1) { /* Laço de oferta das opções. É um laço infinito já que a condição de teste é uma constante diferente de zero, no caso 1 */
			printf("\n\nEntre com uma das opções abaixo:");
			printf("\n(A) - Média aritmética");
			printf("\n(B) - Média ponderada");
			printf("\nOpção: ");
			scanf("%c",&ch1);
			if( (ch1=='A')||(ch1=='B') )
				break; /* serve para sair do laço */
			else
			{
				printf("\nOpção não disponível");
				getchar(); /* limpa buffer do teclado */
			}
		}
		printf("\nEntre com o número de alunos: ");
		scanf("%d", &N);

		/* Calcula as médias individuais*/
		mediageral = 0.0;
		for(i=1; i <= N; i++)
		{
			printf("\n\nEntre com a nota1 do aluno %d: ", i);
			scanf("%f",&nota1);
			printf("Entre com a nota2 do aluno %d: ", i);
			scanf("%f",&nota2);
					
			switch (ch1) {
				case 'A': media = media_aritmetica(nota1, nota2);
					break;
				case 'B': media = media_ponderada(nota1, nota2);
					break;
			}

			if(media >= 5.0)
				printf("Aluno %d: Aprovado \tMédia = %.1f", i, media);
			else
				printf("Aluno %d: Reprovado\tMédia = %.1f", i, media);

			mediageral = mediageral + media;	 
		}

		/* Calcula a média geral e imprime*/
		mediageral = mediageral/N;
		printf("\n\nMédia geral da turma = %.1f", mediageral);

		printf("\n\nSe desejar continuar a calcular médias para outra turma tecle ENTER, senão tecle q para sair: ");
		getchar(); /* limpa buffer do teclado */
		scanf("%c", &ch2);
	}

	printf("\n\n");

	return 0;

}


/* Função que calcula a média aritmética */
float media_aritmetica(float num1, float num2)
{
	float m;

	m = (num1 + num2)/2.0;

	return m;
}


/* Função que calcula a média ponderada */
float media_ponderada(float num1, float num2)
{
	float m;

	m = (2*num1 + 3*num2)/5.0;

	return m;
}
