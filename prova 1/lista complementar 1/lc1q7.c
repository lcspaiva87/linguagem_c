//Faça um programa em C que leia o número de dias trabalhados por um empregado. A diária
//do empregado é de R$ 30,00. Se o empregado trabalhar mais de 20 dias tem direito a um
//bônus de 5% sobre o total de diárias.
//a) Calcule o valor do bônus recebido.
//b) Calcule o valor bruto recebido (valor total de diárias + bônus).
//c) Calcule o valor do imposto, sabendo que são descontados 2% de imposto.
//d) Calcule o valor líquido recebido.
#include <stdio.h>
#define PERC_DIARIA 30.0
#define PERC_IMP 0.02
#define PER_BONUS 0.05
int main(){
	int dias;
	float vb,vl,vi,bonus;
	printf("\nENtre com Número de dias trabalhados: ");
	scanf("%d",&dias);
	bonus = (dias>20) ? dias*PERC_DIARIA*PER_BONUS:0;
	vb=dias*PERC_DIARIA;
	vi=vb*PERC_IMP;
	vl=vb-vi;
	printf("\nVAlor do bônus recebido e : R$%.2f",bonus);
	printf("\nvalor bruto recebido e :R$%.2f",vb*bonus);
	printf("\nvalor do imposto e :R$%.2f",vi);
	printf("\nvalor do liquido a se recebido e : R$%.2f",vl);
printf("\n\n");
return 0;
}
