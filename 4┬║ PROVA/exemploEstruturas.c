/*ESTRUTURAS(Tipos Abstratos)
(Registros)
http://www.ead.cpdee.ufmg.br/cursos/C/ site para C
http://www.matcomp.dcc.ufmg.br/index.php/artigos/apostilas/16-cursoc site para C
*/

#include <stdio.h>
#include <stdlib.h>
struct cst {
   int i;
   float f;
{;

int main() {
   strct est a;
   a=2; //ERRO
   a=3.5; //ERRO
   a.i=2;
   a.i=3.5;
   scanf("%d",&a.i);
   scanf("%f",&a.f);
   
//Exemplo
#include <stdio.h>
struct Endereco {
   char logradouro[50];
   int num;
};
struct Aluno {
   char nome[50];
   float nota;
   struct Endereco end;
};

int main() {
   struct Aluno a;
   
   printf("\nNome: ");
   gets(a.nome);
   printf("\nNota: ");
   scanf("%f",&a.nota);
   getchar();
   printf("\nLogradouro: ");
   gets(a.end.logradouro);
   printf("\nNúmero: ");
   scanf("%d",&a.end.num);
   
   printf("\nNome: %s",a.nome);
   printf("\nNota: %.1f",a.nota);
   printf("\nLogradouro: %s",a.end.logradouro);
   printf("\nNúmero: %d",a.end.num);
   
   printf("\n\n");
   return 0;
}
