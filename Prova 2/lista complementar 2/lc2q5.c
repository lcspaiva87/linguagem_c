#include <stdio.h>
int main(){
	int x,a,b;
	printf("\n Entre com o primeiro numero: ");
   scanf("%d",&a);
   printf("\n Entre com o segundo numero: ");
   scanf("%d",&b);
   printf("\n Entre com o terceiro numero: ");
   scanf("%d",&x);
   
	if(x>=a&&x<=b){
			printf("\n%d Ésta dentro do intevalo %d e %d",x,a,b);
	}
	

	else{
		printf("\n%d Não Ésta dentro do intevalo %d e %d",x,a,b);
	}
	

	printf("\n\n");
}
