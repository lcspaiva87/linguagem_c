#include <stdio.h>
int main(){
	int i;
		printf("\nCaracteres da tabela ASCII:\n");
			for(i=0;i<=127;i++){
				printf("%c  ",i);
		}
				printf("\n");
				printf("Numeros decimais:\n");
					for(i=0;i<=127;i++){
						printf("%d  ",i);
				}
						printf("\n\n");	
						printf("Numeros hexadecimal:\n");	
							for(i=0;i<=127;i++){
								printf("%x  ",i);
						}		
								printf("\n");		
return 0;
}
