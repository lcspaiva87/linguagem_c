#include <stdio.h>
#include <math.h>
#define PI 3.14159265
double cos(double graus);
double sqrt(double numero);
double sin(double graus);
float SOMA(float n1, float n2);
float SUBTRACAO(float n1,float n2);
float MULTIPLICACAO(float n1, float n2);
float DIVISAO(float n1, float n2);

int main(){
	float operando1, operando2, soma, subtracao, multiplicacao, divisao;
	double cosseno, seno, graus, raiz, numero;
	char op;
	
	for(;;){		
		printf("\nA - SOMA");
		printf("\nB - SUBTRACAO");
		printf("\nC - MULTIPLICACAO");
		printf("\nD - DIVISAO");
		printf("\nE - COSSENO");
		printf("\nF - SENO");
		printf("\nG - RAIZ QUADRADA");
		printf("\nESC - Sair\n");
		printf("\nEscolha uma opÃ§Ã£o:\n");
		op = getchar();
		
		if(op == 27)
			break;
		
		switch(op){
			case 'a':
				printf("\nInforme o 1 Operando:\n");
				scanf("%f",&operando1);
				printf("\nInforme o 2 Operando:\n");
				scanf("%f",&operando2);
				soma = SOMA(operando1, operando2);
				printf("\nA soma dos Operandos: %.2f\n",soma);
				break;
			case 'b':
				printf("\nInforme o 1 Operando:\n");
				scanf("%f",&operando1);
				printf("\nInforme o 2 Operando:\n");
				scanf("%f",&operando2);
				subtracao = SUBTRACAO(operando1, operando2);
				printf("\nA Subtracao dos Operandos: %.2f\n",subtracao);
				break;
			case 'c':
				printf("\nInforme o 1 Operando:\n");
				scanf("%f",&operando1);
				printf("\nInforme o 2 Operando:\n");
				scanf("%f",&operando2);
				multiplicacao = MULTIPLICACAO(operando1, operando2);
				printf("\nA Multiplicacao dos Operandos: %.2f\n",multiplicacao);
				break;
			case 'd':
				printf("\nInforme o 1 Operando:\n");
				scanf("%f",&operando1);
				printf("\nInforme o 2 Operando:\n");
				scanf("%f",&operando2);
				if(operando2 > 0){
					divisao = DIVISAO(operando1, operando2);
					printf("\nA Divisao dos Operandos: %.2f\n",divisao);
				}else {
					printf("\nO divisor n2 e menor do que 0!\n");
				}
				break;
			case 'e':
				printf("\nInforme o Grau do Angulo:\n");
				scanf("%lf",&graus);
				cosseno = cos(graus * (PI / 180));
				printf("\nO Cosseno do grau %.2f e de: %.2f\n",graus, cosseno);
				break;
			case 'f':
				printf("\nInforme o Grau do Angulo:\n");
				scanf("%lf",&graus);
				seno = sin(graus * (PI/180));
				printf("\nO Seno do graus %.2f e de: %.2f\n",graus, seno);
				break;
			case 'g':
				printf("\nInforme o numero:\n");
				scanf("%lf",&numero);
				if(numero > 0){
					raiz = sqrt(numero);
					printf("\nA Raiz do Número informado e: %.2f\n",raiz);
				}else{
					printf("\nEntre com um número POSITIVO!\n");
				}
				break;
			default:
				printf("\nOpcao Invalida!\n");
				break;
		}
		getchar();	//melhor posicao para por o getchar para limpar o buffer
	}


	printf("\n\n");
	return 0;
}


float SOMA(float n1, float n2){
	return n1 + n2;
}

float SUBTRACAO(float n1, float n2){
	return n1 - n2;
}

float MULTIPLICACAO(float n1, float n2){
	return n1 * n2;
}

float DIVISAO(float n1, float n2){
	return n1 / n2;
}
double sin(double graus){
	return graus;
}
double sqrt(double numero){
	return numero;
}
double cos(double graus){
	return graus;
}

