#include <stdio.h>
int main(){
	int n;
	printf("\nENtre com um numero inteiro");
	scanf("%d",&n);
	if(n%2==0){
		printf("\n%d e par",n);
	}
	else{
		printf("\n%d impar",n);
	}
	printf("\n\n");
	return 0;
}
