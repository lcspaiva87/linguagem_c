#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char frase1[100] = "Gosto";
  strcat(frase1, " muito de ");
  strcat(frase1, " programar em C");

  // exibe o resultado
  printf("%s\n\n", frase1);

  system("PAUSE");
  return 0;
}
