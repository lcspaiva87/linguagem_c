#include <stdio.h>
#define tam 3
int main(void){
   float v[tam];
	int i, j, t;
   //Ler o vetor
   
   for( i =0;i<tam-1;i++){
      for( j=i+1;j<tam;j++){
         if(v[i]>v[j]){
            t = v[i];
            v[i] = v[j];
           	v[j] = t;
				printf("%f", v[j]);
         }
      }
	}
	
}   
   //1000 numero para casa
