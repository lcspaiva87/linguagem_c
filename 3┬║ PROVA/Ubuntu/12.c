#include <stdio.h>
int main(){ 
	
	int n,i;

	printf("Entre com um numero :");
	scanf("%d",&n);

	if(n%2==0 && n%3==0)
		for(i=1;i<=20;i++)
			printf("\n Os numeros subsequentes são : %d ",n+i);
	else
		for(i=1;i<=20;i++)
			printf("\n Os numeros antecedentes são : %d ",n-i);

	return 0;

}
