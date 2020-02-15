#include <stdio.h>
int main(){
	int varBase,varAltura,varAtt;
	printf("\nEntre com o valor da base em metros: ");
	scanf("%d",&varBase);
	printf("\nEntre com valor da altura em metros: ");
	scanf("%d",&varAltura);
	varAtt=varBase*varAltura;
	printf("Area total:%d",varAtt);
	(varBase > varAltura) ? printf("\nBAse e maior que altura.") : printf("\nAltura er maior que base.");
	printf("\n\n");
return 0;
}
