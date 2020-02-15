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

	
swith(dia){
		case 1:	
			printf("\nDomingo"); 
		break;
		
		case 2:	
			printf("\nSegunda"); 
		break;
		
		case 3:	
			printf("\nTerça"); 
		break;
		
		case 4:	
			printf("\nQuarta"); 
		break;
		
		case 5:	
			printf("\nQuinta"); 
		break;
		
		case 6:	
			printf("\nSexta"); 
		break;
		
		case 7:	
			printf("\nSábado"); 
		break;
		
		default:
			printf("\nNúmero de dia não válido");
}
		printf("\n\n");
		return 0;
}
