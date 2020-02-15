#include <stdio.h>
    int main()
{
     int i,n,fat;  
     printf("Digite um numero inteiro para caucular o fatorial:\n");
     scanf("%d",&n);
     fat=1;
     for (i=1;i<=n;i=i+1)
     fat=fat*i; 
     printf("\nFatorial:%d",fat);    
	  printf("\n\n");
     return 0;
}


