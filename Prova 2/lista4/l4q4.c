/*Refaça o programa da questão 3, utilizando necessariamente a estrutura de comandos if-
else-if.*/
#include <stdio.h>
int main(){
	float tc,tf;
	printf("\nEntre com temperatura em graus celsius: ");
	scanf("%f",&tc);

	tf=(tc*9/5)+32;

	if(tc>=18 && tc<= 20){	
			printf("\nTemperatura agradavel ");
	}

	else if(tc<18){
		printf("\nTemperatura esta fria ");
	}

	else if(tc>20){
		printf("\nEstá quente ");
	}
		printf("\ngraus Celsius %.1f",tc);
		printf("\ngraus Fahrenheit %.1f",tf);
		printf("\n\n");
		return 0;
}
