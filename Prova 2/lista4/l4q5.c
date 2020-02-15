/*Implemente um programa em C que tenha como entrada um número (1-7) que corresponde a
um dos dias da semana e imprima na tela o nome do dia correspondente (domingo, segunda,
terça, quarta, quinta, sexta, sábado). Se o número lido não estiver no intervalo 1-7, imprima:
“Número de dia não válido.”. Utilize nas análises condicionais somente estruturas de
comandos if, if-else ou if-else-if.*/
#include <stdio.h>
int main(){
	int dia;
	printf("\nEntre com um numero do dia da semana 1 a 7: ");
	scanf("%d",&dia);

	if(dia == 1){
			printf("\nDomingo");
	}
	
	else if(dia == 2){
			printf("\nSegunda");
	}
	
	
	else if(dia == 3){
			printf("\nTerça");
	}
	
	else if(dia == 4){
			printf("\nQUarta");
	}
	
	
	else if(dia == 5){
			printf("\nQuinta");
	}
	
	
	else if(dia == 6){
			printf("\nSexta");
	}
	
	
	else if(dia == 7){
			printf("\nSabado");
	}
	else {
		printf("\nNúmero de dia não válido.");
}
		printf("\n\n");
		return 0;
}
