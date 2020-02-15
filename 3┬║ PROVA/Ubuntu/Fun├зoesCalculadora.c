#include<stdio.h>


int soma(int v1, int v2){
    int res = v1+v2;
    return res;
}

int sub(int v1, int v2){
    int res = v1-v2;
    return res;
}

int mult(int v1, int v2){
    int res = v1*v2;
    return res;
}

int div(int v1, int v2)                                                                                                                                                                                                                       {
    int res = v1/v2;
    return res;
}

main(){
int res, v1,v2;

	printf("Digite um numero \t");
	scanf("%d",&v1);

	printf ("Digite outro numero \t");
	scanf("%d",&v2);

	res=soma(v1,v2);
	printf("\nSoma %d\n", res);

	res=sub(v1,v2);
	printf("Subtracao %d\n", res);

	res=mult(v1,v2);
	printf("Multiplicacao %d\n", res);

	res=div(v1,v2);
	printf("Divisao %d\n", res);

	return 0;
}

