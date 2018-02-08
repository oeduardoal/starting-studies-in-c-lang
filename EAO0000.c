#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int numero = 12345;
    numero = numero%1000;
    numero = numero/10;
    numero = numero/10;
    // Usando o % e /

    printf("\nO Caractere do meio eh = %d\n\n",numero);

}