strcpy - Como copiar uma string em C
strcpy: char *strcpy( char *dest, char *orig );
Fornecemos a string de origem e ela é copiada e armazenada na string de destino, não importando como era a string de destino anteriormente.



strcpy() - Como copiar uma string em outra, em C
Nesse exercícios, temos que copiar todos os caracteres da string de origem para a string de destino.
Ou seja, vamos copiar do elemento de índice 0 da string de origem, até o índice que contém o delimitador \0.

Para isso, podemos usar a função strlen(), que retorna o número de caracteres da string.
Note que, os caracteres visíveis na string de origem, são de 0 até strlen(orig) -1
E o caractere de índice strlen(orig) é o caractere delimitador \0.

Por isso, vamos copiar o caractere da posição 0 até o da posição strlen(orig), pois a nossa string de destino tem que ter o caractere delimitador ao final.

Veja como fica nosso código em C:


char *strcpy(char *dest, char *orig)
{
    int i;

    for(i=0 ; i < strlen(orig) ; i++)
        dest[i] = orig[i];

    return dest;
}

