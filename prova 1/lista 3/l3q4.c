//Faça um programa em C que determina se um dado número é par ou ímpar. Utilize o operador % (módulo).
#include <stdio.h>
int main(){
	int x;
	printf("\nEntre com um Número: ");
	scanf("%d",&x);
(x%2==0  ) ? printf("\nNúmero %d e par",x) : printf("\nNúmero %d e impar",x);
printf("\n\n");
return 0;
}
