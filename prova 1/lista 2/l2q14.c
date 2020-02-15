//Escreva um programa em C que solicite um determinado número de segundos e, em seguida, indique quantas horas, minutos e segundos esse valor representa, dando o resultado
//no formato hh:mm:ss. Por exemplo: 3620 segundos equivalem a 01:00:20 (uma hora, zero minutos e vinte segundos).
#include <stdio.h>
int main(){
	int mm,ss,hh;
	printf("\nprogama converde segundos em horas");
	printf("\nDigite os segundos: ");
	scanf("%d",&ss);
	hh=ss*3600;
	mm=(ss%3600)/60;
	ss=(ss%60);
	printf("\nO valor de segundos converditos para hh:mm:ss e %d:%d:%d",hh,mm,ss);
printf("\n\n");
return 0; 
}
