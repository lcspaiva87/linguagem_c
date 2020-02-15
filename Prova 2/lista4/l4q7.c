/*Implemente um programa em C que leia um caractere digitado pelo usuário utilizando a
função getchar(). Imprima o caractere digitado utilizando a função putchar(). Imprima
também o código ASCII correspondente a esse caractere. Se o caractere for uma letra
maiúscula imprima: “Letra maiúscula” e a letra minúscula correspondente. Se o caractere
for uma letra minúscula imprima: “Letra minúscula” e a letra maiúscula correspondente.*/
#include <stdio.h>
int main(){
	char c;
			printf("\nDigite um caractere: ");
			c = getchar();
   printf("\n O caractere digitado foi : ");
	putchar(c);
	printf("\n Código ASCII do caractere: %d", c);
	if(c>='A'&& c<='Z') {
		printf("\nLetra maiscula");
		printf("\nLetra minuscula corresponte: %c", c+32);
	}
	if(c>='a'&&c<='z') {
		printf("\nLetra minuscula");
		printf("\nLetra maiscula corresponte: %c", c-32);
	}	
   printf("\n\n");
   return 0;
}
	
