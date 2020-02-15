#include <stdio.h>
#define TAM 100 

float converte_temp(float tc);
float media(float v[], int N); 

int main() {

	int i, N;
	float temp_cel[TAM], temp_fah[TAM];
	float media_cel, media_fah;
	char ch1 = '\0';

	while(1) {
		printf("\n***** Faz a média e conversão de N temperaturas em Celsius e em Fahrenheit *****");
		printf("\n\nEntre com a quantidade de temperaturas em graus Celsius - no máximo %d: ",TAM);
		scanf("%d",&N);
		
		for(i=0; i < N; i++) {
			printf("\n\nEntre com a temperatura %d em graus Celsius: ", i+1);
			scanf("%f", &temp_cel[i]);
		
			temp_fah[i] = converte_temp(temp_cel[i]);

			printf("Temperatura %d em graus Celsius   : %10.2f", i+1, temp_cel[i]);
			printf("\nTemperatura %d em graus Fahrenheit: %10.2f", i+1, temp_fah[i]);
		}

		media_cel = media(temp_cel, N);
		media_fah = media(temp_fah, N);

		printf("\n\nA média das temperaturas em graus Celsius é: %10.2f", media_cel);
		printf("\nA média das temperaturas em graus Fahreiheit é: %10.2f", media_fah);
		printf("\n");

		printf("\nSe desejar continuar com novas temperaturas tecle <ENTER>, senão tecle q: ");
		getchar();
		scanf("%c",&ch1);
		if(ch1=='q')
				break;

	}

	printf("\n\n");
	return 0;
}

float converte_temp(float tc) {
	float tf;

	tf = (tc*9.0)/5.0 + 32.0;

	return tf;
}

float media(float v[], int N) {
	int i;
	float med; 

	med = 0.0;
	for(i=0; i < N; i++) {
		med = med + v[i];
	}

	med = med/N; 

	return med;		
}


