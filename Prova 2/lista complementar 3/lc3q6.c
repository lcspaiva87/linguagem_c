/*Faça um programa em C que leia um número natural n e imprima a quantidade, a soma e a
média aritmética dos números ímpares de 0 a n.*/
#include <stdio.h>
int main(){
	int n,i,cont,soma;
	float media;
	printf("\nEntre com um número inteiro: ");
	scanf("%d",&n);
	cont=0;
	media=0;
	soma=0;
		for(i=0;i<=n;i++){
			if(n%2!=0){
					cont++;
					soma=soma+i;
						
				
			}
		}
		
		media=(float)soma/cont;
		
		printf("\nQuatidade de ímpares %d ",cont);				
		printf("\nSoma dos ímpares %d",soma);
		printf("\nMedia dos pares são %f",media);
		
		printf("\n\n");
		return 0;
}


