/* Faça um programa em c q leia quatro valores inteiros a,b,c,d e imprima o maior e menor valor. O maior e menor valores devem ser determinados por funçoes q retornam valores */

#include <stdio.h>
int maiorValor(int a,int b,int c,int d);
int menorValor(int a,int b,int c,int d);
int main() {
   int a,b,c,d,maior,menor;
   printf("\n Entre com o valor de a: ");
   scanf("%d",&a);
   printf("\n Entre com o valor de b: ");
   scanf("%d",&b);
   printf("\n Entre com o valor de c: ");
   scanf("%d",&c);
   printf("\n Entre com o valor de d: ");
   scanf("%d",&d);
   maior=maiorValor(a,b,c,d);
   printf("\n Maior valor: %d",maior);
   menor=menorValor(a,b,c,d);
   printf("\n Menor valor: %d",menor);
   printf("\n\n");
   return 0;
   }
   int maiorValor(int a,int b,int c,int d) { //função do maior valor
      int aux;
      aux=a;
      if(b>aux)
         aux=b;
      if(c>aux)
         aux=c;
      if(d>aux)
         aux=d;
      return aux;
}
   int menorValor(int a,int b,int c,int d) { //função do menor valor
      int aux;
      aux=a;
      if(b<aux)
         aux=b;
      if(c<aux)
         aux=c;
      if(d<aux)
         aux=d;
      return aux;
}
