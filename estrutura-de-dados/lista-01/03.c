
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
int expo( int n ){
    if( n <= 1 )
        return n * 2;
    return 2 * expo(n-1);

}

int main()
{
    int pos = 5;
    int num = expo( pos );
    printf("\n%d", num);

};
