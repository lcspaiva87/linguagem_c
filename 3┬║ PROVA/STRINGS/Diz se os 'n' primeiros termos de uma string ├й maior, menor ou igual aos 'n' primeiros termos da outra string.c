memcmp - Saber se uma string é menor, maior ou igual a outra
memcmp: int memcmp( char *str1, char *str2, int n );
Vamos aprender como implementar a função memcmp(), que recebe duas strings e compara seus 'n' primeiros elementos, de forma lexicográfica.

Se a string 1 for menor que a string 2, retorna -1.
Se a string 1 for maior que a string 2, retorna 1.
Se as strings forem iguais, retorna 0.


A função memcmp() - Como saber se uma string é maior, menor ou igual a outra

Vamos comparar as 'n' primeiras posições das duas strings, ou seja, de 0 até n-1.
A comparação é feita caractere por caractere.
Lembrando que caracteres são, na verdade, números inteiros e sua representação está na tabela ASCII.

Assim, uma comparação de letras seria:
a = b
a < b
z > a

Portanto, podemos comparar diretamente os caracteres das strings.
Se em algum momento da comparação, algum caractere da string 1 for menor que o da string 2, a função pára e retorna -1.
Se em algum momento da comparação, algum caractere da string 2 for maior que o da string 2, a função pára e retorna 1.

Após todo o processo, se não retornar nem 1 ou -1, é porque as strings são idênticas e devem retornar valor 0.

Veja como fica nosso código:


int memcmp(char *str1, char *str2, int n)
{
    int i;

    for(i=0 ; i < n ; i++)
    {
            if(str1[i] < str2[i])
                return -1;
            else
                if(str1[i] > str2[i])
                    return 1;
    }
    return 0;
}

Note, porém, que uma letra maiúscula difere de uma minúscula. Para tratar essa comparação sem que isso importe, devemos passar os caracteres para maiúsculo ou minúsculo.

Para passar tudo para maiúsculo, podemos usar a função toupper(), da biblioteca ctype.h:
toupper( str1[i] ) < toupper( str2[i] )

Ou passar tudo para minúsculo, com a função tolower(), também da ctype.h e análoga ao exemplo acima.

