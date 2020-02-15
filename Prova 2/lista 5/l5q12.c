#include <stdio.h>
int main(){
	int n,i,soma,num,cont;
	printf("\nEntre com a quant de Números a ser somados: ");
	scanf("%d",&n);
	soma=0;
	cont=0;
	for(i=1;i<=n;i++){
		printf("\nnumero %d: ",i);
		scanf("%d",&num);
		
		soma=soma+num;
	}
	printf("\nSoma dos números e %d",soma);
	printf("\n\n");
	return 0;
	
}
