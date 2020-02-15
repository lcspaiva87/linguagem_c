/* Faça um programa em c, q leia quatro valores inteiros a,b,c,d e os ordene em ordem crecente. A ordenação deve ser feita por uma função, cujos argumentos são numeros. A função deve imprimir os valores ordenados */

#include <stdio.h>
void ordenaCrescente(int a,int b,int c,int d);
int main() {
   int a,b,c,d;
   printf("\n Entre com o valor de a: ");
   scanf("%d",&a); //Tem q ler com o scanf pq so quero o valor de numero
   printf("\n Entre com o valor de b: ");
   scanf("%d",&b);
   printf("\n Entre com o valor de c: ");
   scanf("%d",&c);
   printf("\n Entre com o valor de d: ");
   scanf("%d",&d);
   ordenaCrescente(a,b,c,d);
   printf("\n\n");
   return 0;
   }
   //Função
   void ordenaCrescente(int a,int b,int c,int d) {
      int aux;
      if(a>b) {
      aux=a;
      a=b;
      b=aux;
      }
      if(a>c) {
      aux=a;
      a=b;
      b=aux;
      }
      if(a>d) {
      aux=a;
      a=b;
      b=aux;
      }
      if(b>c) {
      aux=a;
      a=b;
      b=aux;
      }
      if(b>d) {
      aux=a;
      a=b;
      b=aux;
      }
      if(c>d) {
      aux=a;
      a=b;
      b=aux;
      }
      printf("\n Numeros em ordem crescente:%d%d%d%d",a,b,c,d);
   } //fim da função
