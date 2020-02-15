struct Cliente{
	char nome[50] //string
	flaot credito;
	char logradouro[100];
};

1 ) void imprimeDadosLogradouro(struct Cliente*c,int n,char*log)
	int i,aux;
	aux=0;
	for(i=0;i<n;i++)
		if(strcmp(c[i].logradouro,log)==0){
			printf("\nNome %s\nCredito R$ %.2f\nLogradouro %s",c[i].nome,c[i].credito,c[i].logradouro);
		aux=1;
	}
	if(aux==0)
			printf("\nNenhum cliente mora no logradouro informado");
 }

//
02.
struct Cliente{
	char nome[50] //string
	flaot credito;
	char logradouro[100];
};

struct ClienteretornaClienteDeMaiorCredito(stuct Cliente*c, int n){
	int i;
	struct Cliente aux;
	aux=c[0];
	for(i=0;i<n;i++)
		if(c[i].credito>aux.credito)
			aux=c[i];
	return aux;

}

3)
#include <stdio.h>
#include <stdlib.>

struct Cliente{
	char nome[50] //string
	flaot credito;
	char logradouro[100];

int main(){
	int i,n;
	float m;
	struct Cliente *c;
	printf("\nQuantidade de clientes: ");
	scanf("%d"&n);
	c=(struct Cliente*)malloc(n*sizeof(struct Cliente));
}
	if(c==NULL){
		printf("\nErro memoria insuficiente");
		exit(0);



