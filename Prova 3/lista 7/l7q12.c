#include <stdio.h>

void ANO(int ano);

int main(){
	int ano;
	char x ;
	
	while(1){
		printf("\nInforme o ano:\n");
		scanf("%d",&ano);
		
		ANO(ano);
		
		getchar();
		printf("\nTecle <ENTER> para continuar ou \'q\' para Sair:");
		x = getchar();
		if(x=='q')
			break;
	}

	printf("\n\n");
	return 0;
}


void ANO(int ano){
	if((ano%4 == 0 && ano%100 != 0) || (ano%400 == 0)){
		printf("\nAno Bissexto\n");
	}else {
		printf("\nAno nÃ£o Bissexto\n");
	}
}


