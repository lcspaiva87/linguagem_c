/* Leia N notas de uma turma. Depois imprima todas as notas: */
 
#include <stdio.h>
int main() {
   int  n,i;
   float nota[100];
   printf("\n Entre com a quantidade de notas: no maximo 100... ");
   scanf("%d",&n);
   for(i=0;i<n;i++) { //sempre começar de zero,porcausa do vetor
      printf("\n Nota %d: ",i+1);
      scanf("%f",&nota[i]);
   }
   for(i=0;i<n;i++) 
      printf("\n Nota %d: %.1f",i+1,nota[i]);
   printf("\n\n");
   return 0;
}
