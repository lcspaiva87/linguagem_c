#include <stdio.h>
int main(){
float tc,tf;
	printf("\nEntre com temperatura em celsius:");
	scanf("%f",&tc);
	tf=(tc*9/5)+32;
	printf("A Temperatura em graus celsius é %.2f, em Fahrenheit %.2f",tc,tf);
	printf("\n\n");
	return 0;
}
