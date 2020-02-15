#include <stdio.h>
#define salario 50.25
#define bonus1 0.20
#define bonus2 0.30
#define IMP 0.10
int main(){
	int dia;
	float vb,vl,vi,grati,bonus;
	printf("\nEntre com numero de dias trabalhado: ");
	scanf("%d",&dia);
	
	if(dia==10){
		grati=dia*salario;
	}
	
	else if(dia>=20){
		grati=dia*salario*bonus1/100;
	}
	
	else if(dia>=21){
		grati=dia*salario*bonus2/200;
	}

	vb= dia*salario+grati;
	vi=vb*IMP/100;
	vl=vb-vi;
	printf("\nGratificação R$ %.2f",grati);
	


	printf("\n\n");
	return 0;
}
