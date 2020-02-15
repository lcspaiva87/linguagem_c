#include <stdio.h>
#define PERC_DIARIA 20.0
#define PERC_IMP 0.08
int main (){
	int dias;
	float vl,vb,vi;
	printf("\nEntre com número de dias trabalhados: ");
	scanf("%d",&dias);
	vb=dias*PERC_DIARIA;
	vi=vb*PERC_IMP;
	vl=vb-vl;
	printf("\nValor liquido a ser pago é: R$%.2f",vl);
	
printf("\n\n");
return 0;
}
