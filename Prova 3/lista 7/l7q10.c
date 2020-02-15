#include <stdio.h>
#define diaria 50.25
#define imp 0.10
#define bonus1 0.20
#define bonus2 0.30
float liquido(int  dia);

int main(){
	int dia;
	char ch;
	float salario;
	while(1){
	
	
	printf("\nEntre com numero de dias Trabalhados:");
	scanf("%d",&dia);
	
	salario=liquido(dia);

	printf("\nSalario: %.2f",salario);
	
printf("\ntecle esc para sair ou enter para continuar: ");
	ch=getchar();
	
	if(ch==27)
	break;
	}
	printf("\n\n");
	return 0;
}
	
float liquido(int dia){
	float vl,vb,vi,b,per;
	if(dia>10 && dia<=20){
		per=bonus1;
	}
	else if(dia>20){
			per=bonus2;
	}
	else{
		per=0.0;
	}
	b=diaria*dia*(per/100);
	vb=diaria*dia+b;
	vi=vb*(imp/100);
	vl=vb-vi;
	return vl;
}
