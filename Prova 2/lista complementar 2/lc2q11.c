#include <stdio.h>
int main(){
	float ali,imp;
	double sm;
	printf("\nEntre com seu salario mensal: ");
	scanf("%lf",&sm);
	
	if(sm<=1.637,11){
		ali=0.0;
	}
	 if(sm>=1.637,12 && sm<= 2.453,50){
			ali=7.5;
	}
	 if(sm>=2.453,51&& sm<=3.271,38){
		ali=15.0;
	}
	 if(sm>=3.271,39&& sm<=4.087,65){
		ali=22.5;
	}
	 if(sm>4.087,65){
			ali=27.5;
	}
	
	imp=(ali*sm)/100;
printf("\nValor imposto R$ %.2f",imp);
printf("\nValor do aliquota R$ %.2f",ali);
printf("\n\n");
return 0;
}
