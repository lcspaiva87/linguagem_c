//Algoritmo da inversão de um vetor...
// ex: quando n=6
for(i=0;i<n/2;i++) {
   aux=v[i];
   v[i]=v[n-1-i]; //quando i=0;
   v[n-1-i]=v[i];
