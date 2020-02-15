#include <stdio.h>
int main(){
float nota1,nota2,media;
printf("\nEntre com a 1º nota: ");
scanf("%f",&nota1);
printf("\nEntre com a 2º nota: ");
scanf("%f",&nota2);
media=(nota1*2+nota2*3)/5;
if(media>=6)
printf("\nsua Média é %.1f:aprovado",media);
else
printf("\nSua Média é %.1f:reprovado",media);
return 0;
}
