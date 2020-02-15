// Correção da Prova 1

//Quest1

m=(x+y)/2;
printf("\n Media: ",m);


//Quest2

char c;
(c>='A' && C<='Z') || (c>='a' && C<='z') ? printf("\n Caractere %c é letra",c) : printf("\n Nao e letra",c);


//Quest3

float a,b;
//ler os valores de a e b

(a>b) ? printf("\n Maior lado: %f",a) : printf("\n Maior lado: %f",b);


//Quest4
//par ou impar...

(x%2!=0) ? printf("\n%d é ímpar eo numero sucessor par é %d",x,x+1) : printf("\n%d é par eo numero antecessor impar é %d",x,x-1);


//Quest5

#include<stdio.h>
#define DIARIA 20.0
#define IMP 0.08
int main() {

int dias;
float VB,VI,VL;

printf("\n Entre com o numero de dias: ");
scanf("%d",&dias);

VB=dias*DIARIA;
VI=VB*IMP;
VL=VB-VI;

.
.
.


