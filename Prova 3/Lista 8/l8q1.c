#include <stdio.h>
#define TAM 1000

int SOMA(int numeros[ ], int n);

int main(){
	int n[TAM], qt, i, soma;

	printf("\nInforme quantos Numeros:\n");
	scanf("%d",&qt);
	
	for(i = 0; i < qt; i++){
		printf("\nEntre com o %d numero:\n",i+1);
		scanf("%d",&n[i]);
	}
	
	soma = SOMA(n, qt);
	
	printf("\nA soma de todos numeros do vetor: %d\n",soma);

	printf("\n\n");
	return 0;
}

int SOMA(int numeros[], int n){
	int soma, i;
	soma = 0;
	for(i = 0; i < n; i++){
		soma += numeros[i];
	}
	
	return soma;
}


