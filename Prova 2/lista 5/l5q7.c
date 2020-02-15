#include <stdio.h>
int main(){
	char ch,c;
	ch='\0';
	while(ch!=27){
	printf("\nDigite um caractere: ");
	scanf("%c",&c);
	printf("\nCaractere lido: %c",c);
	printf("\nCódigo ASCII: %d",c);
	if(c>='a'&&c<='z'){
		printf("\nE uma letra minuscula %c",c);
		printf("\nLetra maiúscula correpondente %c",c-32);	
	}
	if(c>='A'&&c<='Z'){
		printf("\nE uma letra maiúscula %c",c);
		printf("\nLetra minuscula correpondente %c",c+32);	
	}
	printf("\nTecle enter para cotinuar e esc para sair:");
   			ch=getchar();
 	}
	return 0;
}
