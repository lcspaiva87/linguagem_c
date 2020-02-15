/* Calcula a área de uma esfera, tendo como entrada seu raio */
#include <stdio.h>
#define PI 3.14 /* define valor para PI */
float area_esfera(float r); /* protótipo da função */
int main() {
   float raio, area;
   /* Entrada de dados */
	printf("\n\nEntre com o raio em metros da esfera: ");
	scanf("%f", &raio);
   /* Calcula as áreas através da função */
	area = area_esfera(raio);
   /* Imprime os resultados*/
	printf("\nÁrea da esfera em metros quadrados: %10.2f", area);
	printf("\n\n");
   return 0;
}
/* Função que calcula a área de uma esfera */
   float area_esfera(float r) {
	   float a;
      a = 4*PI*r*r;
      return a;
}
