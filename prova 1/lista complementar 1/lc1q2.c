//Faça um programa em C que leia um número inteiro do teclado e imprima na tela o número lido no formato decimal, octal, hexadecimal e no formato de caractere. Utilize um printf para cada impressão
#include <stdio.h>
int main(){
	int x;
	printf("\nEntre com um número inteiro: ");
	scanf("%d",&x);
	printf("\nformato decimal %d",x);
	printf("\nformato octal %o",x);
	printf("\nformato hexadecimal %x",x);
	printf("\nformato caractere %c",x);




printf("\n\n");
return 0;
}
