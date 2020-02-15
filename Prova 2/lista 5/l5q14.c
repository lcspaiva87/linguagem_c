#include <stdio.h>
int main(){
	int n,i,num;
	float media;
	printf("\nENtre com quant. de numeros: ");
	scanf("%d",&n);
	media=0;
	for(i=1;i<=n;i++){
		printf("\nDigite valor do numero %d: ",i);
		scanf("%d",&num);	
		media=media+num;
	}
	media=media/n;
	printf("\nMedia dos numero %.2f",media);
	printf("\n\n");
	return 0;
}
