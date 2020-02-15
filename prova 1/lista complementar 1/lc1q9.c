//Faça um programa em C que leia a idade de uma pessoa e informe se ela está apta a votar ou não.
#include <stdio.h>
int main(){
	int x;
	printf("\nEntre com sua idade: ");
	scanf("%d",&x);
	(x>=18)? printf("Esta apta a votar") : printf("\nNão esta apta a voltar");
printf("\n\n");
return 0;
}
