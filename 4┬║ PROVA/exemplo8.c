struct Aluno {
   char nome[50];
   float nota;
};

void ordenaCrescenteNota(struct Aluno *p, int n) {
   int i,j;
   struct Aluno aux;
   for(i=0;i<n-1;i++)
      for(j=1+1;j<n;j++)
         if(p[i].nota>p[j].nota) {
            aux=p[i];
            p[i]=p[j];
            p[j]=aux;
         }
   printf("\n***Dados ordenados em ordem crescente de notas***");
   for(i=0;i<n;i++)
      printf("\nNome: %s",p[i].nome);
      printf("\nNota: %.1f",p[i].nota);
}

void ordemAlfabetica(struct Aluno *p, int n) {
   int i,j;
   struct Aluno aux;
   for(i=0;i<n-1;i++)
      for(j=1+1;j<n;j++)
         if(strcmp(p[i].nome,p[j].nome)>0) {
            aux=p[i];
            p[i]=p[j];
            p[j]=aux;
         }
   printf("\n***Dados ordenados em ordem alfabética***");
   for(i=0;i<n;i++)
      printf("\nNome: %s",p[i].nome);
      printf("\nNota: %.1f",p[i].nota);
}
