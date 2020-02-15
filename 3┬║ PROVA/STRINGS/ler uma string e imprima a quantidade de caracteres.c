
1_leia uma string e imprima a quantidade de caracteres:
 

#include <stdio.h>
#define tam 50
int main() {
	int i,cont;
	char str[tam];
	printf("\n Entre com uma string:");
	gets(str);
	cont=0;
	for(i=0;str[i]!='\0';i++)
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
	printf("\n Resultado: %d",cont);
	return 0;
}



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
letra f da quet 1 da lista complementar 4;;;;;;;;;;;;;;;;;;;;

void converteMinusculas (char str[]) {
int i;
for(i=o;str[i]!='\0';i++)
	if(str[i]>='A'&& STR[I]<='Z')
		str[i]=str[i]+32;
}
