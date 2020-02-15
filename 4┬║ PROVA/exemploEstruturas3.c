#include <stdio.h>
#include <stdlib.h>  //biblioteca inclusa para utilização das funções malloc, free e exit
struct Aluno {
   char nome[50];
   float nota;
};
float mediaAritmetica (struct Aluno *v, int n);

int main() {
   int i,n;
   float mg;
   struct Aluno *a; //a é uma variável de tipo Aluno
   printf("\nEntre com a quantidade de alunos: ");
   scanf("%d",&n);
   
   //Alocação dinâmica de memória
   a = (struct Aluno*)malloc(n*sizeof(struct Aluno));
   if(a==NULL) { //testa se a memória foi realmente alocada. Se a função malloc retornar o valor NULL, não foi possível alocar memória suficiente.
      printf("\nERRO - MEMÓRIA INSUFICIENTE");
	   exit(1); //termina o programa
	}
	
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
   
   free(a); //libera a memória alocada para o ponteiro
   printf("\n\n");
   return 0;
}

float mediaAritmetica (struct Aluno *v, int n) {
   int i;
   float m;
   m = 0.0;
   for(i=0;i<n;i++)
      m = m + v[i].nota;
   m = m/n;
   return m;
}
