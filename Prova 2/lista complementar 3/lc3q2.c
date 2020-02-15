#include <stdio.h>
int main(){
	int i;
	printf("\nMultiplos de 4 e 7: ");
	for(i=1;i<=100;i++){
	
		if(i%4==0 && i%7==0)
	
			printf(" %d ",i);
	}	

			printf("\nNão Multiplos de 4 e 7: ");
	 		
	for(i=1;i<=100;i++){
	
		if(i%4!=0 || i%7!=0)
	
	 		printf(" %d ",i);	
	 }		
	printf("\n\n");
	return 0;
}
