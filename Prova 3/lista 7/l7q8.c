#include <stdio.h>
void carc(char ch);
int main(){
	char x;
	
	while(1){
		printf("\nDigite um Caractere: ");
		x=getchar();
		getchar();
		
		
		
			printf("\nO caractere digitado: %c",x);
		
			printf("\nO Codigo ASCII: %d ",x);
		carc (x);
		if(x=='q'|| x=='Q'){
			break;
	}
		}
		
		printf("\n\n");
		return 0;	
}
void carc(char ch){

	if(ch >= 'A' && ch <= 'Z'){
		printf("\nLetra MaiÃºscula!");
		printf("\nLetra MinÃºscula Correspondente: %c\n",ch+32);
	}if(ch >= 'a' && ch <= 'z'){
		printf("\nLetra MinÃºscula!");
		printf("\nLetra MaiÃºscula Correspondente: %c\n",ch-32);
	}
	
}

