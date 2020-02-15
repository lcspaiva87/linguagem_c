#include <stdio.h>
void C(int n);

int main () {

	int n;

	printf("\nEntre com um valor\t");
	scanf("%d",&n);
	
	C(n);
	
	return 0;
	
	}
	
void C(int n){
	
	int i;

	for(i=0;i<n;i++){
	
		printf("%3dº Eu amo C\n",i+1);
		
		
	}
	printf("\n\n");
}
