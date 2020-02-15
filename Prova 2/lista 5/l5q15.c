#include <stdio.h>
int main(){
	int n,i,num;
	float media;
	printf("\nENtre com quant. de numeros: ");
	scanf("%d",&n);
	media=0;
	i=0;
	while(i<n){
		printf("\nDigite valor do numero %d: ",i+1);
		scanf("%d",&num);
		i++;	
		media=media+num;
	}
	media=media/n;
	printf("\nMedia dos numero %.2f",media);
	printf("\n\n");
	return 0;
}
