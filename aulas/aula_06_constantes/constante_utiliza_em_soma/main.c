#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int nro = 10;
    int soma = nro + 1;
    printf("Constante %d \n", nro);
    //O abaixo est� errado, afinal, uma constante N�O pode ser alterado durante a execu��o do programa.
    nro = 12;

    system("pause");
    return 0;
}
