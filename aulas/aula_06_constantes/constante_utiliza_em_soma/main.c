#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int nro = 10;
    int soma = nro + 1;
    printf("Constante %d \n", nro);
    //O abaixo está errado, afinal, uma constante NÃO pode ser alterado durante a execução do programa.
    nro = 12;

    system("pause");
    return 0;
}
