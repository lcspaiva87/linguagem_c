#define PERC1 0.05 /* define percentual de aumento para solteiros */
#define PERC2 0.10 /* define percentual de aumento para casados */

int main() {

	char op;
	int dias;
	float salario, grat = 0.0;

	/* Entrada de dados */
	printf("\n***** Este programa calcula a gratificação de um empregado de acordo com o seu estado civil *****\n");
	printf("\nEntre com uma das opÃ§Ãµes abaixo: ");
	printf("\nS - Solteiro");
	printf("\nC - Casado");
	printf("\nOpção: ");
	op = getchar();

	if( (op!='S'&&op!='s')&&(op!='C'&&op!='c') ) /* verifica se e uma opção valida */
	{
		printf("\nOpÃ§Ã£o de estado civil invÃ¡lido\n\n");
		return 1; /* faz o programa terminar */
	}
	printf("\nEntre com o numero de dias trabalhados: ");
	scanf("%d",&dias);
	printf("Entre com o salÃ¡rio: R$ ");
	scanf("%f",&salario);

=
	if( (dias>25)&&(salario<=3000.0) ) 
	{	
		if(op=='S'||op=='s') /* verifica se e casado */
			grat = salario*PERC1;					
		if(op=='C'||op=='c') /* verifica se e solteiro */
			grat = salario*PERC2;
	}

	
	salario = salario + grat;

	/* ImpressÃ£o de resultados */
	printf("\nGratificaÃ§Ã£o: R$ %10.2f",grat);
	printf("\nSalario     : R$ %10.2f",salario);
	(op=='S'||op=='s') ? printf("\nEstado civil: solteiro"):printf("\nEstado civil: casado");

	printf("\n\n");

	return 0;

}
