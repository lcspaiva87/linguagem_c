// Faça um programa em C que leia um caractere e informe se ele é uma letra minúscula ou não
#include <stdio.h>
int main(){
	char ch;
	printf("\nEntre com um caractere ");
	scanf("%c",&ch);
	(ch>= 'a' && ch<='z') ? printf("\nCaractere %c e minúscula ",ch) : printf("Caractere %c não e minuscula",ch);
	printf("\n\n");
return 0;
}
