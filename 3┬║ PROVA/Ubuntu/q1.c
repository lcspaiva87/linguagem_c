#include <stdio.h>
int main () {
	int n,i,j,aux;
	float nota[100];
	
	printf("\nEntre com a quantidade de notas-No máximo 100 : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	
		printf("\nNota %d : ",i+1);
		scanf("%f",&nota[i]);
	}
	
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++){
			if(nota[i]>nota[j]){
				aux=nota[i];
				nota[i]=nota[j];
				nota[j]=aux;
			}
		}
	}
		
	
	for(i=0;i<n;i++)
		printf("\nNota %d : %.1f ",i+1,nota[i]);
	
	
	printf("\n\n");
	
	return 0;
}
	
