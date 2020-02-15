strlen - Como contar o número de caracteres em uma string
Lembrando que string é tudo aqui que vem antes do caractere delimitador \0, podemos calcular quantos caracteres uma string tem fazendo um laço percorrer todos seus elementos, desde o de índice 0 até o índice que do último caractere que não é o \0.

Para descobrir onde está o primeiro \0, basta fazermos a comparação de cada caractere com o \0.
Se o caractere comparado não for \0, incrementamos uma variável de contagem.
Ao final do looping, essa variável terá o número de caracteres da strings.

É bem simples, veja como fica nosso código C:

int strlen(char *str)
{
    int total=0;

    while( str[total] != '\0')
        total++;

    return total;
}


