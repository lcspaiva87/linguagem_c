#include <stdio.h>
int main(){
	int i,aluno;
	float m,n1,n2;
		printf("\nEntre com número de alunos: ");
		scanf("%d",&aluno);
		
		i=1;
		while(i<=aluno){
			printf("\nEntre  com a Primeira nota %d: ",i);
			scanf("%f",&n1);
			
			printf("\nEntre com a segunda nota %d: ",i);
			scanf("%f",&n2);

			m=(n1+n2)/2;
			
		
			
			if(m>=5.0)
				printf("\nAluno %d:Média %.2f Aprovado",i,m);
			
			else
				printf("\nAluno %d:Média %.2f Reprovado",i,m);
			
			
			i++;
		}
		
	printf("\n\n");
	return 0;
	}
