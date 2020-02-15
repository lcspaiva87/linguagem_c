#include <stdio.h>
int main(){
float p,a,imc;
printf("\nENtre com sua massa em kg: ");
scanf("%f",&p);
printf("\nEntre com sua altura: ");
scanf("%f",&a);
imc=p/(a*a);
printf("\nseu imv e igual: %.2f",imc);
return 0;
}
