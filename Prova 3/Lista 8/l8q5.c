#include <stdio.h>
#define tam 100 

void ordenaCrescente(int v[],int n);

int main(){
	int i,N[tam],qt;
	printf("\nENtre com quant.. de numeros: ");
	scanf("%d",&qt);

	for(i=0;i<qt;i++){
		printf("\nEntre com o numero %d: ",i+1);
		scanf("%d",&N[i]);
	}
	ordenaCrescente(N,qt);
	printf("\nApresenta vetor Ordenado Crescente:\n");
	for(i = 0; i < qt; i++){
		printf("\nN[%d] = %d",i,N[i]);
	}
	printf("\n\n");
	return 0;
}

void ordenaCrescente(int v[], int n){
	int i, y, aux;
	for(i = 0; i < n; i++)
		for(y = i+1; y < n; y++)
			if(v[i] > v[y]){
				aux = v[i];
				v[i] = v[y];
				v[y] = aux;
			}
}

