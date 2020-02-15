/*Faça um programa em C que leia qual é a quantidade de pessoas em uma fila e qual é a
posição de um office boy nessa fila. Calcule quantas pessoas estão à frente e atrás do office
boy.*/
#include <stdio.h>
int main(){
	int a,b;
	printf("\nEntre com numero  de pessoas na fila ");
	scanf("%d",&a);
	printf("\nentre com Posição do office boy: ");
	scanf("%d",&b);
	printf("\nNumero de pessoas na frente dele e %d",a-b);
	printf("\nNumero de pessoa atras dele %d",b-1);
	printf("\n\n");
	return 0;
}
