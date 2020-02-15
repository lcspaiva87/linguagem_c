// Faça um programa em C que leia um caractere e informe se ele é uma letra ou não
#include <stdio.h>
int main(){
	char ch;
	printf("\nEntre com um caractere ");
	scanf("%c",&ch);
	(ch>='a'&& ch<='z'|| ch>= 'A' && ch<='Z') ? printf("\nCaractere %c e uma letra ",ch) : printf("Caractere %c não e uma letra",ch);
	printf("\n\n");
return 0;
}
