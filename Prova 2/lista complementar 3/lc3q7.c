/*Faça um programa em C que leia indefinidamente números naturais (números inteiros
positivos). Quando o programa ler um inteiro negativo, deve terminar informando a
quantidade, a soma e a média aritmética dos números naturais lidos. Utilize laço infinito.*/
#include <stdio.h>
int main(){
	int n,soma,cont;
	cont=0;
	soma=0;
	while(1){
		printf("\nEntre com um número inteiro: ");
		scanf("%d",&n);
		if(n<0)
			break;
				cont++;
			soma=soma+n;
		}
		printf("\nQuant. de números: %d",cont);
		printf("\nSoma dos numeros %d ",soma);
		
		if(cont==0)
			printf("\nMédia dos números não se aplicar");
		else{
			printf("\nMédia dos números %.1f",(float)soma/cont);
		}
		
		printf("\n\n");
		return 0;
}
