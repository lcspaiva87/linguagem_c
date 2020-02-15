#include <stdio.h>
int main(){
	int n,i=0;
	float tc,tf,mc,mf;
		printf("\nDigite a quantidades de temperaturas a serem lidas:\n");
		scanf("%d",&n);
 		mc=0;
 		mf=0;
   	while(i<n) {
  			printf("Digite a temperatura %d em Celsius:\n",i+1);
  			scanf("%f",&tc);
  			mc=mc+tc;
  			tf=(tc*5/9)+32;
  			mf=mf+tf;
 			i++;
}
		  mc=mc/n;
  		  mf=mf/n;
  		  printf("\nMÃ©dia em Celsius:\n%.2f",mc);
	     printf("\nMÃ©dia em Fahrenheit:\n%.2f",mf);
        if(mc>=18.0&&mc<=20.0)
		  printf("\nTemperatura agradÃ¡vel\n");
			if(mc<18.0)
 				printf("\nEstÃ¡ frio\n");
 			if(mc>20.0)
				 printf("\nEstÃ¡ quente\n");
  return 0;
}


//4-B
#include <stdio.h>
int main(){
	int n,i=0;
	float tc,tf,mc,mf;
		printf("\nDigite a quantidades de temperaturas a serem lidas:\n");
		scanf("%d",&n);
 		mc=0;
 		mf=0;
   	do{
  			printf("Digite a temperatura %d em Celsius:\n",i+1);
  			scanf("%f",&tc);
  			mc=mc+tc;
  			tf=(tc*5/9)+32;
  			mf=mf+tf;
 			i++;
      }while(i<n);
		  mc=mc/n;
  		  mf=mf/n;
  		  printf("\nMÃ©dia em Celsius:\n%.2f",mc);
	     printf("\nMÃ©dia em Fahrenheit:\n%.2f",mf);
        if(mc>=18.0&&mc<=20.0)
		  printf("\nTemperatura agradÃ¡vel\n");
			if(mc<18.0)
 				printf("\nEstÃ¡ frio\n");
 			if(mc>20.0)
				 printf("\nEstÃ¡ quente\n");
  return 0;
}
