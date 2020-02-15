/* 
Faça um programa em C que solicite a quantidade n de alunos de uma turma. Em seguida:
a) Leia duas notas para cada um dos n alunos. As nota1 e a nota2 devem ser armazenadas respectivamente nos vetores n1 e n2;
b) Faça a média aritmética de cada aluno, armazenando os resultados no vetor m;
c) Imprima para cada aluno: a nota1, a nota2, a média aritmética das notas, sua situação (aprovado ou reprovado - considere aprovado aquele com média aritmética maior ou igual a 5,0);
d) Imprima a maior média. Utilize o algoritmo do maior valor;
e) Imprima a menor média. Utilize o algoritmo do menor valor;
f) Imprima os dados de todos os alunos aprovados. Considere como dados o número do aluno, suas notas e sua média;
g) Imprima os dados de todos os alunos reprovados. Considere como dados o número do aluno, suas notas e sua média;
h) Imprima os dados de todos os alunos com média igual a maior média. Considere como dados o número do aluno, suas notas e sua média;
i) Imprima a média aritmética da turma.
*/

#include <stdio.h>
#define TAM 100

int main() {
	int i, n;
	float n1[TAM], n2[TAM], m[TAM], maiorMedia, menorMedia, mediaDaTurma;

	//Entrada da quant. de alunos
	printf("\n=============================================");
	printf("\nEntre com a quantidade de alunos da turma: ");
	scanf("%d",&n);

	//Laço de leitura das notas dos alunos e cálculo da média
	printf("\n=============================================");
	for(i=0;i<n;i++) {
		printf("\nEntre com a nota 1 do aluno %d: ",i+1);
		scanf("%f",&n1[i]);
		printf("Entre com a nota 2 do aluno %d: ",i+1);
		scanf("%f",&n2[i]);
		//Calcula a média aritmética de cada aluno
		m[i] = (n1[i] + n2[i])/2;
	}
	
	//Laço de impressão dos dados dos alunos e sua situação
	printf("\n=============================================");
	for(i=0;i<n;i++) {
		printf("\n*** Dados do aluno %d:",i+1);
		printf("\nNota 1: %.1f",n1[i]);
		printf("\nNota 2: %.1f",n2[i]);
		printf("\nMédia : %.1f",m[i]);
		//Verifica situação do aluno
		if(m[i]>=5.0)
			printf("\nSituação: aprovado");
		else
			printf("\nSituação: reprovado");
	}

	//Laço de determinação da maior média
	printf("\n\n=============================================");
	maiorMedia = m[0];
	for(i=1;i<n;i++)
		if(m[i]>maiorMedia)
			maiorMedia = m[i];
	printf("\n*** Maior média: %.1f",maiorMedia);

	//Laço de determinação da menor média
	printf("\n\n=============================================");
	menorMedia = m[0];
	for(i=1;i<n;i++)
		if(m[i]<menorMedia)
			menorMedia = m[i];
	printf("\n*** Menor média: %.1f",menorMedia);

	//Laço de impressão dos dados dos alunos aprovados
	printf("\n\n=============================================");
	printf("\n*** Dados dos alunos aprovados: ");
	for(i=0;i<n;i++) {
		if(m[i]>=5.0) {
			printf("\n\n*** Aluno %d:",i+1);
			printf("\nNota 1: %.1f",n1[i]);
			printf("\nNota 2: %.1f",n2[i]);
			printf("\nMédia : %.1f",m[i]);
		}
	}

	//Laço de impressão dos dados dos alunos reprovados
	printf("\n\n=============================================");
	printf("\n*** Dados dos alunos reprovados: ");
	for(i=0;i<n;i++) {
		if(m[i]<5.0) {
			printf("\n\n*** Aluno %d:",i+1);
			printf("\nNota 1: %.1f",n1[i]);
			printf("\nNota 2: %.1f",n2[i]);
			printf("\nMédia : %.1f",m[i]);
		}
	}

	//Laço de impressão dos dados dos alunos com médias iguais a maior média
	printf("\n\n=============================================");
	printf("\n*** Dados dos alunos com média igual a maior média: ");
	for(i=0;i<n;i++) {
		if(m[i]==maiorMedia) {
			printf("\n\n*** Aluno %d:",i+1);
			printf("\nNota 1: %.1f",n1[i]);
			printf("\nNota 2: %.1f",n2[i]);
			printf("\nMédia : %.1f",m[i]);
		}
	}

	//Laço de cálculo da média aritmética da turma
	mediaDaTurma = 0.0;
	for(i=0;i<n;i++) {
		mediaDaTurma = mediaDaTurma + m[i];
	}
	mediaDaTurma = mediaDaTurma/n;
	printf("\n\n=============================================");
	printf("\n*** Média aritmética da turma: %.1f",mediaDaTurma);

	printf("\n\n");
	return 0;
}
