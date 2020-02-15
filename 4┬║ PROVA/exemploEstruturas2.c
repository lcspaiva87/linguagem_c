#include <stdio.h>
struct Aluno {
   char nome[50];
   float nota;
};
float mediaAritmetica (struct Aluno v[], int n);

int main() {
   int i,n;
   float mg;
   struct Aluno a[100]; //a é uma variável de tipo Aluno
   printf("\nEntre com a quantidade de alunos: ");
   scanf("%d",&n);
   for(i=0;i<n;i++) {
      printf("\nDados do aluno %d: ",i+1);
      printf("\nNome: ");
      getchar();
      gets(a[i].nome);
      printf("\nNota: ");
      scanf("%f",&a[i].nota);
   }
   for(i=0;i<n;i++) {
      printf("\nDados do aluno %d: ",i+1);
      printf("\nNome: %s",a[i].nome);
      printf("\nNota: %.1f",a[i].nota);
   }
   mg = mediaAritmetica(a,n);
   printf("\nMedia Aritmetica: %.1f",mg);
   
   printf("\n\n");
   return 0;
}

float mediaAritmetica (struct Aluno v[], int n) {
   int i;
   float m;
   m = 0.0;
   for(i=0;i<n;i++)
      m = m + v[i].nota;
   m = m/n;
   return m;
}
