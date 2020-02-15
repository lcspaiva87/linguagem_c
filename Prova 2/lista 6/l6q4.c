#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c,x1,x2,delta;
	printf("\nDigite um valor diferente de zero para o coeficiente 'a' da equação:\n");
	scanf("%d",&a);
	printf("Digite um valor para o coeficiente 'b' da equação:\n");
	scanf("%d",&b);
	printf("Digite um valor para o coeficiente 'c' da equação:\n");
	scanf("%d",&c);
		if(a==0)
		{
			printf("Digite um novo valor para o coeficiente 'a' da equaÃ§Ã£o:\n");
			scanf("%d",&a);
		}
			delta=b*b-(4*a*c);
			if(delta<0){
				printf("A equação não possui raizes reais!\n");
			}	
			else if(delta==0){
				x1=x2;
			}
			   x1=-b+sqrt(delta)/2*a;
				x2=-b-sqrt(delta)/2*a;
				printf("Delta:\n%d",delta);
				printf("\nAs raizes da equaÃ§Ã£o sÃ£o (%d,%d)",x1,x2);	
				printf("\n\n");				
return 0;
}	

