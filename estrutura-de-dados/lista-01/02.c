
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
int fibo( int n ){
    if(n == 1) {
        return 0;
    } else if(n == 2) {
        return 1;
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main()
{
    int pos = 30;
    int num = fibo( pos );
    printf("\n%d", num);

};
