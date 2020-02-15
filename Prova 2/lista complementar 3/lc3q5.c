/*Faça um programa em C que leia um número inteiro e:
a) Se o número for par, imprima os 20 números ímpares subsequentes.
b) Se o número for ímpar, imprima os 20 número pares antecedentes.*/
#include <stdio.h>
int main(){
	int n,i;
	//LEr o número do teclado
		printf("\nEntre com um número inteiro: ");
		scanf("%d" ,&n);
		// ser o numero for impar ira imprimir 20 números ímpares subsequentes.
		if(n%2!=0){
			for(i=1;i<=20;i++)
				printf("\nNúmero números ímpares subsequentes. %d", n+(2*i-1));
		}
		
		//se for pares 20 número pares antecedentes
		else{
			for(i=1;i<=20;i++)
				printf("\nos 20 número pares antecedentes. %d", n+(2*i-1));
		}
		
		printf("\n\n");
		return 0;
}
