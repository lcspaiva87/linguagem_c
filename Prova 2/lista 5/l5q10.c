#include <stdio.h>
int main(){
	char i,op,ch='\0';
	float num1,num2;
		for(ch='\0';ch!=27;)
	{
		printf("Digite um dos operadores aritimetica (+,-,* ou /):\n");
		scanf("%c",&op);
		printf("Digite o primeiro operando:\n");
		scanf("%f",&num1);
		printf("Digite o segundo operando:\n");
		scanf("%f",&num2);
		getchar();		
			if(op=='+')
			{
				printf("%.2f%c%.2f=%.2f\n",num1,op,num2,num1+num2);
			}
			else if(op=='-')
			{
				printf("%.2f%c%.2f=%.2f\n",num1,op,num2,num1-num2);
			}	
			else if(op=='*')
			{
				printf("%.2f%c%.2f=%.2f\n",num1,op,num2,num1*num2);
			}
			else if(op=='/')
			{
				printf("%.2f%c%.2f=%.2f\n",num1,op,num2,num1/num2);
			}
			else
			{
				printf("Operador invalida\n");
			}	
				printf("tecle enter para continuar e esc para sair:\n");	
	         ch=getchar();
					if(ch==27)
					break;
	}		
return 0;
}
