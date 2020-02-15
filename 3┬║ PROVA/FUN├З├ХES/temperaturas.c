/* Converte temperatura de Celsius para Fahrenheit */

#include <stdio.h>

float converte_temperatura(float temp_cel); /* protótipo da função média aritmética */

int main() {

	int i, N;
	float temp_cel, media_temp_c, media_temp_f;
	char ch;

	/* Limpa a tela */
	system("clear");

	ch = '\0';
	while(ch!='q') { /* laço de repetição */
		/* Entrada de dados */
		printf("\n***** Calcula a conversão de temperatura em Celsius para Fahrenheit *****");
		printf("\n\n*** Entre com as temperaturas em graus Celsius ***");
		printf("\nEntre com o número de temperaturas: ");
		scanf("%d", &N);

		/* Laço de cálculo da média das temperaturas */
		media_temp_c = 0.0;
		for(i=0; i < N; i++)
		{
			printf("Entre com a temperatura %d: ", i+1);
			scanf("%f",&temp_cel);

			media_temp_c = media_temp_c + temp_cel;
		}

		/* Calcula a média final */
		media_temp_c = media_temp_c/N;

		/* Converte a temperatura para graus Fahrenheit */
		media_temp_f = converte_temperatura(media_temp_c);

		/* Imprime as médias da temperaturas */
		printf("\n\n*** Resultados ***");
		printf("\nMédia em graus Celsius   : %10.2f", media_temp_c);
		printf("\nMédia em graus Fahrenheit: %10.2f", media_temp_f);

		/* Analisa a média */
		if( media_temp_c < 18.0 )
			printf("\nEstá frio");
		else if( (media_temp_c >= 18.0)&&(media_temp_c <= 20.0) )
			printf("\nTemperatura agradável");
		else if( media_temp_c > 20.0 )
			printf("\nEstá quente");

		printf("\n\nSe desejar continuar a calcular médias de temperaturas tecle ENTER, senão tecle q para sair: ");
		getchar(); /* limpa buffer do teclado */
		scanf("%c", &ch);
	}

	printf("\n\n");

	return 0;

}


/* Função que converte temperaturas de graus Celsius para graus Fahrenheit */
float converte_temperatura(float temp_cel)
{
	float temp_fah;

	temp_fah = (temp_cel*9.0)/5.0 + 32.0;

	return temp_fah;
}

