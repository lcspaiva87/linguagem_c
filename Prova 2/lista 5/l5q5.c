#include <stdio.h>
int main()
{
	int dia;
	char ch='\0';
  	while(ch!='x'&&ch!='X'){
 		printf("\nDigite um numero de 1 Ã  7:\n");
 		scanf("%d",&dia);
		getchar();
   		switch (dia){
  			case 1:
				printf("Domingo\n");
			break;
			case 2:
				printf("Segunda\n");
			break;
			case 3:
				printf("Terça\n");
			break;
			case 4:
				printf("Quarta\n");
			break;
  			case 5:
				printf("Quinta\n");
			break;
  			case 6:
 				printf("Sexta\n");
			break;
  			case 7:
 				printf("Sabado\n");
			break;
 			default:
 				printf("Numero de dia invalido\n");
	}
 				printf("Tecle 'enter' para continuar e 'x' para fechar:\n");
				ch=getchar();
}
return 0;
}
