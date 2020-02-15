#include <stdio.h>
int main (){
	char ope;
	int n1,n2,n3;
	printf("\nentre com uma operação: ");
	scanf("%c",&ope);

	printf("\nEntre com primeiro Numero: ");
	scanf("%d",&n1); 
 	 

	printf("\nEntre com segundo numero: ");
	scanf("%d",&n2);
 	switch(ope){
			case '+':
				printf("\n %d + %d = %d",n1,n2,n1+n2);
			break; 	
				
			case '-':
				printf("\n %d - %d = %d",n1,n2,n1-n2);
			break; 	

			case '*':
				printf("\n %d * %d = %d",n1,n2,n1*n2);
			break; 	


			case '/':
				printf("\n %d / %d = %d",n1,n2,n1/n2);
			break; 	



			default:
					printf("\nOperação invalida!");
	}
	printf("\n\n");
	return 0;
}
