#include <stdio.h>
#define TAM 100

float media_ponderada(float n1, float n2);

int main() {
	int i, N;
	float nota1[TAM], nota2[TAM], mediadoaluno[TAM];
	float mediageral;
	char ch1;

	printf("\n***** Faz a média de N alunos *****");
	printf("\n\nEntre com a quantidade de alunos na turma - no máximo 100: ");
	scanf("%d",&N);

	mediageral = 0.0;
	for(i=0; i < N; i++) {
		printf("\n\nEntre com a nota 1 do aluno %d: ", i+1);
		scanf("%f", &nota1[i]);
		printf("Entre com a nota 2 do aluno %d: ", i+1);
		scanf("%f", &nota2[i]);

		mediadoaluno[i] = media_ponderada(nota1[i], nota2[i]);

		if( mediadoaluno[i] >= 6.0 )
			printf("Aprovado  - Média = %.1f", mediadoaluno[i]);
		else
			printf("Reprovado - Média = %.1f", mediadoaluno[i]);

		mediageral = mediageral + mediadoaluno[i];
	}

	mediageral = mediageral/N; 

	printf("\n\nA média geral da turma é: %.1f", mediageral);
	printf("\n");

	while (1) {
		printf("\nDeseja consultar as notas e a média de algum aluno?");
		printf("\nSe sim, tecle <ENTER>, senão tecle \'q\': ");
		getchar();
		scanf("%c",&ch1);
		if( ch1 == 'q' )
			break;
		printf("\nEntre com o numero do aluno: ");
		scanf("%d", &i);
		printf("Os resultados do aluno %d são: \nNota1 = %.1f - Nota2 = %.1f - Média = %.1f\n", i, nota1[i-1], nota2[i-1], mediadoaluno[i-1]);
	}

	printf("\n\n");
	return 0;
}

float media_ponderada(float n1, float n2) {
	float m;

	m = (2.0*n1 + 3.0*n2)/5.0;

	return m;
	
}


