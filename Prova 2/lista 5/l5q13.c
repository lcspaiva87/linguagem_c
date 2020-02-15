#include <stdio.h>
int main(){
	int n,i,soma,num,cont;
	printf("\nEntre com a quant de Números a ser somados: ");
	scanf("%d",&n);
	soma=0;
	i=0;
	while(i<n){
		printf("\nnumero %d: ",i+1);
		scanf("%d",&num);
		soma=soma+num;
		i++;
	}
	printf("\nSoma dos números e %d",soma);
	printf("\n\n");
	return 0;
	
}
