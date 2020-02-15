//Idem à questão anterior, só que utilizando somente um printf para todos os formatos.
#include <stdio.h>
int main(){
int ch;
	printf("\nDigite um Numero inteiro");
	scanf("%d",&ch);
	printf("\nforma decimal %d\nformato octal %o \n formato hexadecimal %x\n ",ch,ch,ch);
printf("\n\n");
return 0;
}
