memcpy - Copiando caracteres de uma string para outra
memcpy: char* memcpy( char *dest, char *src, int n );
Copia os 'count' primeiros caracteres da string 'src' e coloca nas primeiras 'count' da string 'dest'.

Como implementar a função memcpy()
Primeiro recebemos do usuário duas strings: a 'orig', que é a string de origem, e a 'dest', que é a string de destino.

Ou seja, vamos pegar os 'n' primeiros caracteres da string de origem, e colocar nas 'n' primeiras posições da string de destino.

Como estamos passando strings (vetores), estamos passando seu endereço.
Logo, essa função vai alterar a string de destino.

Para fazer isso, basta fazer com que a string dest receba os 'n' primeiros caracteres (da posição 0 até a n-1) da string orig.

Veja como ficou o código C para implementar essa função:


char *memcpy(char *dest, char *orig, int n)
{
    int i;

    for(i=0 ; i < n ; i++)
        dest[i] = orig[i];

    return dest;
}
