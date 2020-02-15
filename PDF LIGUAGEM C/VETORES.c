ue são vetores, como declarar e quando usar
Dando início a mais uma importante unidade em nosso curso online e gratuito de C, vamos iniciar nossos estudos sobre as estruturas de dados.


Neste artigo inicial da seção de vetores de nossa apostila, vamos estudar o tipo de estrutura de dado mais simples: os vetores, também conhecidos por arrays.

 O que é um vetor em C... E para quê serve?
Imagine que você foi contratado para criar um programa em C para uma escola.
Nesse programa você tem que armazenar as notas dos alunos, nomes, médias, nome dos pais, faltas e tudo mais.

E aí? Vai declarar quantos inteiros pra armazenar as notas? Centenas? Milhares?
E quantos caracteres para armazenar esses nomes?
E quantos floats para armazenar as notas e médias, de cada matéria, para cada aluno?

É quase que humanamente impossível fazer isso. Mas não se preocupe, pois você programa em C e tem total domínio de sua máquina, você não perderá tempo declarando inúmeras variáveis, fará com que o computador faça isso pra você.

E é disso que se trata estrutura de dados: estudar, manipular, organizar, salvar e extrair informações de uma grande quantidade de dados. Automatizar esse processo para que não precisemos declarar, inicializar e fazer outras operações em nossas variáveis de um modo manual.

Como declarar um vetor em C
Agora que já sabe para que serve e como são importantes, vamos começar a usar os vetores/arrays em linguagem C.

A sintaxe é a seguinte:
tipo nome[numero_de_elementos];

Ou seja, a sintaxe é a mesma de declarar uma variável normal, mas não vamos declarar somente uma, vamos declarar várias. E o par de colchetes ao lado do nome da variável serve para isso: especificar quantas daquelas variáveis estamos declarando.

Por exemplo, vamos declarar 10 inteiros que vão representar a idade de 10 pessoas:
int idade[10];

Agora 50 floats que vão representar a nota de 50 alunos:
float notas[50];

Bem simples.






A contagem dos índices começa sempre do 0
Embora tenhamos declarado as variáveis com um nome, elas não podem ter um mesmo nome. Por isso, um número é associado ao seu nome.

No caso da idade[10], as variáveis inteira são:
idade[0], idade[1], idade[2], ..., idade[9]
Isso mesmo, o primeiro elemento é sempre o zero.
Por isso as lições do curso C Progressivo começam do número 0.
Por isso as questões começam da questão de número 0.

Mais uma vez, isso é muito básico e importante: a contagem, em linguagem C, começa do 0.

No caso das notas[50], as variáveis do tipo float são:
notas[0], notas[1], notas[2], ... , notas[48] e notas[49]

Então, se uma variável tem ‘n’ elementos, seus índices variam, sempre, de 0 até n-1, totalizando ‘n’ elementos.

Como usar acessar os elementos de um vetor em C
Declaramos várias variáveis com o mesmo nome, mas como se referir, individualmente, a cada uma delas?
A resposta é simples: usando números, ou índices.

'notas' é um vetor de floats.
Se quiser usar um tipo float, use a seguinte sintaxe: nome[indice]

Então, suas variáveis, de forma independente, são chamadas de: notas[0]. notas[1], notas[10] etc.
Esses serão seus nomes. Você pode usar como usaria as variáveis (na verdade elas são variáveis, como se tivessem sido declaradas manualmente), por exemplo:

Armazenar a nota de um aluno que tirou 10
nota[10]= 10.0 //esse programa em C

Somar a nota de dois alunos:
float soma = nota[3] + nota[4];

Incrementar:
nota[5]++;

Enfim, pode fazer tudo. São variáveis do tipo float normais.
A diferença é que os nomes das variáveis têm números, que são chamados, em programação, de índice, que são criados automaticamente quando você declara um bloco de vários elementos (vulgo vetores, ou arrays).

Como de costume, para fixar melhor, vamos aos exemplos de código!

Exemplo 1: Faça um programa que peça 3 números inteiros ao usuário, armazene em um vetor, depois mostre o valor de cada elemento do vetor, assim como seu índice.

Primeiro declaramos um vetor de inteiros, contendo 3 elementos:
int numbers[3];

Agora vamos pedir pro usuário preencher esses três números.

Lembre-se que você é programador e sabe que os índices vão de 0 até 2.
Mas o usuário não. Pro leigo, é número 1, número 2 e número 3, não inicia no 0.

No laço for, o nosso 'indice' vai de 0 até 2.
Porém, ao recebermos o valor de índice 'indice', estamos pedindo ao usuário o valor do número 'indice+1'.

Por exemplo, para armazenar um valor no 'number[0]', vamos pedir o número '0+1' ao usuário.
Para armazenar um valor no 'number[1]', vamos pedir o número '1+1' ao usuário.
Para armazenar um valor no 'number[2]', vamos pedir o número '2+1' ao usuário.

Usaremos outro laço for para exibir o valor dos números, através dos índices, que variam de 0 até 2.
Porém, novamente, temos que mostrar 1 ao 3 pro cliente, pois pra ele não faz sentido 'número 0 -> valor 10 ' e sim 'número 1 -> valor 10'.

Então, nosso código em C fica:

#include <stdio.h>
 
int main()
{
    int number[3],
        indice;
 
        for(indice=0 ; indice <= 2 ; indice++)
        {
            printf("Entre com o numero %d: ", indice+1);
            scanf("%d", &number[indice]);
        }
 
        for(indice=0 ; indice <= 2 ; indice++)
            printf("Numero %d = %d\n", indice+1, number[indice]);
 
}


Exemplo: Faça um programa em C que peça ao usuário duas notas que ele tirou e mostre a média.
Use vetores! Aliás, use somente um vetor para essas três variáveis.

Se não fosse pelo uso do vetor, você faria esse exemplo com o pé nas costas e dançando salsa.
Mas tem que usar um vetor.

Vamos declarar um vetor de float de três elementos.
Nas duas primeiras posições armazenamos as notas do usuário (nota[0] e nota[1]), e na terceira posição (nota[2])  armazenaremos a média (nota[0] + nota[1])/2.

Veja como ficou nosso código C:
#include <stdio.h>

int main()
{
    float notas[3];

    printf("Insira sua primeira nota: ");
    scanf("%f", &notas[0]);

    printf("Insira sua segunda nota: ");
    scanf("%f", &notas[1]);

    notas[2] = (notas[0] + notas[1])/2;

    printf("Sua media e: %.2f\n", notas[2]);
}

Sim, muito simples. São simplesmente variáveis normais, a diferença é que são várias delas.
É até mais fácil trabalhar com vetores do que com variáveis declaradas manualmente, por conta dos índices.
Afinal, números tem uma ordem lógica, já os nomes que damos as variáveis não.

Até fazemos uma ressalva, evite usar variáveis como: a, b, c, x, y, i, j... ou a primeira letra que você encontrou.

Use 'linha', 'coluna', 'indice', 'contador', 'count', 'media', 'nota', 'continuar' etc, como fizemos aqui.
Pode parecer perda de tempo usar uma variável com nome tão grande. Mas é porque ainda estamos estudando.

Quando você for profissional e já tiver feito programa com milhares de linhas de código, ficará impossível entender o que é sopa de letras que você usou como nome de variáveis.
Mas se tiver usado nomes que façam sentido, você e outros programadores também entenderão de maneira mais simples.

Não é um conselho, é um diferencial.
Tags: Arrays, Como programar em C, Vetores
