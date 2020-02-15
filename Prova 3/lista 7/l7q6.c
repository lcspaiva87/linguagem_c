#include <stdio.h>

float mediaA(float nota1, float nota2);
float mediaP(float nota1, float nota2);

int main(){
	float n1, n2, media, mediaG;
	int qt, i;
	char op;
	
	do {
		printf("\nA\t-\tMedia Aritmetica");
		printf("\nB\t-\tMedia Ponderada\n");
		printf("\nEscolha uma opcao:\n");		
		op = getchar();
		getchar();
		
		if(op == 'a' || op == 'A'){
			break;
		}else if(op == 'b' || op == 'B'){
			break;
		}else {
			
			printf("\nOpcao Invalida!\n");
		}
	}while(1);
	

	printf("\nInforme agora a quantidade de Alunos:\n");
	scanf("%d",&qt);
	
	mediaG = 0;
	for(i = 0; i < qt; i++){
		printf("\nInforme a nota 1 do aluno %d:\n",i+1);
		scanf("%f",&n1);
		printf("\nInforme a nota 2 do aluno %d:\n",i+1);
		scanf("%f",&n2);
		
		
		printf("\n********** DADOS DO ALUNO %d ***********\n",i+1);
		if(op == 'a' || op == 'A'){
			media = mediaA(n1, n2);
			printf("\nA media Aritmetica do Aluno %d: %.1f\n",i+1, media);
		}else {
			media = mediaP(n1, n2);
			printf("\nA media Ponderada do Aluno %d: %.1f\n",i+1, media);
		}
				
		if(media >= 5.0){
			printf("\nSituaÃ§Ã£o do Aluno %d: Aprovado\n",i+1);
		}else if(media < 5.0){
			printf("\nSituaÃ§Ã£o do Aluno %d: Reprovado\n",i+1);
		}
			
		mediaG + media;
	}
	
	mediaG / qt;
	
	printf("\nMedia Geral da Turma: %.1f\n",mediaG);


	printf("\n\n");
	return 0;
}
float mediaA(float n1, float n2){
	float media;
	
	media = (n1 + n2) / 2;
			
	return media;
}

float mediaP(float n1, float n2){
	float mediap;
	
	mediap = ((2 * n1) + (3 * n2)) / 5;
	
	return mediap;
}


