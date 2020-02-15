/*Faça um programa em C que leia o número de dias trabalhados por um empregado, um
código de situação e um código para o número de filhos. O código de situação pode assumir
2 valores: 'c' para casado e 's' para solteiro. O código para o número de filhos pode assumir
4 valores: 'a' para nenhum filho; 'b' para um filho; 'c' para dois filhos; e 'd' para três ou mais
filhos. A diária do empregado é de R$ 30,00. Se o empregado trabalhar mais de 20 dias tem
direito a um bônus sobre o total de diárias, que será de 5% se for casado, senão será de 3%.
Se o empregado tiver filhos, recebe adicional de salário família de R$ 15,00, R$ 30,00 e R$
45,00 respectivamente para um, dois e três ou mais filhos.
a) Calcule qual é o percentual recebido de bônus.
b) Calcule o valor do bônus recebido. O percentual do bônus só incide sobre as diárias.
c) Calcule o valor do salário família.
d) Calcule o valor bruto recebido. (Total de diárias + valor do bônus + salário família).
e) Calcule o valor do imposto, sabendo que são descontados 2% de imposto. O imposto não
incide sobre o salário família. Somente sobre (Total de diárias + valor do bônus).
f) Calcule o valor líquido recebido.*/
#include <stdio.h>
#define DIARIA 30.0
#define PERC_BONUS_CASADO 0.05
#define PERC_BONUS_CASADO 0.03
#define PER_IMP 0.02
int main() {

	int dias;
	float valorBruto,valorLiq,valorImp,valorBonus,percentualBonus,salarioFamilia;
	char codigo,codigoFilhos;
	//dias trabalhados
	printf("\n Entre com o numero de dias trabalhados: ");
	scanf("%d",&dias);
	getchar();
	//codigo civil
	printf("\n Entre com o codigo de sua situação: (C) - para casado, e (S) - para solteiro. ");
	codigo=getchar();
	getchar();
	// ler codigo de filhos
	printf("\n Entre com o codigo do numero de filhos:")
	codigoFilhos=getchar();
	
	if(dias>20 && codigo=='c')
		percentualBonus=PERC_BONUS_CASADO;
	else if(dias>20 && codigo=='s')
		percentualBonus=PERC_BONUS_SOLTEIRO;
	else
		percentualBonus=0.0;
		
	valorBonus=(dias*DIARIA)*percentualBonus;
	
	switch(codigoFilhos) {
		case 'a': salarioFamilia=0.0;
		break;
		case 'b': salarioFamilia=15.0;
		break;
		case 'c': salarioFamilia=30.0;
		break;
		case 'd': salarioFamilia=45.0;
		break;
		
	}
	
	valorBruto=dias*DIARIA+valorBonus+salarioFamilia;
	valorImp=(dias*DIARIA+valorBonus)*PERC_IMP;
	valorLiq=valorBruto-valorImp;
	
	printf("\n Valor diarias: R$ %8.2f",dias*DIARIA);
	printf("\n Valor percentual bonus: R$ %.1f%%",percentualBonus*100);
	printf("\n Valor bonus: R$ %8.2f",valorBonus);
	printf("\n Valor salario-familia: R$ %8.2f",salarioFamilia);
	printf("\n Valor bruto: R$ %8.2f",valorBruto);
	printf("\n Valor imposto: R$ %8.2f",valorImp);
	printf("\n Valor liquido: R$ %8.2f",valorLiq);
	printf("\n\n");
	return 0;
}

