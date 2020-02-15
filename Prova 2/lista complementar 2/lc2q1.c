/*Faça um programa em C que leia o número de dias trabalhados por um empregado. A diária
do empregado é de R$ 30,00. Se o empregado trabalhar mais de 20 dias tem direito a um
bônus de 5% sobre o total de diárias.
a) Calcule o valor do bônus recebido.
b) Calcule o valor bruto recebido. (Total de diárias + valor do bônus)
c) Calcule o valor do imposto, sabendo que são descontados 2% de imposto.
d) Calcule o valor líquido recebido.*/
#include <stdio.h>
#define salario 30.0
#define IMP 0.02
#define PERC_bonus 0.05
int main (){
	int dias ;
	float vi,vl,vb,bonus;
	printf("Entre com dias trabalhados: ");
	scanf("%d",&dias);
	bonus=(dias>20)? dias*salario*PERC_bonus:0;
	
	vb = dias *salario;
	vi = vb * IMP;
	vl = vb-vi;
	
	printf("\nValor Bruto R$:%.2f",vb);
	printf("\nValor Bruto recebido Total de diárias + valor do bônus R$:%.2f",bonus);
	printf("\nValor do Imposto R$:%.2f",vi);
	printf("\nValor liquido R$ %.2f",vl);
	printf("\n\n");
	return 0;
}
