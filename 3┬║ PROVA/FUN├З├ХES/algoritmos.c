/* Programa que lê as notas de n alunos do teclado e as armazena em um vetor. */
/* Demonstra os algoritmos da soma, da média aritmética, do maior/menor valor, da ordenação crescente/decrescete com vetores e da inversão de valores no vetor. */

#include <stdio.h>
#define TAM 100

int main() {
	int i, j, n;
	float s, m, aux;
	float nota[TAM];

	//Leitura da quantidade de alunos
	printf("\nEntre com a quantidade de alunos - no máximo %d: ",TAM);
	scanf("%d",&n);

	//Armazena as notas dos n alunos no vetor nota
	for(i=0;i<n;i++) {
		printf("\nNota do aluno %d: ",i+1);
		scanf("%f",&nota[i]);
	}

	//Soma os elementos do vetor
	s = 0;
	for(i=0;i<n;i++)
		s = s + nota[i];
	printf("\nSoma dos elementos do vetor: %.1f",s);

	//Média aritmética dos elementos do vetor
	m = 0.0;
	for(i=0;i<n;i++)
		m = m + nota[i];
	m = m/n;
	printf("\nMédia aritmética dos elementos do vetor: %.1f",m);

	//Maior valor dos elementos do vetor
	aux = nota[0]; //iguala variável auxiliar ao primeiro elemento do vetor
	for(i=1;i<n;i++) { //i deve iniciar em 1
		if(nota[i]>aux)
			aux = nota[i];
	}
	printf("\nMaior valor dos elementos do vetor: %.1f",aux);

	//Menor valor dos elementos do vetor
	aux = nota[0]; //iguala variável auxiliar ao primeiro elemento do vetor
	for(i=1;i<n;i++) { //i deve iniciar em 1
		if(nota[i]<aux)
			aux = nota[i];
	}
	printf("\nMenor valor dos elementos do vetor: %.1f",aux);

	//Inversão dos elementos do vetor
	printf("\n\nVetor original");
	for(i=0;i<n;i++)
		printf("\nNota %d: %.1f",i+1,nota[i]);

	for(i=0;i<n/2;i++) {// início do algoritmo de inversão
		aux = nota[i];
		nota[i] = nota[n-1-i]; //à medida que i cresce n-1-i decresce
		nota[n-1-i] = aux;
	}// fim do algoritmo de inversão

	printf("\nVetor invertido");
	for(i=0;i<n;i++)
		printf("\nNota %d: %.1f",i+1,nota[i]);

	//Ordenação crescente
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(nota[i]>nota[j]) {
				aux = nota[i];
				nota[i] = nota[j];
				nota[j] = aux;
			}
	printf("\n\nVetor ordenado em ordem crescente");
	for(i=0;i<n;i++)
		printf("\nNota %d: %.1f",i+1,nota[i]);

	//Ordenação decrescente
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(nota[i]<nota[j]) {
				aux = nota[i];
				nota[i] = nota[j];
				nota[j] = aux;
			}
	printf("\n\nVetor ordenado em ordem decrescente");
	for(i=0;i<n;i++)
		printf("\nNota %d: %.1f",i+1,nota[i]);

	printf("\n\n");
	return 0;
}
