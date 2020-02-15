#include <stdio.h>
int main(){
	int a,b,aux;
	printf("\nEntre com numero a ");
	scanf("%d",&a);
	printf("\nEntre com numero b ");
	scanf("%d",&b);
	aux=a;
	a=b;
	b=aux;
	printf("\nnovo valor de a e %d novo valor de B e %d",a,b);
	return 0;
}
