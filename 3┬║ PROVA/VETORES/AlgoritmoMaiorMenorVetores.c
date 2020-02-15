/* Algoritmo de busca do maior/menor valor em um vetor */

//Sem laço:

aux=v[0];
   if(v[1]>aux)
      aux=v[1];
   if(v[2]>aux)
      aux=v[2];
      
//Com laço: Maior valor:

aux=v[0];
for(i=1;i<n;i++) { //nunca colocar em zero...
   if(v[i]>aux)
      aux=v[i];
}

//Com laço: Menor valor:

aux=v[0];
for(i=1;i<n;i++) {
   if(v[i]<aux)
      aux=v[i];
}
