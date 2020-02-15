#include <stdio.h>
int main()
{
	int dia;
	char ch='\0';
	  do{
			printf("\nDigite um nÃºmero de 1 Ã  7:\n");
			scanf("%d",&dia);
			getchar();
				switch (dia)
			{
				case 1:
					printf("Domingo\n");
				break;
				case 2:
					printf("Segunda\n");
				break;
				case 3:
					printf("TerÃ§a\n");
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
				 printf("Tecle 'enter'para continuar e 'x' para fechar:\n");
		ch=getchar();
		}while (ch!='x'&&ch!='X');
return 0;
}
