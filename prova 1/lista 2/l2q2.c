
//*Faça um programa que imprima na tela os números 65 e 95 no formato de inteiro, de caractere, de hexadecimal e de octal.
#include <stdio.h>
    int main ()
    {   
    int x,y;
 
 
    printf("\nEntre com o número 65: ");
    scanf("%d",&x);
    printf("\nEntre com número 95: ");
    scanf("%d",&y);
    printf("\nformato de inteiro é %o e %o:",x,y );
 
    printf("\nformato de caractere é %c e %c: ",x,y);
     
    printf("\nformato de hexadecimal é %x e %x: ",x,y);
 
    printf("\nformato de octal  e'%o %o : ",x,y);
    printf("\nformato de ASCII  e'%d %d : ",x,y);
     
     
     
 
printf("\n\n");
return 0;
    }
