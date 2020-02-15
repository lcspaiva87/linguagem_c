#include <stdio.h>
#define PERC_AMOSTRA 0.05

//CONTINUA......
int soma(int qtPecas, int qtPecasDefeit);
int qualidade(int qtPecas, int qtPecasDefeit);

int main(){
	int i, lotes, qtPecas, qtPecasDefeit, qtPecasAmostra,soma;

	printf("\nInforme quantos Lotes:\n");
	scanf("%d",&lotes);
	
	for(i = 0; i < lotes; i++){
		printf("\nInforme a quantidade de PeÃ§as do Lote %d:\n",i+1);
		scanf("%d",&qtPecas[i]);
		printf("\nInforme a quantidade de PeÃ§as do Lote %d defeituosas:\n",i+1);
		scanf("%d",&qtPecasDefeit);
		
		qtPecasAmostra = qualidade(qtPecas, qtPecasDefeit);
	}

	soma=soma(qtPecas, qtPecasDefeit);
	printf("\nSoma das peças: %d",soma);
	printf("\n\n");
	return 0;
}

int qualidade(int qtPecas, int qtPecasDefeit){
	float ntPecasAmostra;
	
	ntPecasAmostra = (PERC_AMOSTRA / 100) * qtPecas;
	
	
	return ntPecasAmostra;
}
int soma(int qtPecas, int qtPecasDefeit){

	int i;
	float s;
	s = 0.0;
	for(i=0;i< qtPecasDefeit;i++)
		s = s + qtPecas[i];
	return s;
}

