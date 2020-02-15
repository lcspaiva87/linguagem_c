#include <stdio.h>
#include <string.h>
#define TAM 100

void comparaString(char s1[], char s2[]);

int main() {
	char str1[TAM], str2[TAM];

	system("clear");

	printf("\n***** Compara duas strings *****");
	printf("\n\nEntre com duas strings - no mÃ¡ximo %d caracteres cada: ",TAM-1);
	printf("\nEntre com a string 1: ");
	gets(str1);
	printf("Entre com a string 2: ");
	gets(str2);	

	printf("\n***** Resultados *****\n");
	comparaString(str1, str2);

	printf("\n\n");
	return 0;
}

void comparaString(char s1[], char s2[]) {
	int l1, l2; 

	if( !strcmp(s1,s2) )
		printf("\nAs strings são iguais");
	else
		printf("\nAs strings são diferentes");

	l1 = strlen(s1);
	l2 = strlen(s2);
	if(l1 == l2)
		printf("\nA string 1 tem o mesmo número de caracteres da string2\n\tTamanho_str1 = %d\tTamanho_str2 = %d", l1, l2);
	else if(l1 > l2)
		printf("\nA string 1 tem um número de caracteres maior do que a string2\n\tTamanho_str1 = %d\tTamanho_str2 = %d", l1, l2);
	else
		printf("\nA string 1 tem um número de caracteres menor do que a string2\n\tTamanho_str1 = %d\tTamanho_str2 = %d", l1, l2);
}


