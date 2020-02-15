#include <stdio.h>
int main(){
	int i,n;
	float tc,tf,mc,mf;
		printf("\nDigite a quantidades de temperaturas a serem lidas:\n");
		scanf("%d",&n);
 		mc=0;
 		mf=0;
   	for (i=0;i<n;i++) {
  			printf("Digite a temperatura %d em Celsius:\n",i+1);
  			scanf("%f",&tc);
  			mc=mc+tc;
  			tf=(tc*5/9)+32;
  			mf=mf+tf;
	}
  			mc=mc/n;
  			mf=mf/n;
  			printf("\nMedia em Celsius:\n%.2f",mc);
  			printf("\nMedia em Fahrenheit:\n%.2f",mf);
   		if(mc>=18.0&&mc<=20.0)
 				printf("\nTemperatura agradÃ¡vel\n");
  			if(mc<18.0)
 				printf("\nEstÃ¡ frio\n");
  			if(mc>20.0)
				printf("\nEstÃ¡ quente\n");
  return 0;
}


