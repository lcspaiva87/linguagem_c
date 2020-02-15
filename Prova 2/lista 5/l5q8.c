/*Escreva um programa em C que leia uma string de até 15 caracteres, utilizando a função
gets(), e em seguida a imprima na tela utilizando a função puts(). Conte o número de
caracteres da string. Lembre que toda string é finalizada com o caractere '\0'.*/
#include <stdio.h>
int main(){
    int i,cont;
    char str[16];
    	printf("\nDigite uma string de ate 15 caracteres:\n");
    	gets (str);
		//puts não precisar do \n ele pula uma linha automaticamente
    	puts ("A string digitada:");
    	puts (str);
    	cont=0;
    		for(i=0;str[i]!='\0';i=i+1)
    			cont=cont+1; 
    			printf("Numero de caractere da string:\n%d",cont);
   			printf("\n");
return 0;
}
