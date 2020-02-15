#include <stdio.h>
int main() {
   char op;
   printf("\nEntre com uma das opçoes abaixo: ");
	printf("\nS - Solteiro");
	printf("\nC - Casado");
	printf("\nD - Divorciado");
	printf("\nV - Viuvo");
	printf("\nOpÃ§Ã£o: ");
	op = getchar();
	switch(op) {
		case 'S':
		case 's':	printf("\nSolteiro");
		break;
		case 'C':
		case 'c':	printf("\nCasado");
		break;
		case 'D':
		case 'd':	printf("\nDivorciado");
		break;
		case 'V':
		case 'v':	printf("\nViuvo");
		break;
		default:		printf("\nEstado civil invalido");
	}
   printf("\n\n");
   return 0;
}

