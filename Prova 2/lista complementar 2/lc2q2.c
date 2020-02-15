/*Faça um programa em C que leia o número de dias trabalhados por um empregado e um
código de situação. O código de situação pode assumir dois valores: 'c' para casado e 's' para
solteiro. A diária do empregado é de R$ 30,00. Se o empregado trabalhar mais de 20 dias
tem direito a um bônus sobre o total de diárias, que será de 5% se for casado, senão será de
3%.
a) Calcule qual é o percentual recebido.
b) Calcule o valor do bônus recebido.
c) Calcule o valor bruto recebido. (Total de diárias + valor do bônus)
d) Calcule o valor do imposto, sabendo que são descontados 2% de imposto.
e) Calcule o valor líquido recebido.*/

#include <stdio.h>
#define DIARIA 30.0
#define BONUS_C 0.05
#define BONUS_S 0.03
#define IMP 0.02
int main() {

   int dias;
   char c;
   float bonus,percentual_recebido,VB,VL,VI;
   
   printf("\n Ente com o numero de dias: ");
   scanf("%d",&dias);
   printf("\n Entre com o codigo da sua situaÃ§Ã£o: (c) - Para casado, e (s) - Para solteiro: ");
   c=getchar();
   scanf("%c",&c);
   
   if(dias>20 && c=='c')
      bonus=DIARIA*BONUS_C;
      percentual_recebido=0.05;
	else if(dias>20 && c=='s')
      bonus=DIARIA*BONUS_S;
      percentual_recebido=0.03;
   else
      printf("\n Nao tem direito ao bonus. ");
      
   VB=DIARIA+bonus;
   VI=IMP*VB;
   VL=VB-VI;
   
   printf("\n Valor do percentual_recebido: %f",percentual_recebido);
   printf("\n valor do bonus: R$%.2f",bonus);
   printf("\n valor bruto:        R$%.2f",VB);
   printf("\n valor do imposto:   R$%.2f",VI);
   printf("\n valor liquido:      R$%.2f",VL);
   printf("\n\n");
   return 0;
}


