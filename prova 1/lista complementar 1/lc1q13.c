/*Faça um programa em C que leia um caractere e informe se ele é uma letra maiúscula ou
não.*/
#include <stdio.h>
int main(){
	char ch;
	printf("\nEntre com um caractere ");
	scanf("%c",&ch);
	(ch>= 'A' && ch<='Z') ? printf("\nCaractere %c e maiúscula ",ch) : printf("Caractere %c não e maiúscula",ch);
	printf("\n\n");
return 0;
}
