#include <stdio.h>
int main(){
	int i,sPAR,SIMPAR,mPar,mImpa,cPar,cImpa;
	
	printf("\nSoma de todos os pares: ");
	sPAR=0;
	SIMPAR=0;
	cPar=0;
	cImpa=0;
	for(i=1;i<=100;i++){
		if(i%2==0){
			sPAR=sPAR+i;
			cPar++;
		
		}	
		
		else{
			SIMPAR=SIMPAR+i			
	}		cImpa++;
		
}	
	printf("%d",sPAR);
	
	printf("Soma dos impares%d",SIMPAR);
	

	printf("\nMEdia dos pares %d",(float),sPAR/mPar);
	printf("\nMEdia dos pares %f",(float),SIMPAR/mImpa);
	
		printf("\n\n");
		return 0;
}
