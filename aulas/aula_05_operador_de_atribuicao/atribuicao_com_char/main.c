#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declarando a variavel int x com valor de 97
    int x = 97;
    //declarando duas variveis char, ch1 e ch2, tendo ch2 como valor o caracter 'A'
    char ch1, ch2 = 'A';
    //falando que o caracter correspondente a ch1 é o numerado 97 na tabela ASCII que é igual a 'a'
    ch1 = x;
    //imprimindo o caracter pertencente a ch1
    printf("ch1 = %c\n", ch1);
    //falando que x agora é equivalente a numeração ASCII de 'A'
    x = ch2;
    //imprimindo o valor 65 que equivale a 'A' na tabela ASCII
    printf("x = %d\n", x);

    //os dois abaixo param o programa e finalizam-o, respectivamente.
    system("pause");
    return 0;
}
