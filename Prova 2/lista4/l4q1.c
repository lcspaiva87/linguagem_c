#include <stdio.h>
int main(){
	float n1,n2,m;	
	printf("\nEntre com a primeira nota do aluno: ");
	scanf("%f",&n1);
	
	printf("\nEntre com a segunda nota do aluno: ");
	scanf("%f",&n2);
	
	m = (n1+n2)/2;
	
	if(m>=5){
		printf("\nmédia:%.2f Aprovado",m);
	}
	
	if(m<5){
		printf("\nMédia:%.2f NÃO DESISTIREI E ESTUDAREI MAIS ",m);
	}
	
	printf("\n\n");	
	return 0;
}
	
