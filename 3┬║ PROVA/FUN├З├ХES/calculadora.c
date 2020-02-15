/* Simula uma calculadora simples de 6 operações  */

#include <stdio.h>
#include <math.h> /* biblioteca matemática, contém as funções cos(), sin() e sqrt() */

#define PI 3.14

double soma(double op1, double op2); /* protótipo de função */
double subtracao(double op1, double op2); /* protótipo de função */
double multiplicacao(double op1, double op2); /* protótipo de função */
double divisao(double op1, double op2); /* protótipo de função */
double cosseno(double ang); /* protótipo de função */
double seno(double ang); /* protótipo de função */
double raiz_quadrada(double num); /* protótipo de função */

int main() {

	double angulo, valor, operando1, operando2, numero;
	char op, ch;


	ch = '\0';
	for(;;) /* laço infinito, para que o programa execute de forma permanente. Sai com o comando break */
	{
		/* Limpa a tela */
		system("clear");

		do { /* laço de repetição das opções */
			printf("\n\nEntre com uma da opções abaixo: \n");
			printf("(A) - Soma\n");
			printf("(B) - Subtração\n");
			printf("(C) - Multiplicação\n");
			printf("(D) - Divisão\n");
			printf("(E) - Cosseno\n");
			printf("(F) - Seno\n");
			printf("(G) - Raiz quadrada\n");
			printf("Opção: ");
			scanf("%c",&op);
			if( (op != 'A')&&(op != 'B')&&(op != 'C')&&(op != 'D')&&(op != 'E')&&(op != 'F')&&(op != 'G') )
			{
				printf("\nOpção inválida\n");
				getchar();
			}
		} while ( (op != 'A')&&(op != 'B')&&(op != 'C')&&(op != 'D')&&(op != 'E')&&(op != 'F')&&(op != 'G') );

		switch (op)
		{
			case 'A':
				printf("\nEntre com o operando 1: ");
				scanf("%lf",&operando1);
				printf("Entre com o operando 2: ");
				scanf("%lf",&operando2);
				printf("Resultado: %lf + %lf = %.2lf",operando1,operando2,soma(operando1, operando2));
				break;
			case 'B':
				printf("\nEntre com o operando 1: ");
				scanf("%lf",&operando1);
				printf("Entre com o operando 2: ");
				scanf("%lf",&operando2);
				printf("Resultado: %lf - %lf = %.2lf",operando1,operando2,subtracao(operando1, operando2));
				break;
			case 'C':
				printf("\nEntre com o operando 1: ");
				scanf("%lf",&operando1);
				printf("Entre com o operando 2: ");
				scanf("%lf",&operando2);
				printf("Resultado: %lf X %lf = %.2lf",operando1,operando2,multiplicacao(operando1, operando2));
				break;
			case 'D':
				printf("\nEntre com o operando 1: ");
				scanf("%lf",&operando1);
				printf("Entre com o operando 2: ");
				scanf("%lf",&operando2);
				printf("Resultado: %lf / %lf = %.2lf",operando1,operando2,divisao(operando1, operando2));
				break;
			case 'E':
				printf("\nEntre com o ângulo em graus: ");
				scanf("%lf",&angulo);
				printf("Resultado: cos(%lf) = %.2lf",angulo,cosseno(angulo));
				break;
			case 'F':
				printf("\nEntre com o ângulo em graus: ");
				scanf("%lf",&angulo);
				printf("Resultado: sen(%lf) = %.2lf",angulo,seno(angulo));
				break;
			case 'G':
				while(1) {
					printf("\nEntre com um número positivo: ");
					scanf("%lf",&numero);
					if(numero < 0.0)
					{
						continue; /* continua o laço */
					}
					else
					{
						printf("Resultado: sqrt(%lf) = %.2lf",numero,raiz_quadrada(numero));
						break; /* interrompe o laço */
					}
				}
				break;				
		}

		printf("\n\nSe desejar sair tecle ESC, senão tecle ENTER: ");
		getchar();
		scanf("%c",&ch);
		if(ch == 27)
			break; /* interrompe o laço for infinito para parar a execução do programa */
		printf("\n");
	}

	printf("\n\n");

	return 0;

}


/* Função soma */
double soma(double op1, double op2)
{
	return (op1 + op2);
}


/* Função subtração */
double subtracao(double op1, double op2)
{
	return (op1 - op2);
}


/* Função multiplicação */
double multiplicacao(double op1, double op2)
{
	return (op1 * op2);
}


/* Função divisão */
double divisao(double op1, double op2)
{
	return (op1 / op2);
}


/* Função cosseno */
double cosseno(double ang)
{
	double radianos;

	radianos = (PI*ang)/180.0;

	return cos(radianos);
}


/* Função seno */
double seno(double ang)
{
	double radianos;

	radianos = (PI*ang)/180.0;

	return sin(radianos);
}


/* Função raiz quadrada */
double raiz_quadrada(double num)
{
	return sqrt(num);
}
