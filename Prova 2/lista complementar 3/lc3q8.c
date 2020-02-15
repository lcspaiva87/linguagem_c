#include <stdio.h>
int main() {
	int i,alunos,cmaior=0,cmenor=0,c03=0,c3=0,c17=0,c7=0,c110=0;
	float n1,n2,n,mediageral,maiormedia,menormedia;
	mediageral=0.0;
	maiormedia=0.0;
	menormedia=10.0;
	//vai contar qauntidade de alunos.
	printf("\n Entre com o quantidade de alunos: ");
	scanf("%d",&alunos);
	//n  =  media dos alunos
	for(i=0;i<alunos;i++) {
		printf("\n Nota 1 do aluno %d: ",i+1);
		scanf("%f",&n1);
		printf("\n Nota 2 do aluno %d: ",i+1);
		scanf("%f",&n2);
		n = (n1+n2)/2;
		//media
		mediageral=mediageral + n;
		printf("\n Media do aluno %.1f :",n);
		 // media maior ou iqual a 6 aluno aprovado
		if(n>=6.0)  {
			printf("\n aluno %d : Aprovado",i+1);
			cmaior = cmaior+1;
		
		}
		else{
		// media menos que 6 aluno reprovadojy		else {
			printf("\n aluno %d : Reprovado",i+1);
			cmenor = cmenor+1;
		}
		if(n>=0&&n<=3)
			c03++;
		if(n==3)
		   c3++;
		if(n>=1&&n<=7)
			c17++;
		if(n==7)
		   c7++;
		if(n>=1&&n<=10)
			c110++;
				
		if(n>maiormedia)
			maiormedia = n;
				
		if(n<menormedia) 
			menormedia = n;
	}
	mediageral = mediageral/n; 
	
	printf("\n Quantidade de alunos com media maior ou igual a 6.0: %d",cmaior);
	printf("\n Quantidade de alunos com media menor a 6.0: %d",cmenor);
	printf("\n Media da turma: %.1f",mediageral);
	printf("\n Quantidade de notas de 0 a 3: %d",c03);
	printf("\n Quantidade de notas de 3: %d",c3);
	printf("\n Quantidade de notas de 1 a 7: %d",c17);
	printf("\n Quantidade de notas de 7: %d",c7);
	printf("\n Quantidade de notas de 1 a 10: %d",c110);
	printf("\n Maior media: %.1f",maiormedia);
	printf("\n Menor media: %.1f",menormedia);
	printf("\n\n");
	return 0;
}

