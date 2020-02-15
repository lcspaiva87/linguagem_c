//Passagem de um vetor numerico para uma função:
/* Faça um programa em c q leia n notas de uma turma e imprima a media aritmetica da turma. A media deve ser o retorno de uma função, q recebe como um dos parametros um vetor de notas: */

#include <stdio.h> 
float media(float v[],int n); //parametro da funçao, e sempre q o vetor for numerico tem q passar o tamanho do vetor, n=notas;
int main() {
   int i,n;
   float m,nota[100]
      printf("\n Quantidade de notas: ");
      scanf("%d",&n);
      for(i=0;i<n;i++) {
         printf("\n Nota %d: "i+1);
         scanf("%f",&nota[i]);
      }
      m=media(nota,n);
      printf("\n media da turma: %.1f ",m);
      printf("\n\n");
      return 0;
}     
float media(float v[],int n) {
   int i;
   float m=0.0;
   for(i=0;i<n;i++)
      m=m+v[i];
   m=m/n;
   return m;
}
