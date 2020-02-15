#include <stdio.h>
int cont(char c[] );
int main(){
	char ch[15];
	int n;
	printf("\nDigite a string: ");
	gets(ch);
	
	puts("\n");
	puts(ch);
	n=cont(ch);
	if(n <= 15)
		printf("A String lida possui %d caracteres!\n",cont(ch));
	else
		printf("\nA String ultrapassou o limite de 15 Caracteres!\n");

	printf("\n\n");
	return 0;
}

int cont(char c[]){
	int cont, i;

	cont = 0;
	for(i = 0; c[i] != '\0'; i++){
		cont++;
	}

	return cont;
}

