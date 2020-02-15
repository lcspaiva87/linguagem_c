/* Faça um programa em c que:
a)Leia e imprima uma string:
b)Imprima o 2° caractere string:
c)Imprima a quantidade de caracteres da string:
d)Imprima somente as letras maiusculas:
e)Imprima somente as letras minusculas:
f)Converta a string para letra maiusculas:
g)Converta a string para letra minusculas:
h)Inverta a string: */

#include <stdio.h>
#include <string.h>
int main() {
   int i,n,aux,cont;
   char str[50];
      printf("\n Entre com uma string: ");
      gets(str);
      printf("\n String lida: %s",str);
      printf("\n 2° Caractere: %c",str[1]); //o 2° caractere ta na posicao 1, eo primeiro na posição zero...
      //letra c
      cont=0;
      for(i=0;str[i]!='\0';i++) {
         cont++;
      printf("\n Quantidade de Caracteres: %d",cont);
      }
      //letra d
      for(i=0;str[i]!='\0';i++) {
         if(str[i]>='A' && str[i]<='Z')
            printf("\n%c",str[i]);
      }
      cont=0;
      for(i=0;str[i]!='\0';i++) {
         if(str[i]>='a' && str[i]<='z')
            cont++;
               printf("\n Quantidade de letras minusculas: %d",cont);
      }
      for(i=0;str[i]!='\0';i++) {
         if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
      }
      printf("\n String convertida para maiusculas: %s",str);
      for(i=0;str[i]!='\0';i++) {
         if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
      }
      printf("\n String convertida para minusculas: %s",str);
      //letra h
      
	   printf("\nString original  : %s",str);
	   n=strlen(str); // obtém o tamanho da string
	   for(i=0;i<n/2;i++) {
		   aux = str[i];
		   str[i] = str[n-1-i];
		   str[n-1-i] = aux;
	   }
	   printf("\nString invertida : %s",str);
      printf("\n\n");
      return 0;
}
