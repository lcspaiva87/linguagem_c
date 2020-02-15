/*
Faça um programa em C que leia uma string (str) e leia dois caracteres (c1 e c2), em seguida:
a) Conte e imprima a quantidade de caracteres na string.
b) Conte e imprima a quantidade de letras minúsculas na string.
c) Conte e imprima a quantidade de letras maiúsculas na string.
d) Conte e imprima a quantidade de letras na string.
e) Conte e imprima a quantidade de vogais na string.
f) Conte e imprima a quantidade de consoantes na string.
g) Imprima somente as vogais na string.
h) Imprima somente as consoantes na string.
i) Conte e imprima a quantidade do caractere contido em c1 na string.
j) Troque o caracactere contido em c1 pelo contido em c2 na string e imprima a string alterada.
k) Converta a string para letras minúsculas e imprima a string resultante.
l) Converta a string para letras maiúsculas e imprima a string resultante.
m) Imprima a string invertida.
*/

/* Programa que lê uma string e mostra alguns algoritmos simples de manipulação de strings. */

#include <stdio.h>
#include <string.h>
#define TAM 100

int main() {

	//Declaração de variáveis
	int i, n, aux, cQuant, lMinQuant, lMaiQuant, lQuant, vQuant, consQuant, c1Quant;
	char c1, c2;
	char str[TAM], strAux[TAM];

	//Leitura da string
	printf("\n======================================================");
	printf("\n******************************************************");
	printf("\nEntre com uma string: ");
	gets(str);




	//Imprime a string invertida
	printf("\n======================================================");
	printf("\nImprime a string invertida: ");
	printf("\nString original  : %s",str);
	n = strlen(str); // obtém o tamanho da string
	for(i=0;i<n/2;i++) {
		aux = str[i];
		str[i] = str[n-1-i];
		str[n-1-i] = aux;
	}
	printf("\nString invertida : %s",str);
	printf("\n======================================================");

	printf("\n\n");
	return 0;
}
