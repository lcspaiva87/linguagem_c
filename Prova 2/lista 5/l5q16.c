#include <stdio.h>
int main(){
	int p,i,divisor;
	divisor=0;
	printf("Entre com um número inteiro:\n");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
			if(p%i==0)
			divisor=divisor+1;
	}	
			if(divisor==2)
				printf("%d e número primo!\n\n",p);	
			else	
				printf("%d não e um número primo!\n\n",p);
return 0;
}		
