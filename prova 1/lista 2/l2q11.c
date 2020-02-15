#include <stdio.h>
int main(){
	int x;
	printf("\nEntre com um Número inteiro: ");
	scanf("%d",&x);
	(x%2==0 && x%3==0) ? printf("\n %d e múltiplo de 2",x) : printf("\n%d e múltiplo de 3",x);


	printf("\n\n");
	return 0;
}
