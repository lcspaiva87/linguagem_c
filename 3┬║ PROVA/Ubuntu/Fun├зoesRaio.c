#include <stdio.h>
#define PI 3.14
float raio(float r);

int main() {

	float vr;

	printf("\nEntre com o valor do raio\t");
	scanf("%f",&vr);
	
	
	printf("\nValor da área:%7.2f\n\n",raio(vr));
	
	return 0;
}
float raio(float r){

	float area;
	
	area = (4*PI)*(r*r);
	
	return area;
}
