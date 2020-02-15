//PONTEIROS
//exemplo
#include <stdio.h>

int main() {
   int x,y;
   int *p;
   x = 2;
   y = 3;
   p = &x;
   printf("\n%d",*p);
   printf("\n%p",p);
   *p = 5;
   printf("\n%d",x);
   x = 7;
   printf("\n%d",*p);
   p = &y;
   printf("\n%d",*p);
   printf("\n%p",p);
   
   printf("\n\n");
   return 0;
}
//exemplo de função com ponteiros
#include <stdio.h>
int main() {
   int x,y,z;
   x = 2;
   y = 3;
   z = soma(&x,&y);
   printf("\n%d",z);
   printf("\n\n");
   return 0;
}

int soma(int *a, int *b) {
   int s;
   s = *a+*b;
   return s;
}
//exemplo(alocação dinâmica de memória)
#include <stdio.h>
#include <stdlib.h>

int main() {
   int i,n;
   float *nota;
   printf("\nEntre com a quantidade de alunos: ");
   scanf("%d",&n);
   //inicio da alocação dinâmica
   nota = (float *) malloc(n*sizeof(float))  //sizeof(quantidade_de_memória)
   if(nota==NULL) {
      printf("\nErro - memória insuficiente");
   exit(1);
   }//fim da locação dinâmica
   for(i=0;i<n;i++) {
      printf("\nEntre com a %dª nota: ",i+1);
      scanf("%f",&nota[i]);
   }
   
   printf("\n\n");
   free(nota); //liberar a memória
   return 0;
}
