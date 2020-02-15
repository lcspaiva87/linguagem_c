//Refaça o programa da questão 5, utilizando somente a estrutura de comando switch/case
#include <stdio.h>
int main(){
	int dia;
	printf("\nEntre com um numero do dia da semana 1 a 7: ");
	scanf("%d",&dia);

switch(dia){

		case 1: 
				printf("\n Domingo "); 
		break;
      case 2: 
				printf("\n Segunda "); 
		break;
      case 3: 
				printf("\n TerÃ§a ");
 		break;
      case 4:
				 printf("\n Quarta "); 
		break;
      case 5: 
				printf("\n Quinta "); 
		break;
      case 6: 
				printf("\n Sexta "); 
		break;
      case 7: 
				printf("\n Sabado "); 
		break;
		
default:
         printf("\n Numero de dia nao valido. ");
      }
   return 0;
}
