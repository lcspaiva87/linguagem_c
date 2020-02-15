#include <stdio.h>

int Fatorial(int n);

int main(){
	int numero, fatorial;
	
	printf("\nInforme um numero inteiro maior que 0:\n");
	scanf("%d",&numero);
	
	fatorial = Fatorial(numero);
	
	printf("\nO Fatorial desse numero e: %d\n",fatorial);

	printf("\n\n");
	return 0;
}

int Fatorial(int n){
	int fatorial, i;
	
	fatorial = 1;
	for(i = 1; i <= n; i++){
		fatorial *= i;
	}

	return fatorial;
}


