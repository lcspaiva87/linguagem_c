#include <stdio.h>
int main(){
	float si,sf,aumento ,percentualAum;
		printf("\nDigite o salario inicial:\n");
		scanf("%f",&si);
  		if(si<1000)
			percentualAum=0.15;
  		else if(si>=1000&&si<2000)
			percentualAum=0.10;
  		else if(si>=2000&&si<=3000)
			percentualAum=0.05;
  		else if(si>3000)
			percentualAum=0.04;
			aumento=si*percentualAum;
			sf=si+aumento;
			printf("\nValor do aumento:\n%.2fR$",aumento);
			printf("\nSalrio final:\n%.2fR$\n",sf);
return 0;
}

