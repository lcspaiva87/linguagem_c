#include <stdio.h>
#define TAM 100
#define PI 3,14

void esfera(float r[],float a[], int n);

int main(){
	int i,n;
	float raio[Tam],area[Tam],a;
	printf("\nEntre com a quantidade de números: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\nENtre com o valor do raio %d: ",i+1);
		scanf("%f",&raio[i]);
}
	esfera(raio,area,n);

	printf("\n** Resultados ** ");
	for(i=0; i < n; i++) {
		printf("\nÁrea da esfera %d em metros quadrados: %10.2f", i+1, area[i]);
	}
	printf("\n\n");

	return 0;

}

void esfera(float r[], float a[], int n){
	int i;

	for(i=0; i < n; i++)
		a[i] = 4*PI*r[i]*r[i];
}

