/* Programa que lê as notas de n alunos do teclado e as armazena em um vetor. */
/* Demonstra os algoritmos da soma, da média aritmética, do maior/menor valor, de inversão e da ordenação crescente/decrescente com vetores. */

#include <stdio.h>
#define TAM 100

//Protótipos de funções
float soma(float v[], int n);
float media(float v[], int n);
float maiorValor(float v[],int n);
float menorValor(float v[],int n);
void inversao(float v[], int n);
void ordenaCrescente(float v[], int n);
void ordenaDecrescente(float v[], int n);

//Programa principal
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
	s = soma(nota,n); //chama função soma que calcula a soma dos elementos e retorna o valor
	printf("\nSoma dos elementos do vetor: %.1f",s);

	//Média aritmética dos elementos do vetor
	m = media(nota,n); //chama função media que calcula a média aritmética dos elementos e retorna o valor
	printf("\nMédia aritmética dos elementos do vetor: %.1f",m);

	//Maior valor dos elementos do vetor
	aux = maiorValor(nota,n); //chama função maiorValor que determina o maior valor no vetor e o retorna
	printf("\nMaior valor dos elementos do vetor: %.1f",aux);

	//Menor valor dos elementos do vetor
	aux = menorValor(nota,n); //chama função menorValor que determina o menor valor no vetor e o retorna
	printf("\nMenor valor dos elementos do vetor: %.1f",aux);

	//Inversão dos elementos do vetor
	printf("\n\nVetor original");
	for(i=0;i<n;i++)
		printf("\nNota %d: %.1f",i+1,nota[i]);

	inversao(nota,n); //chama função inversao que inverte a disposição dos elementos no vetor

	printf("\nVetor invertido");
	for(i=0;i<n;i++)
		printf("\nNota %d: %.1f",i+1,nota[i]);

	//Ordenação crescente
	ordenaCrescente(nota,n); //chama função ordenaCrescente que coloca os elementos do vetor em ordem crescente
	printf("\n\nVetor ordenado em ordem crescente");
	for(i=0;i<n;i++)
		printf("\nNota %d: %.1f",i+1,nota[i]);

	//Ordenação decrescente
	ordenaDecrescente(nota,n); //chama função ordenaDecrescente que coloca os elementos do vetor em ordem decrescente
	printf("\n\nVetor ordenado em ordem decrescente");
	for(i=0;i<n;i++)
		printf("\nNota %d: %.1f",i+1,nota[i]);

	printf("\n\n");
	return 0;
} //fim do programa principal

//Soma os elementos do vetor
float soma(float v[], int n) {
	int i;
	float s;
	s = 0.0; //variável que acumula valores deve ser zerada antes de entrar no laço
	for(i=0;i<n;i++)
		s = s + v[i];
	return s;
}//fim da função soma

//Média aritmética dos elementos do vetor
float media(float v[], int n) {
	int i;
	float m;
	m = 0.0; //variável que acumula valores deve ser zerada antes de entrar no laço
	for(i=0;i<n;i++)
		m = m + v[i];
	m = m/n;
	return m;
}//fim da função media

//Maior valor dos elementos do vetor
float maiorValor(float v[],int n) {
	int i;
	float aux;
	aux = v[0]; //iguala variável auxiliar ao primeiro elemento do vetor
	for(i=1;i<n;i++) { //i deve iniciar em 1
		if(v[i]>aux)
			aux = v[i];
	}
	return aux;
}//fim da função maiorValor

//Menor valor dos elementos do vetor
float menorValor(float v[],int n) {
	int i;
	float aux;
	aux = v[0]; //iguala variável auxiliar ao primeiro elemento do vetor
	for(i=1;i<n;i++) { //i deve iniciar em 1
		if(v[i]<aux)
			aux = v[i];
	}
	return aux;
}//fim da função menorValor

//Inversão dos elementos do vetor
void inversao(float v[], int n) {
	int i;
	float aux;
	for(i=0;i<n/2;i++) {// início do algoritmo de inversão
		aux = v[i];
		v[i] = v[n-1-i];
		v[n-1-i] = aux;
	}//fim do algoritmo inversao
}//fim da função inversao

//Ordenação crescente
void ordenaCrescente(float v[], int n) {
	int i,j;
	float aux;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(v[i]>v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}//fim da função ordenaCrescente

//Ordenação decrescente
void ordenaDecrescente(float v[], int n) {
	int i,j;
	float aux;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(v[i]<v[j]) {
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}//fim da função ordenaDecrescente
