#include <stdio.h>
float raio(float r);
int main(){
	float r,a;
	printf("\nEtre com o Ráio: ");
	scanf("%f",&r);
	
	a=raio(r);
	printf("\náre da esfera e : %.2f",a);
	printf("\n\n");
	return 0;
}
float raio(float r){
	float a;
	a=4*3.14*(r*r);
	return a;
}
