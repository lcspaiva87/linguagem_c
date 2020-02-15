#include <stdio.h>
int main(){
float n1,n2,n3,n4,m;
printf("\nEntre com a 1º nota do aluno: ");
scanf("%f",&n1);
printf("\n");
printf("\nEntre com a 2º nota do aluno: ");
scanf("%f",&n2);
printf("\n");
printf("\nEntre com a 3º nota do aluno: ");
scanf("%f",&n3);
printf("\n");
printf("\nEntre com a 4º nota do aluno:");
scanf("%f",&n4);
m=(n1+n2+n3+n4)/4;
if(m>=6)
printf("\nSua media e %.2f ,Aluno aprovado",m);
else(m<6)
printf("\nSua media é %.2f, aluno reprovado",m);

	return 0;
}
