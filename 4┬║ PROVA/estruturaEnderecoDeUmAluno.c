#include <stdio.h>
#include <stdlib.h>
struct Endereco {
   char logradouro[50];
   int num;
}
struct Aluno {
   char nome[50];
   float nota;
   struct Endereco end; /* end e uma variavel do tipo endereço, e pode armazenar duas coisas ao mesmo tempo: logradouro e o numero */
};

int nain() {
   int i,n;
   struct Aluno a;
      printf("\n Nome: ");
      gets(a.nome);
      printf("\n Nota: ");
      scanf("%f",&a.nota);
      getchar();
      printf("\n Logradouro: ");
      gets(a.end.logradouro);
      printf("\n Número: ");
      scanf("%d",&a.end.num);
      getchar();
      printf("\n Nome: %s\n Nota: %.1f\n Logradouro: %s\n Número: %d\n",a.nome,a.nota,a.end.logradouro,a.end.num);
      return 0;
}
