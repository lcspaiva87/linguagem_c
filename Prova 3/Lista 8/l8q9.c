#include <stdio.h>
#define TAM 30 

int contaLetras(char s[], char opcao); 
char maiuscula(char c); 

int main() {
	char str1[TAM];
	char op;
	int n;

	printf("\n***** Conta o número de caracteres de uma string *****");
	printf("\n\nEntre com uma string - no máximo %d caracteres: ",TAM-1);
	gets(str1); 
	printf("\nVocÃª digitou a string: ");
	puts(str1); 
	printf("\nEscolha uma das opções de contagem: ");
	printf("\n(A) - Número total de caracteres da string");
	printf("\n(B) - Número de letras maiÃºsculas");
	printf("\n(C) - Número de letras minÃºsculas");
	printf("\nOpção: ");
	op = getchar();

	op = maiuscula(op);
	n = contaLetras(str1, op);

	printf("\n***** Resultados *****\n");
	switch (op) {
		case 'A':	printf("\nO número total de caracteres é: %d", n);
						break;
		case 'B':	printf("\nO número de letras maiúsculas é: %d", n);
						break;
		case 'C':	printf("\nO número de letras minúsculas é: %d", n);
						break;
	}

	printf("\n\n");

	return 0;

} 

int contaLetras(char s[], char opcao) {

	int cont; 
	int i;
	cont = 0;
	switch (opcao) {
		case 'A':	for(i=0; s[i]!='\0'; i++)
							cont = cont + 1;
						break;
		case 'B':	for(i=0; s[i]!='\0'; i++)
							if( (s[i]>='A')&&(s[i]<='Z') )
								cont = cont + 1;
						break;
		case 'C':	for(i=0; s[i]!='\0'; i++)
							if( (s[i]>='a')&&(s[i]<='z') )
								cont = cont + 1;
						break;
	}

	return cont; 
}

char maiuscula(char c) {
	if( (c>='a')&&(c<='z') )
		c = c - 32;

	return c;
}



