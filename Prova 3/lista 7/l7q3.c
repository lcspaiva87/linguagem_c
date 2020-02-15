#include <stdio.h>
char maiminu(char c);
int main(){
	char ch,mai;
	printf("\nDigite um carcatere: ");
	ch=getchar();

	mai=maiminu(ch);

	printf("\nCorrespondente maiúscula de \'%c\': \'%c\'",ch,mai);

	printf("\n\n");
	return 0;
}
char maiminu(char c){
	if(c>='A'&& c<='Z')
		return c+32;

	else
			return c;
}

