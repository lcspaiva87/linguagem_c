/* Algoritmo de ordenação crescente/decrescente de elementos de um vetor */

ex para tres variaveis: a,b,c:

if(v[0]>v[1]) {
   aux=v[0];      //indice fixo
   v[0]=v[1];
   v[1]=aux;
}

if(v[0]>v[2]) {
   aux=v[0];
   v[0]=v[2];
   v[2]=aux;
}

if(v[1]>v[2]) {
   aux=v[1];
   v[1]=v[2];
   v[2]=aux;
}
//Algoritmo da Bolha assassina kkkkkkkkkkkkk

//Crescente
for(i=0;i<n-1;i++) 
   for(j=i+1;j<n;j++) 
      if(v[i]>v[j]) {
         aux=v[i];
         v[i]=v[j];
         v[j]=aux;
      }
      
//Decrescente
for(i=0;i<n-1;i++) 
   for(j=i+1;j<n;j++) 
      if(v[i]<v[j]) {
         aux=v[i];
         v[i]=v[j];
         v[j]=aux;
      }
