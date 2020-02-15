#include <stdio.h>
#include <string.h>
#define TAM 100 

void trocaCaractere(char nome[], char a, char b); 

int main() {
	int i, N;
	char str[TAM], c1, c2;

	printf("\n***** Substitui o caractere c1 de uma string pelo caractere c2 *****");
	printf("\n\nEntre com a string: ");
	gets(str);
	printf("Entre com o caractere c1: ");
	c1 = getchar();
	getchar();
	printf("Entre com o caractere c2: ");
	c2 = getchar();	

	trocaCaractere(str, c1, c2);

	printf("\n** Resultados ** ");
	printf("\nA string resultante: ");
	puts(str);
	printf("\n\n");

	return 0;
}

void trocaCaractere(char nome[], char a, char b) {
	int i;
	for(i=0; nome[i]!='\0'; i++) {
		if( nome[i] == a )
			nome[i] = b;
	}
	
	printf("\n** Resultados ** ");
	printf("\nString resultante: ");
	puts(nome);
	printf("\n\n");
}
