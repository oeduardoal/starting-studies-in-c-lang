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
    int count;
    int i,j, min, tam, aux, troca, achei, inicio, fim, meio, quero;
    i = j = min = tam = troca = 0;
    tam = ( sizeof(vetor) / 4) - 1;

    for( count = 0; count < tam ; count++ ) vetor[count] = rand()%100;

    for( i = 0; i <= tam; i++ )
    {
        min = i;

        for( j = min + 1; j <= tam - 1; j++ )
        {
            if( vetor[j] < vetor[min] )
            {
                min = j;
                 troca++;
            }
        }        
         
        aux = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = aux;
    }
    
    printf("\nForam realizadas %d trocas\n\n", troca );
    for( count = 0; count < tam ; count++ ) printf("%d %d\n", vetor[count], count );

    achei = 0;
    count = 0;
    inicio = 0;
    quero = 8;
    fim = ( sizeof(vetor) / 4) - 1;
    while( achei == 0 )
    {
        meio = ( inicio + fim ) / 2;

        if( quero == vetor[meio] )
        {
            achei = 1;
            printf("\nAchei o numero que eu queria %d na posicao %d\n", quero, meio);
        }
        else if( quero < vetor[meio] )
        {
            fim = meio - 1;
        }
        else if( quero > vetor[meio] )
        {
            inicio = meio + 1;
        }

        if( inicio > fim )
        {
            achei = 1;
            printf("\nO numero %d nao esta no vetor, podia estar em %d e %d \n", quero, vetor[fim], vetor[inicio]);

        }
        count++;
    }

    
    return 0;
}
