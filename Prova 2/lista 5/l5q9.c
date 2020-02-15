#include <stdio.h>
#define diaria 52.25
#define IMP 0.10
#define bonu1 0.20
#define bonu2 0.30
#define bonu3 0.00
int main(){
	int dia;
	float vb,vl,vi,grati;
	char ch;
	ch='\0';
	while(ch!=27){
	printf("\nEntre com os dias trabalhados: ");
	scanf("%d",&dia);
	if(dia<10){
	grati=(diaria*dia)+bonu3/100;
	}
	if(dia>10&&dia<=20){
		grati=(diaria*dia)+bonu1/100;
	}
	if(dia>20){
		grati=(diaria*dia)+bonu2/100;
	}

	vb=diaria*dia+grati;
	vi=vb*IMP/100;
	vl=vb-vi;
	printf("\nValor da gratificação R$ %.2f",grati);
	printf("\nValor bruto R$ %.2f",vb);
	printf("\nValor do Imposto R$ %.2f",vi);
	printf("\nValor liquido R$ %.2f",vl);
	printf("\nTecle enter para continuar ou esc para sair:\n");
				ch=getchar();
}
   	      
	printf("\n\n");
	return 0;
}
