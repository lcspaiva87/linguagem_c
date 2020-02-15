#include <stdio.h>
int matriz(int a,int b);
int main(){
	int c,d,soma;
	printf("\nEntre com valor de A: ");
	scanf("%d",&c);
	
	printf("\nEntre com valor de A: ");
	scanf("%d",&d);

	 soma=matriz(c,d);
	printf("\nSOma das matriz: %d ",soma);
	printf("\n\n");
	return 0;
}	
int matriz(int a,int b){
	int s,i;
	s = 0;
	
		s = a+b;
		return s;
}

