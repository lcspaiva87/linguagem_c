#include<stdio.h>
int main(){
	char op='\0';
	int ano;
		while(1)
	{
		printf("Informe um ano:\n");
		scanf("%d",&ano);
		getchar();
			if(ano%4==0&&ano%100!=0||ano%400==0)
			{
				printf("%d é um ano bisexto!\n",ano);
			}
			else
			{
				printf("%d não é um ano bisexto!\n",ano);
			}
				printf("Tecle enter para continuar ou q para sair:\n");
			op=getchar();
				if(op=='q')
				break;
}			
return 0;
}
