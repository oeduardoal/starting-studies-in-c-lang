
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
int x(int n) // considere a > b
{
    if (n == 1 || n == 2)
        return n;
    else
        return x(n - 1) + n * x(n - 2);
}

int main()
{
    int num = x(4);
    printf("\n%d", num);
};
