#include <stdio.h>

int retorno(int x);

int main(){
	int n, r;
	
	printf("\nInforme um numero inteiro:\n");
	scanf("%d",&n);
	
	r = retorno(n);

	if(r == 0){
		printf("\nO numer %d e PAR!\n", n);
	}else if(r == 1){
		printf("\nO numero %d e IMPAR!\n", n);
	}

	printf("\n\n");
	return 0;
}

int retorno(int x){
	int r;
	if(x%2 == 0){
		r = 0;
	}else if(x%2 != 0){
		r = 1;
	}

	return r;
}


