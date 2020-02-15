 #include <stdio.h>

int par_impar(int n);
int main() {
int n;
printf("\nEntre com um numero: ");
scanf("%d",&n);
par_impar(n);
}
int par_impar(int n){
if(n%2==0){
printf("\nNúmero é par!!\n");
return 0;
}
else{
printf("\nNúmero é ímpar!!\n");
return 1;
}

}
