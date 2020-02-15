//Faça um programa em C que leia o número de dias trabalhados por um empregado. A diária do empregado é de R$ 30,00.
//a) Calcule o valor bruto recebido.
//b) Calcule o valor do imposto, sabendo que são descontados 2% de imposto.
//c) Calcule o valor líquido recebido.
#include <stdio.h>
#define PERC_DIARIA 30.0
#define PERC_IMP 0.02
int main(){
	int dias;
	float vb,vl,vi;
	printf("\nENtre com Número de dias trabalhados: ");
	scanf("%d",&dias);
	vb=dias*PERC_DIARIA;
	vi=vb*PERC_IMP;
	vl=vb-vi;
	printf("\nvalor bruto recebido e :R$%.2f",vb);
	printf("\nvalor do imposto e :R$%.2f",vi);
	printf("\nvalor do liquido a se recebido e : R$%.2f",vl);
printf("\n\n");
return 0;
}
