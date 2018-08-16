
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

int soma( int n ){
    if( n <= 1 )
        return 1;
    return n + soma(n - 1);
}

int main()
{
    int num = 2;
    int som = soma( num );

    printf("\n%d", som);

};
