Variaveis locais, globais e parametros formais:

#include <stdio.h>
   
		//Variáveis globais

int x,y=2;

		//protóticos

int func(int k,int z);

int main() {
	
	int x,int z,int r;
	x=1;
	z=2;
	r=func(x,z);
	printf("\n %d",r+x);
	return 0;
}
int func(int k,int z) {
	int m;
	m=2*y+k+z;
	x=2*m;
	return m;
}
