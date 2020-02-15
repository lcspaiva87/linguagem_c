#include <stdio.h>
int main(){
	int i,num;
	
	//Entre com um numero inteiro
	printf("\nEnTRE COM UM NÚMERO DO TECLADO: ");		
	scanf("%d",&num);
	//testando se o numero e multiplo de 2 e 3 se for verdadeiro ira imprimir os 20 número subsequente
	if(num%2==0&&num%3==0){
		for(i=1;i<=20;i++)
			printf("\nNúmero e múltiplo de 2 e 3 %d",num+i);	
				
}		
	// ira imprimir os 20 antecedentes se não for multiplo de 2 e 3		
	else{
		for(i=1;i<=20;i++){
			printf("\nNúmero não e multiplo de 2 e 3 %d ",num-i);
	}
}
	printf("\n\n");
	return 0;
}
