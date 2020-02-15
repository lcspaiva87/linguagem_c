#include <stdio.h>
int main(){
     int mes,ano,dias;
     printf("\nDigite um numero  de 1 a 12:\n");
     scanf("%d",&mes);
     printf("Digite o ano:\n");
     scanf("%d",&ano);
     	switch(mes){
     	case 1:
     		printf("Janeiro\n");
     break;
     case 2:
     		printf("Fervereiro\n");
     break;
     case 3:
     		printf("Marçoo\n");
     break;
     case 4:
     		printf("Abril\n");
     break;
     case 5:
     		printf("Maio\n");
     break;
     case 6:
     		printf("Junho\n");
     break;
     case 7:
     		printf("Julho\n");
     break;
     case 8:
     		printf("Agosto\n");
     break;
     case 9:
     		printf("Setembro\n");
     break;
     case 10:
     		printf("Outubro\n");
     break;
     case 11:
     		printf("Novembro\n");
     break;
     case 12:
     		printf("Dezembro\n");
     break;
     default:
     		printf("Opção invalida!\n"); 
   }
   	if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12);
   		dias=31;
   	if(mes==4||mes==6||mes==9||mes==11)
   		dias=30;
   	if(mes==2&&(ano%4==0&&ano%100!=0&&ano%400!=0))
   		dias=29;
   	if(mes==2&&ano%4!=0)
   		dias=28;
   		printf("Numero de dias do mes: %d",dias);
   		printf("\nO ano : %d",ano);
   	if (ano%4==0&&ano%100!=0&&ano%400!=0)
   		printf("\nAno e bisexto");
   	if (ano%4!=0)
   		printf("\nAno Não bisexto");
			printf("\n\n");
   return 0;

}

