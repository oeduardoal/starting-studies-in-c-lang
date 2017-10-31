#include<stdio.h>
#define TM 5

/*
*    @author Eduardo Almeida <oeduardoal@gmail.com>
*    @problem
*         Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice,
*         colocando o resultado em um terceiro vetor. Mostre o vetor resultante
*/

int main()
{
    int V1[TM],V2[TM],res[TM];
    int c = 0;
    
    // zerar
    for(c = 0 ; c < TM; c++){
        V1[c]   = 0;
        V2[c]   = 0;
        res[c]  = 0;
    }
         
    for(c = 0 ; c < TM; c++){
        printf("Escreva o numero para: %d (Primeiro Vetor) ...... ",c);
        scanf("%d",&V1[c]);
    }

    printf("\n");

    for(c = 0 ; c < TM; c++){
        printf("Escreva o numero para: %d (Segundo Vetor) ...... ",c);
        scanf("%d",&V2[c]);
    }

    for(c = 0 ; c < TM; c++){            
        res[c] = V1[c] * V2[c]; 
        printf("\nres[%d] = %d\n",c,res[c]);   
    }

    printf("\n");
    return 0;
}
