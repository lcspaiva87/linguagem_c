/*Faça um programa em C que leia o número de dias trabalhados por um empregado e um
código de situação. O código de situação pode assumir dois valores: 'c' para casado e 's' para
solteiro. A diária do empregado é de R$ 30,00. Se o empregado trabalhar mais de 20 dias
tem direito a um bônus sobre o total de diárias, que será de 5% se for casado, senão será de
3%.
a) Calcule qual é o percentual de bônus recebido.
b) Calcule o valor do bônus recebido.
c) Calcule o valor bruto recebido (valor total de diárias + bônus).
d) Calcule o valor do imposto, sabendo que são descontados 2% de imposto.
e) Calcule o valor líquido recebido.*/
#include <stdio.h>
#define PERC_DIARIA 30.0
#define PERC_IMP 0.02
#define PERC_SOLTEIRO 0.03
#define PERC_CASADO 0.05
int main(){
	int dias;
	float vb,vl,vi,bonus,Perbonus;
	char c;
	printf("\nENtre com Número de dias trabalhados: ");
	scanf("%d",&dias);
	getchar();
	printf("\nCódigo da situação s para solteiro e c para casado");
	printf("\nDigite o código: ");
	scanf("%c",&c);
	bonus = (dias > 20) ? ((c=='c') ? PERC_SOLTEIRO : PERC_CASADO):0;
	Perbonus=dias*PERC_DIARIA*bonus;
	vb=dias*PERC_DIARIA*bonus;
	vi=vb*PERC_IMP;
	vl=vb-vi;
	printf("\nPercentual recebido e : %.2f%%",bonus*100);
	printf("\nVAlor do bônus recebido e : R$%.2f",bonus);
	printf("\nvalor bruto recebido e :R$%.2f",vb);
	printf("\nvalor do imposto e :R$%.2f",vi);
	printf("\nvalor do liquido a se recebido e : R$%.2f",vl);
printf("\n\n");
return 0;
}
