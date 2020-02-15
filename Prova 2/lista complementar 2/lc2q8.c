#include <stdio.h>
int main() {
   int n;
   printf("\n Entre com um numero inteiro: ");
   scanf("%d",&n);
   if(n%2!=0 && n%3==0)
      printf("\n %d e imapar,Seu sucessor: %d",n+1);
   else
      printf("\n %d e par, seu Antecessor: %d",n-1);
   return 0;
}


