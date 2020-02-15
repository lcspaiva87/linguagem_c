#include <stdio.h>

int primo(int n);

int main(){
	int p, r;
	
	printf("\nInforme um numero inteiro maior do que 1:\n");
	scanf("%d",&p);
	
	r = primo(p);
	
	if(r == 1)
		printf("\nNumero informado Ã© primo\n");
	else if(r == 0)
		printf("\nNumero informado nÃ£o Ã© primo\n");

	printf("\n\n");
	return 0;
}


int primo(int n){
	int i, divisores;
	
	divisores = 0;
	for(i = 1; i <= n; i++)
		if(n%i == 0)
			divisores += i;
	
	if(divisores == (n+1))
		return 1;
	else
		return 0;
	
}

