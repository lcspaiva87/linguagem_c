#include <stdio.h>
int main() {
	int x;
	printf("\n entre com um nÃºmero inteiro: ");
   scanf("%d",&x);
   if((x%2!=0) || (x%3!=0)){
   	printf("\n Número lido %d e seu terceiro sucessor; %d",x,x+3);
	}
   else{
   	printf("\n Número lido %d e seu Quinto antecessor: %d ",x,x-5);
	}
   return 0;
}
