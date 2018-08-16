
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/*
* 
* @ Data: 16.08.2018
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/

int somaQ(int n)
{
    if (n <= 1)
        return 1;
    return n * n + somaQ(n - 1);
}

int main()
{
    int num = 2;
    int som = somaQ(num);

    printf("\n%d", som);
};
