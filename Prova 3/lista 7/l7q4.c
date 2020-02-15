void imprime(char c, int n), em que c representa o caracter e n o número de vezes que deve ser impresso.

#include <stdio.h>

void imprime(char c, int n); //protótipo

//Função principal
int main() {
	char ch;
	int num;
	
	printf("\nEntre com um caractere: ");
	ch = getchar();
	printf("\nEntre com a quant. de impressões: ");
	scanf("%d",&num);
	
	imprime(ch,num); //chamada da função. O conteúdo de ch e num da função main são copiados respectivamente para dentro dos parâmetros c e n da função imprime.

	printf("\n\n");
	return 0;
}//fim da função main

//Função imprime
void imprime(char c, int n) {
	int i;
	
	printf("\n\n");
	for(i=0;i<n;i++)
		printf("%c ",c);
}//fim da função imprime
