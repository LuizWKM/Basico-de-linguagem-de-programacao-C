#include <stdio.h>
#include <stdlib.h>
//no caso abaixo estamos definindo a variavel PI com 3.1415 como uma constante. utilizando #define
#define PI 3.1415
int main()
{
    float f = PI + 1;
    printf("PI = %f \n", f);
    //Abaixo mais um exemplo de jeito errado de usar constante, caso queira rodar o programa apague o PI = 12.4 abaixo.
    PI = 12.4;

    system("pause");
    return 0;
}
