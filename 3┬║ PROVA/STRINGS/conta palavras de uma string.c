#include <stdio.h>
int contaPalavras(char str[]);
int main() {
	char kitsune[50]
	int quant;
	printf("\n Entre com uma string:");
	gets(kitsune);
	quant=contaPalavras(kitsune);
	printf("\n Quantidade de palavras da string: %d",quant);
	return 0;
}





....................................................................

int contaPalavras (char str[]) {
	int i,cont;
	cont=0;
	for(i=0;str[i]!='\0';i++)
		if(str[i]==' ')
			cont=cont+1;
	return(cont+1);
}
