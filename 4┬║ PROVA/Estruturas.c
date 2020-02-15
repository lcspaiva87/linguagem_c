//Estruturas
> tipos abstratos: tipos criados pelo programador.
> tipos nativos: disponibilizados pela liguagem de programação, como: int,char,float,double.
> palavra chave: struct.
> podem representar caracteristicas de um objeto.
> estruturas podem ser chamadas de registros.
> estruturas tem campos (atributos).

Ex:

#include <stdio.h>
struct E {
   int x;
   float f;
};
//main
int main() {
   struct E t,w;                 //t e uma variavel do tipo E
   t=2;                          //ERRO, O compilador n sabe aonde colocar, 
   t.x;                          //CERTO, E tem dois campos: x e y, ele coloca o valor 2 em t.
   t.f=3.14;      
   printf("\n %d",t.x);          //vai imprimir 2
   printf("\n %f",t.f);          //vai imprimir 3.14
   w=t;                          //isso e possivel pq w e o msm tipo de t.
   printf("\n %d---%f",w.x,w.f); //2 & 3.14
   return 0;
}

Ex 2:

#include <stdio.h>
struct Aluno {
   char nome[50];
   float nota;
};
int main() {
   struct Aluno a;
      printf("\n Nome: ");
      gets(a.nome);
      printf("\n Nota: ");
      scanf("%f",&a.nota);
      printf("\n Nome: %s\n Nota %.1f",a.nome,a.nota);
      return 0;
}

Ex 3: //exemplo tipo um fichario

#include <stdio.h>
struct Aluno {
   char nome[50];
   float nota;
};
int main() {
   struct Aluno a[100];  //a, agora no caso e um vetor com 100 posiçoes
      int i,n;
      float aux;
         printf("\n Entre com a quantidade de alunos: ");
         scanf("%d",&n);
            for(i=0;i<n;i++) {
               getchar(); //para limpar o buufer
                  printf("\n Nome %d Aluno: ",i+1);
                  gets(a[i].nome); //tem q indicar a posição
                  printf("\n Nota: %d Aluno: ",i+1);
                  scanf("%f",&a[i].nota);
            }
            for(i=0;i<n;i++) {
               printf("\n Nome do %d: %s\n Nota do %d: %.1f",i+1,a[i].nome,i+1,a[i].nota);
            }
            aux=a[0].nota; //colocando a maior nota
               for(i=1;i<n;i++)
                  if(a[i].nota>aux)
                     aux=a[i].nota;
                        printf("\n Maior nota: %.1f", aux);
                        return 0;
}

Ex 4: //ponteiro de aluno
                       
#include <stdio.h>
struct Aluno {
   char nome[50];
   float nota;
};
int main() {
   struct Aluno *a;
      int i,n;
      float aux;
         printf("\n Entre com a quantidade de alunos: ");
         scanf("%d",&n);
         //ponteiro
         a=(struct Aluno*) malloc (n*sizeof(struct Aluno)); //ocupa 54 bytes
         if(a==NULL) {
         printf("\n ERRO-Memoria Insuficiente ");
         exit(1);
         }     
            for(i=0;i<n;i++) {
               getchar(); //para limpar o buufer
                  printf("\n Nome %d Aluno: ",i+1);
                  gets(a[i].nome); //tem q indicar a posição
                  printf("\n Nota: %d Aluno: ",i+1);
                  scanf("%f",&a[i].nota);
            }
            for(i=0;i<n;i++) {
               printf("\n Nome do %d: %s\n Nota do %d: %.1f",i+1,a[i].nome,i+1,a[i].nota);
            }
            aux=a[0].nota; //colocando a maior nota
               for(i=1;i<n;i++)
                  if(a[i].nota>aux)
                     aux=a[i].nota;
                        printf("\n Maior nota: %.1f", aux);
                        free(a);
                        return 0;
}

Ex 5: //funçao com estruturas, com ordenação Decrescente

#include <stdio.h>
#include <stdlib.h>
struct Aluno {
   char nome[50];
   float nota;
};
void ordenaDecrescente(struct Aluno *p,int n); //serve p receber vetore como ponteiros
int main() {
   struct Aluno *a;
      int i,n;
      float aux;
         printf("\n Entre com a quantidade de alunos: ");
         scanf("%d",&n);
         //ponteiro
         a=(struct Aluno*) malloc (n*sizeof(struct Aluno)); //ocupa 54 bytes
         if(a==NULL) {
         printf("\n ERRO-Memoria Insuficiente ");
         exit(1);
         }     
            for(i=0;i<n;i++) {
               getchar(); //para limpar o buufer
                  printf("\n Nome %d Aluno: ",i+1);
                  gets(a[i].nome); //tem q indicar a posição
                  printf("\n Nota: %d Aluno: ",i+1);
                  scanf("%f",&a[i].nota);
            }
            for(i=0;i<n;i++) {
               printf("\n Nome do %d: %s\n Nota do %d: %.1f",i+1,a[i].nome,i+1,a[i].nota);
            }
            aux=a[0].nota; //colocando a maior nota
               for(i=1;i<n;i++)
                  if(a[i].nota>aux)
                     aux=a[i].nota;
                        printf("\n Maior nota: %.1f", aux);
                           //ordenação
            ordenaDecrescente(a,n);
               for(i=0;i<n;i++) {
                  printf("\n Nome do %d: %s\n Nota do %d: %.1f",i+1,a[i].nome,i+1,a[i].nota);
               }
                  free(a);
                  return 0;
} //fim do main
void ordenaDecrescente(struct Aluno *p,int n) {
   int i,j;
   struct Aluno aux; //vai o nome e a nota do aluno de uma vez.
      for(i=0;i<n-1;i++)
         for(j=i+1;j<n;j++)
            if(p[i].nota<p[j].nota) {
               aux=p[i];
               p[i]=p[j];
               p[j]=aux;
            }
}

