#include <stdio.h>
int main (){
	int dia;
	char opc;
	float total,diaria;

		   
	printf("\ndigite tipo de quarto: ");
	opc=getchar();
	
	
	if(opc='a'|| opc=='A'){
		printf("\nPresidencial");
	diaria=3000;
	}

	else if(opc='b'|| opc=='B'){
		printf("\nExecutivo");
	diaria=900;
	}
	
	else if(opc='c'|| opc=='C'){
		printf("\nNormal");
	diaria=300;
	}


	else {
	getchar();
	printf("\nOpção invalida!");
	printf("\ndigite tipo de quarto: ");
	opc=getchar();
		if(opc='a'|| opc=='A'){
			printf("\nPresidencial");
				diaria=3000;
	}

	else if(opc='b'|| opc=='B'){
		printf("\nExecutivo");
			diaria=900;
	}
	
	else if(opc='c'|| opc=='C'){
		printf("\nNormal");
			diaria=300;
		}
	
	}
	printf("\nEntre com quant. de dias: ");
	scanf("%d",&dia);
	
	total=dia*diaria;
	printf("\nDiaria R$ %.2f",diaria);
	printf("\nNumero de dias: %d",dia);
	printf("\nTotal a pagar: R$%.2f",total);
	printf("\n\n");
	return 0;
}
