
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

/*
* 
* @ Data: 13.09.2018
* @ Autor: Eduardo Almeida
* @ Matricula: 17.2.000024
*
*/
void eao()
{
    system("@cls||clear");
    printf("\n");
    printf("########################\n");
    printf("\nESCRITO POR EDUARDO ALMEIDA - 17.2.000024\n\n");
    printf("########################\n");
    printf("\n\n");
    printf("Aperte enter...");
    getchar();
    system("@cls||clear");
}

int contador = 1;

void impares(int x)
{
    if (contador <= x)
    {
        printf("\n%d", contador);
        contador += 2;
        impares(x);
    }
}

int main()
{
    eao();
    int x = 0;
    printf("\nEntre com o numero impar inteiro: ");
    scanf("%d", &x);
    impares(x);

    return (0);
};
