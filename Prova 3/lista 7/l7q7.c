#include <stdio.h>
float con(float Tc);
int main(){
	float Tc,Tf,m;
	int n,i;
	char x;
	do{
		printf("\nEntre com quant.. de temperatura: ");
		scanf("%d",&n);
		m=0;
		for(i=0;i<n;i++){
				printf("\nInforme a temperatura %d: ",i+1);
				scanf("%f",&Tc);
					m=m+Tc;
		}
		m=m/n;
		Tf=con(Tc);
		printf("\nMédia das temperatura em Cº:%.2f",m);
				printf("\nA Media das Temperaturas em Fahrenheit: %.2f\n",Tf);
		
		if(m >= 18 && Tc <= 20){
			printf("\nTemperatura Agradavel: %.2f\n",m);
		}else if(m < 18){
			printf("\nTemperatura EstÃ¡ Quente: %.2f\n",m);
		}else if(m> 20){
			printf("\nTemperatura EstÃ¡ Frio: %.2f\n",m);
		}
		
		getchar();//Antes pois sera informados varios valores por conseguente o enter sera o ultimo
		printf("\n\nPara sair digite \'q\' ou <ENTER> para continuar:");
		x = getchar();
		if(x == 'q'){
			break;
		}
	
	}while(1);

	printf("\n\n");
	return 0;
}

float con(float Tc){
	float TF;
	
	TF = (Tc*9/5) + 32;
	
	return TF;
}


