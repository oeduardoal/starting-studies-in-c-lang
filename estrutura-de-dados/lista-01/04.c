
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
int f(int a, int b) // considere a > b
{
    if (b == 0)
        return a;
    else
        return f(b, a % b);
}

int main()
{
    int num = f(10, 10);
    printf("\n%d", num);
};
