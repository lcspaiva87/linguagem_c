//02 :










//04:

float m;
   m=v[0].nota;
      for(i=1;i<n;i++)
         if(v[i].nota < m) {
            m=v[i].nota;
         }
      printf("\n Alunos com a menor nota: ");
         for(i=0;i<n;i++)
            if(v[i].nota==m)
               printf("\n Aluno %d\n Nome: %s\n Nota: %.1f",i+1,v[i].nome,v[i].nota);

//05:
   
struct ficha_pessoal pesquisa(struct ficha_pessoal *p,char *nome,int n) {
   int i;
      for(i=0;i<n;i++)
         if(strcmp(p[i].nome,nome)==0)
            return p[i];
}
