#include <stdio.h>
int main(){
	char ch;
	printf("\n Digite um caractere: ");
	scanf("%c",&ch);
	
	printf("\nCaractere digitado é: '%c' ",ch);
	printf("\nCaractere em código ASCII é: ");
	printf("\nCaractere em octal é: %o e caractere subsequente é: %o ",ch,ch+2);
	printf("\nCaractere em octal é: %d e caractere subsequente é: %d ",ch,ch+2);
	printf("\nCaractere em octal é: %x e caractere subsequente é: %x ",ch,ch+2);
	printf("\n\n");	
	


return 0;
}
