#include <stdio.h>
#define TAM 100

void converte(char c[]);

int main(){
	char str[TAM];
	
	printf("\nInforme uma String:\n");
	gets(str);
	
	converte(str);

	printf("\nA String convertida para Minuscula: %s\n",str);
	printf("\n\n");
	return 0;
}

void converte(char c[]){
	int i;
	for(i = 0; c[i] != '\0'; i++){
		if(c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}
}
