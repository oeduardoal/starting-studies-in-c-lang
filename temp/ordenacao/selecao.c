#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include "../../eao.h"
#define TM 50
int main( )
{
    eao();
    printf("\nOrdenacao de vetor pelo metodo da selecao...\n\n");
    int vetor[TM] = {0};
    int count;
    int i,j, min, tam, aux, troca;
    i = j = min = tam = troca = 0;
    tam = ( sizeof(vetor) / 4) - 1;

    for( count = 0; count < tam ; count++ ) vetor[count] = rand()%1000;

    for( i = 0; i <= tam; i++ )
    {
        min = i;

        for( j = min + 1; j <= tam - 1; j++ )
        {
            if( vetor[j] < vetor[min] )
            {
                min = j;
            }
        }        
         
        aux = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = aux;
        troca++;
    }

    printf("\nForam realizadas %d trocas\n\n", troca );
    for( count = 0; count < tam ; count++ ) printf("%d %d\n", vetor[count], count );
    return 0;
}
