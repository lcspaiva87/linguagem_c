#include <stdio.h>
#define PERC_IMP_200 0.08
#define PERC_IMP    0.05
int main(){

	float vb,total,vl;
	printf("\nEntre com valor bruto a ser pago R$" ); 
	scanf("%f",&vb);
	total=(vb>=2000) ? vb*PERC_IMP_200 : vb*PERC_IMP;
	vl=vb-total;
	
	printf("\nValor em reais do imposto e R$%.2f",total);
	printf("\nO valor liquido após o desconto e R$%.2f",vl);
printf("\n\n");
return 0;
}
