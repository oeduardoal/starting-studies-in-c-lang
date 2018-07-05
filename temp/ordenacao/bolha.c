#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include "../../eao.h"
#define TM 10
int main( )
{
    eao();
    printf("\nOrdenacao de vetor pelo metodo da selecao...\n\n");
    int vetor[TM] = {0};
    int i,j, tam, count, troca, aux;
    i = j =  tam =  count = aux = troca = 0;
    int ht =  1;
    tam = ( sizeof(vetor) / 4) - 1;

    for( count = 0; count < tam ; count++ ) vetor[count] = rand()%1000;

    while( ht == 1 )
    {
        ht = 0;
        j = 0;

        while( j < tam )
        {
            if( vetor[j] > vetor[j+1] )
            {
                ht = 1;
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                troca++;
                getchar();
                printf("%d --- %d\n", troca, j);
            }
            j++;
        }
        tam--;
    }

    tam = ( sizeof(vetor) / 4) - 1;
    printf("\nForam realizadas %d trocas\n\n", troca );
    for( count = 0; count < tam ; count++ ) printf("%d %d\n", vetor[count], count );
    return 0;
}
