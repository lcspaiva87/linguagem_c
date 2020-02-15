#include <stdio.h>
int main(){
	int i;
	printf("\nImpreção dos pares de 1 a 100:");
	for(i=0;i<=100;i++){
		if(i%2==0)
			printf("%d ",i);
	}	
	
		
	printf("\nImpreção dos impares de 1 a 100:");
	for(i=0;i<=100;i++){
		if(i%2!=0)
			printf("%d ",i);
	}
		printf("\n\n");
		return 0;
}
