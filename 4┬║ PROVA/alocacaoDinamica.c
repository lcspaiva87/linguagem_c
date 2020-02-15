Alocação Dinamica de memoria:

-Função Malloc : Aloca memória							//SINTAXE: void *malloc(quantidade_de_bytes) 
-Função Free : Desaloca memória							//x=sizeof(float); >>retorna pra x o tamanho da variavel, no ex float retorna 4.
-Função <stdlib.h>

Ex: Alocar memoria p armazenar notas de n alunos:
//trecho de codigo:

float *p; //1 float ocupa 4 bytes, no caso ex 10 alunos seriam 40 bytes
p=(float*) malloc(n*sizeof(float));

/* 1) Faça um programa em c q leia as notas de n alunos e:
a)imprima a média aritmetica das notas.
b)imprima a maior nota. Deve determinar por uma função.
c)ordene as notas em ordem crescente.
d)faça uma função q inverta o vetor, e imprima pelo main. */

#include <stdio.h>
#include <stdlib.h>
float maior(float *p,int n);
void ordenaCrescente(float *p,int n);
void inverterPonteiro(float *p,int n);

//main
int main() {
	int i,n;
	float m,*p;
		printf("\n Entre com a quantidade de alunos: ");
		scanf("%d",&n);
		//alocação dinamica
		p=(float*) malloc(n*sizeof(float)); //a funçao malloc vai tentar alocar o tamanho de memoria q vc precisa
		if(p==NULL) { //NULL= todo em maiusculo, retorna ponteiro nulo pq n foi possivel aloca memoria.
			printf("\n ERRO-Memoria insuficiente ");
			exit(1); //exit p sair por causa da memoria insuficiente, usado tb p sair do programa.
		}
		for(i=0;i<n;i++) {
			printf("\n Nota do %d Aluno: ",i+1);
			scanf("%f",&p[i]); //depois da memoria alocada o ponteiro funciona como vetor
		}
		m=0.0;
		for(i=0;i<n;i++)
			m=m+p[i];
		m=m/n;
		printf("\n Media da turma: %.1f",m);
		//maior
		m=maior(p,n);
		printf("\n Maior nota: %.1f",m);
		//ordenação
		for(i=0;i<n;i++)
			printf("\n Nota %d: %.1f",i+1,p[i]);
			
		free(p); //p desaloca a memoria
		return 0;
}		
		
//função do maior valor:		
float maior(float *p,int n) { //essa funçao tanto aceita vetor, como ponteiro
	int i;
	float aux;
		aux=p[0];
		for(i=1;i<n;i++)
			if(p[i]>aux)
				aux=p[i];
			return aux;
}

//funçao ordenaCrescente
void ordenaCrescente(float *p,int n) {
	int i,j;
	float aux;
		for(i=0;i<n-1;i++)
			for(j=i+1;j<n;j++)
				if(p[i]>p[j]) {
					aux=p[i];
					p[i]=p[j];
					p[j]=aux;
				}
}
//funçao p inverter o vetor
void inverterPonteiro(float *p,int n) {
	int i,n;
	char aux;
	n=strlen(*p);
		for(i=0;i<n/2;i++)
			aux=p[i];
			p[i]=p[n-1-i];
			p[n-1-i]=aux;
		}
}
