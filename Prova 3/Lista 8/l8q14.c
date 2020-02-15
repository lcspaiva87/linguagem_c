#include <stdio.h>
#include <string.h>
#define tam 100
int cont(char str[], int n);
int main(){
	int i,n,aux,conta;
	char ch[tam];
	printf("\nEntre com uma string: ");
	gets(ch);
	
	n = strlen(ch);
	conta=cont(ch,n);
	printf("\nquant... de letras: %d",conta);
	printf("\n\n"); 
	return 01;
}

int cont(char str[], int n){
	int cQuant,i;
//Conta a quantidade de caracteres na string
	printf("\n======================================================");
	cQuant = 0;
	for(i=0;str[i]!='\0';i++)
		cQuant = cQuant + 1;
	return cQuant;
}
