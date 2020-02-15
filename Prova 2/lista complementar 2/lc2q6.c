#include <stdio.h>
int main () {
   int a,b,x;
   printf("\nEntre com o valor a: ");
   scanf("%d",&a);
   printf("\nEntre com o valor b: ");
   scanf("%d",&b);
   printf("\nEntre com o valor x: ");
   scanf("%d",&x);
   if(x>=a && x<=b){
      printf("\n%d esta dentro do intervalo fechado. ",x);
	}
  else {
      printf("\n%d esta fora do intervalo fechado.",x);
	}
  

		 if(x>b){
   		printf("\n Esta acima do intervalo: %d",x);
	}
   	else{
   		printf("\n esta abaixo do intervalo:%d",x);
   }		



   return 0;
}

