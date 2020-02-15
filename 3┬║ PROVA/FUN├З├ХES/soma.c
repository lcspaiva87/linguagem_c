#include <stdio.h>
//prótotipo da função...
int soma(int a,int b);
//main
int main() {
   int x,y,z;
   printf("\n Entre com o valor de x: ");
   scanf("%d",&x);
   printf("\n Entre com o valor de y: ");
   scanf("%d",&y);
   z=soma(x,y); //Passagem por valor...
   printf("%d+%d=%d",x,y,z);
   printf("\n\n");
   return 0;
}
   //Definição de Função
   int soma(int a, int b) {
      int s;
      s=a+b;
      return s; //Ou assim= return (a+b);
}
