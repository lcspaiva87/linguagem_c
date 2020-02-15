#include <stdio.h>
int main(){
	int i,pe,ida,cad,cc,ca,cm,ci;
	float mad,mc,ma,mi,mg,mm;
	
	printf("\nEntre com quant.. de pessoas: ");
	scanf("%d",&pe);
	cc=0;
	ca=0;
	cm=0;
	mc=0;
	mi=0;
	ma=0;
	mad=0;
	cad=0;
	ci=0;
	mm=0;
	for(i=1;i<=pe;i++){
		printf("\nEntre com a idade da %d: ",i);
		scanf("%d",&ida);
		mg=mg+pe;
	
	if(ida>=18){
	mad=mad+ida;
	cad++;
		printf("\nAdulto");
			if(ida>=60){
				mi=mi+ida;
				ci++;
				printf("\nIdoso");				
	}	
		}
		
	else{
		printf("\nMenor de idade");
		mm=mm+ida;
		cm++;
		if(ida<12){
		mc=mc+ida;
		cc++;		
			printf("\nCriança");
		}
			}
		if(ida>=12&&ida<=17){
		ma=ma+ida;
		ca++;
			printf("\nAdolescentes");
	}
		}
	mg=mg/pe;
printf("\n Quantidade de adultos: %d",cad);
	   printf("\n Quantidade de idosos: %d",ci);
	   printf("\n Quantidade de menores de idade: %d",cm);
	   printf("\n Quantidade de criças: %d",cc);
	   printf("\n Quantidade de adolescentes: %d",ca);
	   
	if(ca!=0) {
		printf("\n Media de idade dos Adultos: %.1f",mad/cad);
	} 
	else {
		printf("\n Media de idade dos Adultos: nao se aplica. ");
	}
	if(ci!=0) {
		printf("\n Media de idade dos Idosos: %.1f",mi/ci);
	 } 
	else {
		printf("\n Media de idade dos Idosos: nao se aplica. ");
	}
	if(cm!=0) {
		printf("\n Media de idade dos Menores de idade: %.1f",mm/cm);
	} 
	else {
		printf("\n Media de idade dos Menores de idade: nao se aplica. ");
	}
	if(cc!=0) {
		printf("\n Media de idade das Crianças: %.1f",mc/cc);
	} 
	else {
		printf("\n Media de idade dos Crianças: nao se aplica. ");
	}
	if(cad!=0) {
		printf("\n Media de idade dos Adolescentes: %.1f",ma/ca);
	} 
	else {
		printf("\n Media de idade dos Adolescentes: nao se aplica. ");
	}
	
	   
	printf("\n Media de idade das pessoas da pesquisa: %.1f",mg);
	printf("\n\n");
	return 0;
}
	
	


		
		
