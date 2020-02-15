//Algoritmo da ordenação crescente e decrescente

//Para duas variaveis: a e b. Na ordem crescente.

	if(a>b) {
		aux=a;
		a=b;
		b=aux;
	}

//Para duas variaveis: a e b. Na ordem decrescente.

	if(a<b) {
		aux=a;
		a=b;
		b=aux;
	}
	
//Para tres variaveis: a,b,c. Na ordem crescente.

	if(a>b) {
		aux=a;
		a=b;
		b=aux;
	}
	
	if(a>c) {
		aux=a;
		a=c;
		c=aux;
	}
	
	if(b>c) {
		aux=b;
		b=c;
		c=aux;
	}
	
//Para tres variaveis: a,b,c. Na ordem decrescente.

	if(a<b) {
		aux=a;
		a=b;
		b=aux;
	}
	
	if(a<c) {
		aux=a;
		a=c;
		c=aux;
	}
	
	if(b<c) {
		aux=b;
		b=c;
		c=aux;
	}
	
	
