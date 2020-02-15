#include <stdio.h>
int soma(int a,int b);
int main(){
	int x,y;
	printf("\nENtre com valor de a: ");
	scanf("%d",&x);
	
	printf("\nEntre com valor de b: ");
	scanf("%d",&y);
	
	printf("\nResultado da soma %d",soma(x,y));
	printf("\n\n");
	return 0;
}

int soma(int a,int b){
	return a+b;
}

