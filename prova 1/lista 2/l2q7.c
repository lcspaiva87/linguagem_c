#include <stdio.h>

int main() {
	char s1[20],s2[20];

	// Ler as duas strings
	printf("\n Digite a primeira string: ");
	scanf("%s",s1);
	printf("\n Digite a segunda string: ");
	scanf("%s",s2);

	// Imprime as duas strings
	printf("\n Primeira string digitada: %s",s1);
	printf("\n Segunda string digitada: %s",s2);

	// Imprime a segunda letra de cada string 
	printf("\n segunda letra da primeira string: %c",s1[1]);
	printf("\n Segunda letra da segunda string: %c",s2[1]);

	printf("\n\n");
	return 0;
}
