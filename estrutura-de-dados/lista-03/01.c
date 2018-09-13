
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

int myPow(int x, int n)
{
    if (n == 1)
        return x;

    return x * myPow(x, n - 1);
}

int main()
{
    eao();
    int base = 0, expoente = 0;

    printf("\nEntre com a base: ");
    scanf("%d", &base);
    printf("\nEntre com o expoente: ");
    scanf("%d", &expoente);
    printf("\nO resultado eh: %d\n", myPow(base, expoente));

    return (0);
};
