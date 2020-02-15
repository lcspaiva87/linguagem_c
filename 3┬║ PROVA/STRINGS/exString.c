/*
Faça um programa em C que leia uma string (str) e leia dois caracteres (c1 e c2), em seguida:
a) Conte e imprima a quantidade de caracteres na string.
b) Conte e imprima a quantidade de letras minúsculas na string.
c) Conte e imprima a quantidade de letras maiúsculas na string.
d) Conte e imprima a quantidade de letras na string.
e) Conte e imprima a quantidade de vogais na string.
f) Conte e imprima a quantidade de consoantes na string.
g) Imprima somente as vogais na string.
h) Imprima somente as consoantes na string.
i) Conte e imprima a quantidade do caractere contido em c1 na string.
j) Troque o caracactere contido em c1 pelo contido em c2 na string e imprima a string alterada.
k) Converta a string para letras minúsculas e imprima a string resultante.
l) Converta a string para letras maiúsculas e imprima a string resultante.
m) Imprima a string invertida.
*/

/* Programa que lê uma string e mostra alguns algoritmos simples de manipulação de strings. */

#include <stdio.h>
#include <string.h>
#define TAM 100

int main() {

	//Declaração de variáveis
	int i, n, aux, cQuant, lMinQuant, lMaiQuant, lQuant, vQuant, consQuant, c1Quant;
	char c1, c2;
	char str[TAM], strAux[TAM];

	//Leitura da string
	printf("\n======================================================");
	printf("\n******************************************************");
	printf("\nEntre com uma string: ");
	gets(str);

	//Leitura dos caracteres
	printf("Entre com o 1º caracactere: ");
	c1 = getchar();
	getchar(); //limpa o buffer do teclado
	printf("Entre com o 2º caracactere: ");
	c2 = getchar();
	printf("******************************************************");
	printf("\n======================================================\n\n");

	//Conta a quantidade de caracteres na string
	printf("\n======================================================");
	cQuant = 0;
	for(i=0;str[i]!='\0';i++)
		cQuant = cQuant + 1;
	printf("\nQuantidade de caracteres: %d",cQuant);

	//Conta a quantidade de letras minúsculas na string
	printf("\n======================================================");
	lMinQuant = 0;
	for(i=0;str[i]!='\0';i++)
		if(str[i]>='a'&&str[i]<='z')
			lMinQuant = lMinQuant + 1;
	printf("\nQuantidade de letras minúsculas: %d",lMinQuant);

	//Conta a quantidade de letras maiúsculas na string
	printf("\n======================================================");
	lMaiQuant = 0;
	for(i=0;str[i]!='\0';i++)
		if(str[i]>='A'&&str[i]<='Z')
			lMaiQuant = lMaiQuant + 1;
	printf("\nQuantidade de letras maiúsculas: %d",lMaiQuant);

	//Conta a quantidade de letras na string
	printf("\n======================================================");
	lQuant = 0;
	for(i=0;str[i]!='\0';i++)
		if( (str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') )
			lQuant = lQuant + 1;
	printf("\nQuantidade de letras: %d",lQuant);

	//Conta a quantidade de vogais na string
	printf("\n======================================================");
	vQuant = 0;
	for(i=0;str[i]!='\0';i++)
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
			vQuant = vQuant + 1;
	printf("\nQuantidade de vogais: %d",vQuant);

	//Conta a quantidade de consoantes na string
	printf("\n======================================================");
	vQuant = 0;
	lQuant = 0;
	for(i=0;str[i]!='\0';i++) {
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U') //conta as vogais
			vQuant = vQuant + 1;
		if( (str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') ) //conta as letras
			lQuant = lQuant + 1;
	}
	consQuant = lQuant - vQuant; // quant. de consoantes = quant. de letras - quant. de vogais
	printf("\nQuantidade de consoantes: %d",consQuant);

	//Imprime somente as vogais na string
	printf("\n======================================================");
	printf("\nVogais: ");
	aux = 0;
	for(i=0;str[i]!='\0';i++)
		if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U') {
			aux = 1;
			printf("%c  ",str[i]);
		}
	if(aux == 0)
		printf("não há vogais");

	//Imprime somente as consoantes na string
	printf("\n======================================================");
	printf("\nConsoantes: ");
	aux = 0;
	for(i=0;str[i]!='\0';i++)
		if( ( (str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z') ) && !(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U') ) { //se for letra E (AND) não for vogal imprime
			aux = 1;
			printf("%c  ",str[i]);
		}
	if(aux == 0)
		printf("não há consoantes");

	//Conta a quantidade do caractere contido em c1 na string
	printf("\n======================================================");
	c1Quant = 0;
	for(i=0;str[i]!='\0';i++)
		if(str[i] == c1)
			c1Quant = c1Quant + 1;
	printf("\nQuantidade de caracateres \'%c\': %d",c1,c1Quant);

	//Salva string original
	strcpy(strAux,str); //copia str para strAux

	//Troca o caracactere contido em c1 pelo contido em c2 na string
	printf("\n======================================================");
	printf("\nTroca os caracacteres \'%c\' por \'%c\' na string: ",c1,c2);
	printf("\nString original  : %s",str);
	for(i=0;str[i]!='\0';i++)
		if(str[i] == c1)
			str[i] = c2;
	printf("\nString modificada: %s",str);

	//Restaura string original
	strcpy(str,strAux); //copia strAux para str

	//Converte a string para letras minúsculas
	printf("\n======================================================");
	for(i=0;str[i]!='\0';i++)
		if(str[i]>='A'&&str[i]<='Z')
			str[i] = str[i] + 32;
	printf("\nString convertida para minúsculas: %s",str);

	//Converte a string para letras maiúsculas
	printf("\n======================================================");
	for(i=0;str[i]!='\0';i++)
		if(str[i]>='a'&&str[i]<='z')
			str[i] = str[i] - 32;
	printf("\nString convertida para maiúsculas: %s",str);

	//Restaura string original
	strcpy(str,strAux); //copia strAux para str

	//Imprime a string invertida
	printf("\n======================================================");
	printf("\nImprime a string invertida: ");
	printf("\nString original  : %s",str);
	n = strlen(str); // obtém o tamanho da string
	for(i=0;i<n/2;i++) {
		aux = str[i];
		str[i] = str[n-1-i];
		str[n-1-i] = aux;
	}
	printf("\nString invertida : %s",str);
	printf("\n======================================================");

	printf("\n\n");
	return 0;
}
