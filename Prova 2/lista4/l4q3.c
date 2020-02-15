/*Faça um programa em C que converta uma temperatura em graus Celsius para uma
temperatura em graus Fahrenheit. A temperatura de entrada é em Celsius. Imprima o valor
em graus Celsius e em graus Fahrenheit com 2 casas decimais. Se a temperatura estiver no
intervalo de 18 a 20 graus Celsius imprima: “Temperatura agradável”. Se a temperatura
estiver abaixo de 18 graus Celsius imprima: “Está frio”. Se a temperatura estiver acima de
20 graus Celsius imprima: “Está quente”. Utilize somente instruções if nas análises
T ×9
T c e
T f são,
condicionais. Utilize a fórmula:
T f = c 32 , em que
5
respectivamente, a temperatura em graus Celsius e a temperatura em graus Fahrenheit.*/
#include <stdio.h>
int main(){
	float tc,tf;
	printf("\nEntre com temperatura em graus celsius: ");
	scanf("%f",&tc);

	tf=(tc*9/5)+32;

	if(tc>=18 && tc<= 20){	
			printf("\nTemperatura agradavel ");
	}

	if(tc<18){
		printf("\nTemperatura esta fria ");
	}

	if(tc>20){
		printf("\nEstá quente ");
	}
		printf("\ngraus Celsius %.2f",tc);
		printf("\ngraus Fahrenheit %.2f",tf);
		printf("\n\n");
		return 0;
}
