prova 3 correção:


quest 1=



void ordenaDecrescente(int v[],int n) {
	int i,j,aux;
	for(i=0;i<n+1;i++)
		for(j=i+1;j<n;j++)
			if(v[i]<v[j]) {
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}



quest 2=


int maiorValor(int v[],int n) {
	int i,aux;
	aux=v[0];
	for(i=1;i<n;i++)
		if(v[i]>aux)
			aux=v[i];

		return aux;
}



quest 3=


int quantidadeDeConsoantes(char str[]) {
	int cont, int i;
	for(i=0;str[i]!='\0';i++)
		if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) && (str[i]!='A' && str[i]!='E' && str[i]='I' && str[i]!='O' && str[i]!='U' && (str[i]!='a' && str[i]!='e' && str[i]='i' && str[i]!='o' && str[i]!='u'))
			cont++;
	return cont;
}



quest 4=


int soma(int v[], int n) {
	int i,s;
	s=0;
	for(i=0;i<n;i++)
		if(v[i]%%==0 && v[i]%3!=0)
			s=s+v[i];
	return s;
}



quest 5=


void converteParaMinusculas(char str[]) {
	int i;
	for(i=0;str[i]!='\0';i++)
		if(str[i]>='A' && str[i]<='Z')
			str[i]=str[i]+32;

}
